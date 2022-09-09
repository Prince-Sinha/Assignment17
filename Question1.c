#include<stdio.h>
int main(){
    int count=0,i;
    char a[20];
    printf("Enter the string:");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\n';++i){
         count+=1;
    }
    printf("The lenght is %d",count);
    return 0;
}