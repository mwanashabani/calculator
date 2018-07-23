#include<stdio.h>
#include<stdlib.h>

#include "functions.h"
/*
This is the main method
It's the entry point of our program
*/
int main(int argc, char* argv[]){
	int argv1, argv2;
	printf("Calculator\n\n");
	printf("number of arguments passed: %d\n", argc);
	printf("first argument: %s\n", argv[0]);
	if(argc>1){
		if(argc>=3){
		argv1 = atoi(argv[1]);
		argv2 = atoi(argv[2]);
		printf("The sum of argv[1] and argv[2]: %d\n", add(argv1, argv2));
		printf("The answer after subtracting argv[2] from argv[1] is %d.\n", subtract(argv1,argv2));
		printf("The product of argv[2] and argv[2] is %d.\n", multiply(argv1,argv2));
		printf("The answer after dividing argv[1] by argv[2] is %f.\n", divide(argv1,argv2));
		printf("The remainder after dividing argv[1] by argv[2] is %d.\n", modulus(argv1,argv2));
		
		}
	}
	return 0;
}









