#include<stdio.h>
int main(){
    int m,n;
    printf("Enter rows and cols (m n) : ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter elements of matrix row by row : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("Entered matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of entered matrix is : \n");
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0 ;
}
