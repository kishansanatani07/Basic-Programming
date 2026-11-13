#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SEMESTERS 8
#define MAX_SUBJECTS 8
#define MAX_NAME_LEN 30

// --- STRUCT ARCHITECTURES ---
typedef struct STAFF
{
    char name_S[100];
    char post_S[100];
    char dep_S[100];
    int age_S;
    char cnt_S[16];
    char email_S[100];
} stf;

typedef struct Student
{
    char names[100];
    int age_s;
    char fth_s[100];
    char mth_s[100];
    char edu_s[100];
    int sem_s;
    char sub_s[400];
    char marks_s[400];
    float cgpa;
    char cnt_s[16];
    char add_s[100];
    char email_s[100];
} std;

typedef struct Teacher
{
    char name_t[100];
    char edu_t[100];
    char dep_t[100];
    int age_t;
    char cnt_t[16];
    char email_t[100];
} tch;

// --- UTILITY METHODS ---
void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

float calculatePercentage(float gained, float total)
{
    if (total <= 0)
        return 0.0;
    return (gained / total) * 100.0;
}

float displayRunningCGPA(float total_gained, float total_max)
{
    float overall_percentage = calculatePercentage(total_gained, total_max);
    float current_cgpa = overall_percentage / 10.0;

    printf("\n-------------------------------------------------");
    printf("\n>>> CURRENT PROGRESS TILL NOW <<<");
    printf("\n  Cumulative Percentage: %.2f%%", overall_percentage);
    printf("\n  CURRENT CGPA TILL NOW:  %.2f / 10.0", current_cgpa);
    printf("\n-------------------------------------------------\n");
    return current_cgpa;
}

// --- SCANNING FUNCTIONS ---

void scanStaffInfo(stf *s)
{
    printf("\n===================================\n");
    printf("     ENTER STAFF MEMBER DETAILS    \n");
    printf("===================================\n");
    clearInputBuffer();

    printf("Enter Full Name: ");
    scanf("%99[^\n]", s->name_S);
    clearInputBuffer();
    printf("Enter Post/Designation: ");
    scanf("%99[^\n]", s->post_S);
    clearInputBuffer();
    printf("Enter Department: ");
    scanf("%99[^\n]", s->dep_S);
    clearInputBuffer();
    printf("Enter Age: ");
    scanf("%d", &s->age_S);
    clearInputBuffer();
    printf("Enter Contact Number: ");
    scanf("%15[^\n]", s->cnt_S);
    clearInputBuffer();
    printf("Enter Email Address: ");
    scanf("%99[^\n]", s->email_S);
    clearInputBuffer();
}

void scanTeacherInfo(tch *t)
{
    printf("\n===================================\n");
    printf("       ENTER TEACHER DETAILS       \n");
    printf("===================================\n");
    clearInputBuffer();

    printf("Enter Full Name: ");
    scanf("%99[^\n]", t->name_t);
    clearInputBuffer();
    printf("Enter Education/Degree: ");
    scanf("%99[^\n]", t->edu_t);
    clearInputBuffer();
    printf("Enter Department: ");
    scanf("%99[^\n]", t->dep_t);
    clearInputBuffer();
    printf("Enter Age: ");
    scanf("%d", &t->age_t);
    clearInputBuffer();
    printf("Enter Contact Number: ");
    scanf("%15[^\n]", t->cnt_t);
    clearInputBuffer();
    printf("Enter Email Address: ");
    scanf("%99[^\n]", t->email_t);
    clearInputBuffer();
}

