// #include<stdio.h>
// int main(){
//     char fullname[50];
//     gets(fullname);
//     puts(fullname);
//     return 0;
//     }

    #include<stdio.h>
int main(){
    char fullname[50];
    fgets(fullname,50,stdin);
    puts(fullname);
    return 0;
    }