#include<stdio.h>
void fun2(){
    printf("WE are in Fun2\n");
}
void fun1(){
    printf("We are in fun1\n");
    //call fun2
    fun2();
    printf("After fun2 called\n");
}
int main(){
    printf("We are in main function\n");
    fun1();
    printf("After function called\n");
return 0;
}