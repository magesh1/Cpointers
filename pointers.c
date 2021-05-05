#include <stdio.h>

// pointers concept

int main(int argc, char const *argv[])
{

	int c = 10;
	int *p1 = &c;  //store address of c
	printf("the address in c = %d\n",&c);  //print address of c
	printf("the address in pointer = %d\n",p1); //print address of c
	printf("the value in pointer = %d\n",*p1); //print value of c
	int **p2 = &p1; //store address of p1
	printf("the address in p2 = %d\n",p2); //print address of p2
	printf("the address in p2 = %d\n",*p2); //print the address of p1
	printf("the value in p2 = %d\n",*(*p2)); //print the value of c;
	int ***p3 = &p2; //store the address of p2
	printf("the address in p3 = %d\n",p3); // print the address of p3
	printf("the address in p3 = %d\n",*p3); // print the address of p2
	printf("the value in p3 = %d\n",*(*p3)); //print the address of p1
	printf("the value in p3 = %d\n",*(*(*p3))); //print the value of c
	***p3 = 16;   //change the value of c
	printf("the value in p3 = %d\n",*(*(*p3))); //print the value of c


    return 0;
}
