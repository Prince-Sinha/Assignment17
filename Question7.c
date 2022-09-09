#include<stdio.h>
int main(){
    char a[20];
    int i=0,alphabet=0,digit=0,character=0;
    printf("Enter the alphabets, digits and special characters in a string:\n");
    fgets(a,20,stdin);
    while(a[i]!='\n'){
      if((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
		alphabet++;
  else if(a[i] >= 48 && a[i] <= 57)
		digit++;
  else
		character++;

        i++;
    }
    printf("The total no. of digit is %d , special character is %d & alphebet is %d",digit,character,alphabet);

    return 0;
}