void processStudentAcademics(std *studentObj)
{
    char temp_sub_names[MAX_SUBJECTS][MAX_NAME_LEN];
    float temp_sub_gained[MAX_SUBJECTS];
    float temp_sub_total[MAX_SUBJECTS];
    float total_career_gained = 0;
    float total_career_max = 0;
    int actual_sems_processed = 0;
    char choice;

    studentObj->sub_s[0] = '\0';
    studentObj->marks_s[0] = '\0';

    printf("\n===================================\n");
    printf("     ENTER STUDENT PROFILE INFO    \n");
    printf("===================================\n");
    clearInputBuffer();

    printf("Enter Student Full Name: ");
    scanf("%99[^\n]", studentObj->names);
    clearInputBuffer();
    printf("Enter Age: ");
    scanf("%d", &studentObj->age_s);
    clearInputBuffer();
    printf("Enter Father's Name: ");
    scanf("%99[^\n]", studentObj->fth_s);
    clearInputBuffer();
    printf("Enter Mother's Name: ");
    scanf("%99[^\n]", studentObj->mth_s);
    clearInputBuffer();
    printf("Enter Previous Education Details: ");
    scanf("%99[^\n]", studentObj->edu_s);
    clearInputBuffer();
    printf("Enter Contact Number: ");
    scanf("%15[^\n]", studentObj->cnt_s);
    clearInputBuffer();
    printf("Enter Residential Address: ");
    scanf("%99[^\n]", studentObj->add_s);
    clearInputBuffer();
    printf("Enter Student Email Address: ");
    scanf("%99[^\n]", studentObj->email_s);
    clearInputBuffer();

    while (actual_sems_processed < MAX_SEMESTERS)
    {
        int current_sem = actual_sems_processed + 1;
        int num_subjects = 0;

        printf("\n--- Processing Academic Entries for Semester %d ---\n", current_sem);
        printf("How many subjects are you studying in Semester %d? (Max %d): ", current_sem, MAX_SUBJECTS);
        scanf("%d", &num_subjects);

        while (num_subjects < 1 || num_subjects > MAX_SUBJECTS)
        {
            printf("[ERROR]: Please enter a value between 1 and %d: ", MAX_SUBJECTS);
            scanf("%d", &num_subjects);
        }

        printf("\n>>> Step 1: Enter all subject names <<<\n");
        for (int j = 0; j < num_subjects; j++)
        {
            clearInputBuffer();
            printf("  Enter Name for Subject %d: ", j + 1);
            scanf("%29[^\n]", temp_sub_names[j]);

            char buffer[50];
            snprintf(buffer, sizeof(buffer), "[S%d:%s] ", current_sem, temp_sub_names[j]);
            strcat(studentObj->sub_s, buffer);
        }

        printf("\n>>> Step 2: Entering marks for collected subjects <<<\n");
        for (int j = 0; j < num_subjects; j++)
        {
            printf("\n[Processing Marks for: %s]\n", temp_sub_names[j]);
            printf("  Enter maximum marks possible: ");
            scanf("%f", &temp_sub_total[j]);
            while (temp_sub_total[j] <= 0)
            {
                printf("  [ERROR]: Must be greater than 0. Re-enter: ");
                scanf("%f", &temp_sub_total[j]);
            }

            printf("  Enter marks you gained: ");
            scanf("%f", &temp_sub_gained[j]);
            while (temp_sub_gained[j] < 0 || temp_sub_gained[j] > temp_sub_total[j])
            {
                printf("  [ERROR]: Value must fall between 0 and %.2f. Re-enter: ", temp_sub_total[j]);
                scanf("%f", &temp_sub_gained[j]);
            }

            total_career_gained += temp_sub_gained[j];
            total_career_max += temp_sub_total[j];

            char mark_buffer[60];
            snprintf(mark_buffer, sizeof(mark_buffer), "(%s:%.1f/%.1f) ", temp_sub_names[j], temp_sub_gained[j], temp_sub_total[j]);
            strcat(studentObj->marks_s, mark_buffer);
        }

        actual_sems_processed++;
        studentObj->cgpa = displayRunningCGPA(total_career_gained, total_career_max);

        if (actual_sems_processed == MAX_SEMESTERS)
        {
            printf("\nMaximum system limit of %d semesters reached.\n", MAX_SEMESTERS);
            break;
        }

        printf("\nAre you studying in a next semester? (y/n): ");
        scanf(" %c", &choice);
        if (tolower(choice) != 'y')
        {
            break;
        }
    }
    studentObj->sem_s = actual_sems_processed;
}

