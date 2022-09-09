#include<stdio.h>
int main(){
    char a[20];
    int f[20];
    int count;
    printf("Enter the string : ");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\n';i++){
        count=1;
        for(j=i+1;a[i]!='\n';j++){
              if(a[i]==a[j])
               count++;
               f[j]=-1;
        }
        if(f[i]!=-1){
            f[i]=count;
            printf("%c\n",&a[i]);
            printf("%d",a[i]);
        }
    }
    return 0;
}