#include <stdio.h>



int main(int argc, char const *argv[])
{

	int arr[] = {11,12,13,14,25};
    // printf("%d\n",arr);
    // printf("%d\n",*arr);
    // printf("%d\n",arr[4]);
    int i;
    for(i=0;i < 5;i++) {
        printf("the address = %d\n",&arr[i]);
        printf("the address = %d\n",arr+i);
        printf("the value = %d\n",arr[i]);
        printf("the value = %d\n",*(arr+i));
    }


    return 0;
}










