#include <iostream>
using namespace std;

#define MAX 5

int stackArr[MAX];
int top = -1;
void push(int value) 
{
    if (top == MAX - 1) 
	{
        cout << "Stack Overflow!" << endl;
    } else 
	{
        top++;
        stackArr[top] = value;
        cout << value << " pushed into stack" << endl;
    }
}
void pop() 
{
    if (top == -1)
	 {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stackArr[top] << " popped from stack" << endl;
        top--;
    }
}
void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}
void display()
 {
    if (top == -1) 
	{
        cout << "Stack is empty" << endl;
    } else
	 {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) 
		{
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main()
 {
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    pop();
    pop();
    pop(); 

    return 0;
}