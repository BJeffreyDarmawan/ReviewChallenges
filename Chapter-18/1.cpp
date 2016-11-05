#include<iostream>

using namespace std;

template<typename T>
class MyStack{
	private:
		T *arrStack;
		int size;
		int top;
	public:
		MyStack()
		{
			size = 10;
			arrStack = new T [10];
			top =  -1;
		}
		~MyStack(){
			delete [] arrStack;
		}
		
		void push(int num)
		{
			if(isFull()){ //run isFull func
				cout << "Stack is Full" << endl;
			}
			else{
				top++;
				arrStack[top] = num;
			}
		}
		void pop(int &num){
			if(isEmpty())
				cout << "Stack is Empty" << endl;
			else{
				num = arrStack[top];
				top--;
			}
		}
		bool isFull(){
			if(top == size - 1)
				return 1;
			else
				return 0;
		}
		bool isEmpty(){
			if(top == -1)
				return 1;
			else
				return 0;
		}
};

int main(){
	
	MyStack<int> newStack;
	
	newStack.push(1);
	newStack.push(3);
	newStack.push(5);
	
	int take;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
}
