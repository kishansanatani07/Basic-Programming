#include <stdio.h>
#include <ctype.h>

#define MAX_SEMESTERS 8
#define MAX_SUBJECTS 8
#define MAX_NAME_LEN 30

// Helper to clear trailing newlines from input buffer
void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

// 1. DEDICATED FUNCTION: Purely calculates percentage for any given marks combination
float calculatePercentage(float gained, float total)
{
    if (total <= 0)
        return 0.0;
    return (gained / total) * 100.0;
}

// 2. DEDICATED FUNCTION: Computes and prints running metrics "Till Now"
float displayRunningCGPA(float total_gained, float total_max)
{
    float overall_percentage = calculatePercentage(total_gained, total_max);
    float current_cgpa = overall_percentage / 10.0; // Standard 10-point conversion

    printf("\n-------------------------------------------------");
    printf("\n>>> ACADEMIC STATUS TILL NOW <<<");
    printf("\n  Total Marks Gained: %.2f", total_gained);
    printf("\n  Total Max Marks:    %.2f", total_max);
    printf("\n  Cumulative Percentage: %.2f%%", overall_percentage);
    printf("\n  CURRENT CGPA TILL NOW:  %.2f / 10.0", current_cgpa);
    printf("\n-------------------------------------------------\n");

    return current_cgpa;
}

// 3. SCAN FUNCTION: Gets subject names first, then prompts for marks sequentially
int scanSemesterSubjects(char sub_names[MAX_SUBJECTS][MAX_NAME_LEN], float sub_gained[], float sub_total[], int semester_num)
{
    int num_subjects = 0;

    printf("\n--- Scanning Data for Semester %d ---\n", semester_num);
    printf("How many subjects are you studying in Semester %d? (Max %d): ", semester_num, MAX_SUBJECTS);
    scanf("%d", &num_subjects);

    while (num_subjects < 1 || num_subjects > MAX_SUBJECTS)
    {
        printf("[ERROR]: Please enter a valid number of subjects between 1 and %d: ", MAX_SUBJECTS);
        scanf("%d", &num_subjects);
    }

    // PHASE 1: Scan all names first
    printf("\n>>> Step 1: Enter all subject names <<<\n");
    clearInputBuffer(); // Clear once right before entering the loop
    for (int j = 0; j < num_subjects; j++)
    {
        printf("  Enter Name/Code for Subject %d: ", j + 1);
        scanf("%29[^\n]", sub_names[j]);
        clearInputBuffer(); // Clear the newline left behind by the current string read
    }

    // PHASE 2: Print subjects one-by-one and collect marks
    printf("\n>>> Step 2: Entering marks for collected subjects <<<\n");
    for (int j = 0; j < num_subjects; j++)
    {
        printf("\n[Processing Marks for: %s]\n", sub_names[j]);

        printf("  Enter maximum marks possible: ");
        scanf("%f", &sub_total[j]);
        while (sub_total[j] <= 0)
        {
            printf("  [ERROR]: Maximum marks must be greater than 0. Re-enter: ");
            scanf("%f", &sub_total[j]);
        }

        printf("  Enter marks you gained: ");
        scanf("%f", &sub_gained[j]);
        while (sub_gained[j] < 0 || sub_gained[j] > sub_total[j])
        {
            printf("  [ERROR]: Gained marks must be between 0 and %.2f. Re-enter: ", sub_total[j]);
            scanf("%f", &sub_gained[j]);
        }
    }

    return num_subjects;
}

