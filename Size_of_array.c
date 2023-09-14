#include <stdio.h>

int main()
{
    int arr[5];
    printf("%ld\n",sizeof(arr));
    printf("%ld\n",sizeof(int));
    printf("%ld\n",sizeof(arr)/sizeof(int));

    return 0;
}

