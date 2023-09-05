#include<stdio.h>
int main (){
    int a;
    double b;
    float c;
    long d;
    char e;
    short f;
    
    printf("The size of integer is %zu\n", sizeof(a));
    printf("The size of double is %zu\n", sizeof(b));
    printf("The size of float is %zu\n", sizeof(c));
    printf("The size of long is %zu\n", sizeof(d));
    printf("The size of char is %zu\n", sizeof(e));
    printf("The size of short is %zu\n", sizeof(f));

    return 0;
}