// 4. TRANSCRIPT DISPLAY FUNCTION: Final official breakdown printout
void printFinalAcademicTranscript(float sub_gained[MAX_SEMESTERS][MAX_SUBJECTS],
                                  float sub_total[MAX_SEMESTERS][MAX_SUBJECTS],
                                  char sub_names[MAX_SEMESTERS][MAX_SUBJECTS][MAX_NAME_LEN],
                                  int subjects_per_sem[], float pct[], float sgpa[], int sem_count, float final_cgpa)
{

    printf("\n=================================================================\n");
    printf("                    FINAL GRADUATION TRANSCRIPT                  \n");
    printf("=================================================================\n");

    for (int i = 0; i < sem_count; i++)
    {
        printf("\n [SEMESTER %d] Breakdown:\n", i + 1);
        printf("   ---------------------------------------------------------\n");
        printf("   %-25s | %-12s | %-12s\n", "Subject Name", "Marks Gained", "Max Marks");
        printf("   ---------------------------------------------------------\n");

        for (int j = 0; j < subjects_per_sem[i]; j++)
        {
            printf("   %-25s | %-12.2f | %-12.2f\n", sub_names[i][j], sub_gained[i][j], sub_total[i][j]);
        }
        printf("   ---------------------------------------------------------\n");
        printf("   Performance Metrics: Percentage = %.2f%% | SGPA = %.2f\n", pct[i], sgpa[i]);
        printf("   =========================================================\n");
    }

    printf("\n=================================================================\n");
    printf(" TOTAL SUMMARY MATRIX\n");
    printf(" Total Semesters Completed: %d\n", sem_count);
    printf(" Graduation Cumulative CGPA: %.2f / 10.0\n", final_cgpa);
    printf("=================================================================\n");
}

// 5. STORAGE & PROCESSING SYSTEM
void manageAcademicSystem()
{
    char sub_names[MAX_SEMESTERS][MAX_SUBJECTS][MAX_NAME_LEN] = {0};
    float sub_gained[MAX_SEMESTERS][MAX_SUBJECTS] = {0};
    float sub_total[MAX_SEMESTERS][MAX_SUBJECTS] = {0};
    int subjects_per_sem[MAX_SEMESTERS] = {0};

    float mrk_gained[MAX_SEMESTERS] = {0};
    float mrk_total[MAX_SEMESTERS] = {0};
    float percentage[MAX_SEMESTERS] = {0};
    float sgpa[MAX_SEMESTERS] = {0};

    float career_gained_accum = 0;
    float career_total_accum = 0;
    float running_cgpa = 0.0;

    int current_semester = 0;
    char choice;

    while (current_semester < MAX_SEMESTERS)
    {
        int i = current_semester;

        // Run sequential scanning
        subjects_per_sem[i] = scanSemesterSubjects(sub_names[i], sub_gained[i], sub_total[i], i + 1);

        // Process individual semester sums
        for (int j = 0; j < subjects_per_sem[i]; j++)
        {
            mrk_gained[i] += sub_gained[i][j];
            mrk_total[i] += sub_total[i][j];
        }

        // Use our single dedicated function to compute semester metrics
        percentage[i] = calculatePercentage(mrk_gained[i], mrk_total[i]);
        sgpa[i] = percentage[i] / 10.0;

        // Update overall running continuous variables
        career_gained_accum += mrk_gained[i];
        career_total_accum += mrk_total[i];

        // Call the brand new dedicated "Till Now" function
        running_cgpa = displayRunningCGPA(career_gained_accum, career_total_accum);

        current_semester++;

        if (current_semester == MAX_SEMESTERS)
        {
            printf("\nYou have reached the limit of %d semesters.\n", MAX_SEMESTERS);
            break;
        }

        printf("\nAre you studying in a next semester? (y/n): ");
        scanf(" %c", &choice);
        clearInputBuffer(); // Prevent leftover characters from leaking into the next semester
        if (tolower(choice) != 'y')
        {
            break;
        }
    }

    // Print final transcript summarizing all stored logs
    if (current_semester > 0)
    {
        printFinalAcademicTranscript(sub_gained, sub_total, sub_names, subjects_per_sem, percentage, sgpa, current_semester, running_cgpa);
    }
    else
    {
        printf("\nNo student records were processed.\n");
    }
}

int main()
{
    manageAcademicSystem();
    return 0;
}