// --- MULTI-FILE EXPORTER HANDLING CODE ---
// --- MULTI-FILE EXPORTER HANDLING CODE (APPENDING MODE) ---
void exportToMultipleFiles(std *s, tch *t, stf *f, int has_s, int has_t, int has_f)
{
    if (has_s)
    {
        // "a" mode creates the file if it doesn't exist, or appends to it if it does
        FILE *fStud = fopen("student_database.txt", "a");
        if (fStud != NULL)
        {
            fprintf(fStud, "---------------------------------------------------\n");
            fprintf(fStud, "Name: %s\nAge: %d\n", s->names, s->age_s);
            fprintf(fStud, "Father: %s\nMother: %s\n", s->fth_s, s->mth_s);
            fprintf(fStud, "Contact: %s\nEmail: %s\n", s->cnt_s, s->email_s);
            fprintf(fStud, "Address: %s\n", s->add_s);
            fprintf(fStud, "Completed Semesters: %d\nFinal CGPA: %.2f / 10.0\n", s->sem_s, s->cgpa);
            fprintf(fStud, "Course Ledger Strings: %s\n", s->sub_s);
            fprintf(fStud, "Marks Ledger Strings: %s\n", s->marks_s);
            fprintf(fStud, "---------------------------------------------------\n\n");
            fclose(fStud);
            printf("[EXPORT SUCCESS]: Appended records to 'student_database.txt'\n");
        }
    }

    if (has_t)
    {
        FILE *fTch = fopen("teacher_database.txt", "a");
        if (fTch != NULL)
        {
            fprintf(fTch, "---------------------------------------------------\n");
            fprintf(fTch, "Name: %s\nAge: %d\n", t->name_t, t->age_t);
            fprintf(fTch, "Department: %s\nQualification: %s\n", t->dep_t, t->edu_t);
            fprintf(fTch, "Contact: %s\nEmail: %s\n", t->cnt_t, t->email_t);
            fprintf(fTch, "---------------------------------------------------\n\n");
            fclose(fTch);
            printf("[EXPORT SUCCESS]: Appended records to 'teacher_database.txt'\n");
        }
    }

    if (has_f)
    {
        FILE *fStf = fopen("staff_database.txt", "a");
        if (fStf != NULL)
        {
            fprintf(fStf, "---------------------------------------------------\n");
            fprintf(fStf, "Name: %s\nAge: %d\n", f->name_S, f->age_S);
            fprintf(fStf, "Department: %s\nPost/Designation: %s\n", f->dep_S, f->post_S);
            fprintf(fStf, "Contact: %s\nEmail: %s\n", f->cnt_S, f->email_S);
            fprintf(fStf, "---------------------------------------------------\n\n");
            fclose(fStf);
            printf("[EXPORT SUCCESS]: Appended records to 'staff_database.txt'\n");
        }
    }
}

// --- CENTRAL DYNAMIC MENU IN MAIN ---
int main()
{
    std studentData;
    tch teacherData;
    stf staffData;

    int input_s = 0, input_t = 0, input_f = 0;
    int choice;
    // Continuous loop for choosing which data you want to store
    while (1)
    {
        printf("\n======= CAMPUS ADMINISTRATIVE HUB =======\n");
        printf("1. Enter STUDENT Data (Profile & Semester Grades)\n");
        printf("2. Enter TEACHER Data\n");
        printf("3. Enter STAFF Data\n");
        printf("4. Save Details to Multiple Files and Exit Program\n");
        printf("Select what data you want to store (1-4): ");

        // Check if the user entered a valid number
        if (scanf("%d", &choice) != 1)
        {
            printf("[ERROR]: Please enter a numerical option between 1 and 4.\n");
            clearInputBuffer();
            continue;
        }

        // Branching based on user choice
        if (choice == 1)
        {
            processStudentAcademics(&studentData);
            input_s = 1; // Mark student data as stored
        }
        else if (choice == 2)
        {
            scanTeacherInfo(&teacherData);
            input_t = 1; // Mark teacher data as stored
        }
        else if (choice == 3)
        {
            scanStaffInfo(&staffData);
            input_f = 1; // Mark staff data as stored
        }
        else if (choice == 4)
        {
            // If data exists, store everything into separate files right before breaking
            if (input_s || input_t || input_f)
            {
                exportToMultipleFiles(&studentData, &teacherData, &staffData, input_s, input_t, input_f);
            }
            else
            {
                printf("\nNo data was entered. Exiting directly without saving files.\n");
            }

            printf("Breaking the program and ending execution context. Goodbye!\n");
            break; // Breaks the loop and ends the program safely
        }
        else
        {
            printf("[ERROR]: Invalid choice. Please select an option between 1 and 4.\n");
        }
    }

    return 0;
}
