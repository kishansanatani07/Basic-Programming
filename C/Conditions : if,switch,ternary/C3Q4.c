#include <stdio.h>
int main(){
    float Marks_Gained , Total_Marks;
    printf("Enter marks gained by the student & Total Marks:\n");
    scanf("%f,%f", & Marks_Gained ,& Total_Marks);
    float P = (Marks_Gained*100)/Total_Marks;
    if(P<=30){
        printf("Student has failed the examination!!\n");
        printf("Grade of Student: C \nAnd the percentage gained is:%0.3f",P);
    }
        else if(P>30 && P<=70){
             printf("Student has passed the examination!!\n");
        printf("Grade of Student: B\nAnd the percentage gained is:%0.3f", P);
    
        }
        else if(P>70 && P<=90){
        printf("Student has passed the examination!!\n");
        printf("Grade of Student: A\nAnd the percentage gained is:%0.3f", P);
        
        }
        else if(P>90 && P<=100){
        printf("Student has passed the examination!!\n");
        printf("Grade of Student: A+\nAnd the percentage gained is:%0.3f", P);
        }
        else{
            printf("You've entered invalid Marks.");
        }
   


return 0;
}