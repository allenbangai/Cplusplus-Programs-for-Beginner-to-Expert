/* 
 * File:   main.c
 * Author: DELL
 *
 * Created on November 2, 2021, 1:49 AM
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int *table;
	int top;
	int size;
}stack;

void push(stack *data, int var);
int pop(stack *data);
int peep(stack *data);
void deqeue(stack *data);

stack* init(int size, int top);

int main(int argc, char** argv) {
    stack *data = init(5, -1);
    int value, select;
    printf("Enter 1 to enqeue the stack \n");
    printf("Enter 2 to deqeue stack \n");
    printf("Enter 3 to get value from stack array \n");
    printf("Enter 4 to get value from stack and deqEue stack");
    printf("Enter 5 to get actual size of stack \n");
    printf("Enter 6 to exit program \n");
	
    while(1){
	printf("\nEnter choice of operation \n");
	scanf("%d", &select);
	switch(select){
            case 1:{
		printf("Enter value to load stack: ");
		scanf("%d", &value);
		push(data, value);
		break;
            }
            case 2:{
		printf("Delete latest data from qeue \n");
		deqeue(data);
		break;
            }
            case 3:{
		printf("Last value in the stack array is: %d \n", peep(data));
		break;
            }
            case 4:{
		printf("last value last value deleted from the type array is: %d \n", pop(data));
		break;
            }
            case 5:{
            	printf("Actual size of the stack is: %d \n", data->size);
		break;
            }
            case 6:{
            	printf("Enqeue and deqeue of stack array stopped process stopped \n");
		exit(0);
		break;
            }
	}	
    }
    return (EXIT_SUCCESS);
}

void push(stack *data, int var){
    if(data->top == (data->size-1)){
	data->size = data->size*2;
    }

    if(data->top == -1){
    	data->top++;
    }

    if(data->top != -1){
	data->top++;
	data->table[data->top] = var;
    }
}

int pop(stack *data){
    if(data->top == -1){
	return -101;
    }else{
	int popvalue = data->table[data->top];
	data->top--;
	return popvalue;
    }
}

int peep(stack *data){
    if(data->top == -1){
        return -101;
    }else{
	return data->table[data->top];
    }
}

void deqeue(stack *data){
    if(data->top != -1){
        data->top--;
    }
}

stack* init(int size, int top){
	stack *data = (stack*)malloc(sizeof(stack));
	if(data == '\0'){
		printf("Error unable to allocate memory, terminating the program\n ");
		exit(1);
	}
	
	data->table=(int*)malloc(sizeof(int) *size);
	 if(data->table =='\0'){
	 	printf("Error unable to allocate memory, terminating the program\n");
	 	exit(1);
	 }
	 data->top = top;
	 data->size=size;
	 return data; 	 
}

