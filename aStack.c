#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char aStack[20];
int aTop = -1;

//Please implement all the functions
int isEmpty (char stack[], int* pTop) {
	return 0;
}
int isFull (char stack[], int* pTop) {
	return 0;
}

//You need to throw exceptions when user try to push more char but the stack is full
char push (char stack[], int* pTop, char c) {
	return '0';
}
//You need to throw exceptions when user try to pop out more char but the stack is empty
char pop (char stack [], int* pTop) {
	return '0';
}
//You need to throw exceptions when the stack is empty
char top (char stack [], int* pTop) {
	return '0';
}

//you need to reverse the order of the input string(size <= 20)
//the implementation requires using the stack
//e.g. input "Hello World", your program need to print "dlr"
void reverse(char* string, int size){
	
}

//you need to check whether the input expression's brackets is balanced
//return 1:true 0:false
//the implementation requires using the stack
//e.g. input "(a+b)*c)" is not balanced and "((a+b)/c)" is balanced
int balancedbrackets(char* string, int size){

	return 1;
}

int main () {
	char* string = "Hello World";
	printf("The reverse of %s is ", string);
	reverse(string, strlen(string));

	char* expression = "((a+b)/c)";
	int result = balancedbrackets(expression, sizeof(expression));
	printf("The expression %s is ", expression);
	if(result){
		printf("balanced\n");
	} else {
		printf("not balanced\n");
	}
	return 0;
}


