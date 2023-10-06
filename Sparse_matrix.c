#include<stdio.h>
int islowalpha1(char ch){
      if (ch>=97 && ch<=122)
      {
         return printf("is lower case alphabet");
      }
      else{
         return printf("is not lower case");
      }
}


int isalnum1(char ch){
      if (ch>=48 && ch<=57 || ch>=65 && ch<=90 || ch>=97 && ch<=122)
      {
        return printf("Is alpha numeric");
      }
      else{
         return printf("Is not alpha numeric");
      }
      
}
int main(){
     char ch;
     printf("Enter your alphabet:");
     scanf("%c",&ch);

     islowalpha1(ch);
     printf("\n");
     isalnum1(ch);
          
return 0;
}