#include<stdio.h>
int main(){
    char a[20];
    int i,j,count=0,temp;
    printf("Enter the string : ");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\n';i++){
        for(j=i+1;a[j]!='\n';j++){
            if(a[i]>=a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;a[i]!='\n';i++)
      printf("%c",a[i]);
    return 0;
}