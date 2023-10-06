#include<stdio.h>
int lenght1(char ch){
    int size = sizeof(ch)/sizeof(ch[0]);
    return size;
}
int main(){
    char name = {"Paritosh"};
    lenght1(name);

return 0;
}   