#include<stdio.h>
int main(){
    char a[20],b[20];
    int i,j;
    printf("Enter the string: ");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\n';i++){
        b[i]=a[i];
    }
    for(j=0;j<=i-1;j++)
      printf("%c",b[j]);
    return 0;
}