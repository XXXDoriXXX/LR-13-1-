#ifndef HEADER_H
#define HEADER_H
using namespace std;

struct stack{
	int data;
	stack* next;
};
stack* createnewstack(const string& a);
void print(stack* head);
stack* add(stack* num1, stack* num2);
int pop(stack*& head);
void push(stack*& head, int a);

#endif