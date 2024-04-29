#include <iostream>
#include "header.h"
#include<string>
#include <Windows.h>
using namespace std;
void push(stack*& head, int a) {
	stack* newStack = new stack;
	newStack->data = a;
	newStack->next = head;
	head = newStack;
}
int pop(stack*& head){
	if (head == NULL) {
		cout << "Стек порожній" << endl;
		return -1;
	}
	int a = head->data;
	stack* temp = head;
	head = head->next;
	delete temp;
	return a;
}
stack* add(stack* num1, stack* num2) {
	stack* result = NULL;
	int dil = 0;
	while (num1 != NULL || num2 != NULL || dil != 0) {
		int a1 = (num1 != NULL) ? pop(num1) : 0;
		int a2 = (num2 != NULL) ? pop(num2) : 0;
		int suma = a1 - a2 + dil;
		dil = suma / 10;
		suma %= 10;
		push(result, suma);

	}
	return result;
}
void print(stack* head) {
	while (head != NULL) {
		cout << head->data;
		head = head->next;
			
	}
	cout << endl;
}
stack* createnewstack(const string&a) {
	stack* stk = NULL;
	for(char d : a) {
		int b = d - '0';
		push(stk, b);
	}
	return stk;
}