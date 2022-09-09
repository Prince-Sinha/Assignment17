#include<stdio.h>
int main(){
     int i,j,k;
     char a[20],temp;
     printf("Enter the string : ");
     fgets(a,20,stdin);
     for(i=0;a[i];i++){
        k=i;
     }
    
     for(i=0;i<k/2;i++){
            temp=a[i];
            a[i]=a[k-i-1];
            a[k-i-1]=temp;
        
     }
     for(i=0;a[i]!='\n';i++)
        printf("%c",a[i]);
    return 0;
}