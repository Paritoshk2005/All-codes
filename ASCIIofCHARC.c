#include<stdio.h>
int main(){
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("the ASCII value of %d is $d",ch,ch);
    return 0;
}