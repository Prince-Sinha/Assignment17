#include<stdio.h>
int main(){
    int count=0,i;
    char a[20],b;
    printf("Enter the string: ");
    fgets(a,20,stdin);
    printf("Enter the chacter:");
    scanf("%c",&b);
    for(i=0;a[i];i++){
        if(a[i]==b)
         count++;   
    }
    printf("The occurance of given chacter in string is %d",count);
    return 0;
}