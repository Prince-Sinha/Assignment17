#include<stdio.h>
int main(){
    char vowel[]="aeiouAEIOU";
    char a[20];
    int count=0,i,j;
    printf("Enter the string: ");
    fgets(a,20,stdin);
    for(i=0;a[i];i++){
        for(j=0;j<10;j++){
            if(a[i]==vowel[j])
              count++;
        }
    }
    printf("The number of vowel in string is %d",count);
    return 0;
}