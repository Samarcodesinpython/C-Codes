#include <stdio.h>
#include <string.h>

int main(){
    char st[10] = "Samar";
    char str[20];
    char str2[20] = " Jamal";

    printf("The lenght o fthe string is : %d\n", strlen(st));

    strcpy(st, str);
    printf("The copied string is : %s\n", str);

    strcat(st,str2);
    printf("The concatinated string is : %s\n",st);

    int a = strcmp("far", "joke");
    printf("The comparision of two strings gives : %d" ,a);
    

    return 0;
}