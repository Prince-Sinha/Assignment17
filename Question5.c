#include<stdio.h>
int main(){
    int count=0,i;
    char a[20];
    printf("Enter the string: ");
    fgets(a,20,stdin);
    for(i=0;a[i];i++){
         if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
         }
    }
    printf("%s",a);
    return 0;
}