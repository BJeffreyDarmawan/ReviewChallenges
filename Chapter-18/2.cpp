#include<iostream>

using namespace std;

template<class T>
class ThisIsDynamic{
	private:
		struct wawPakeList{
			T number;
			wawPakeList *NEXT;
		};
		wawPakeList *top;
		//the class uses linked list as storing method, so there's no limit / dynamic
	public:
		ThisIsDynamic()
		{
			top = 0;
		}
		~ThisIsDynamic()
		{
			wawPakeList *wawPtr, *nextWaw;
			
			wawPtr = top;
			
			while (wawPtr != 0)
			{
				nextWaw = wawPtr->NEXT;
				delete wawPtr;
				wawPtr = nextWaw;
			}
		}
		
		void push(T num){
			wawPakeList *newWaw;
			
			newWaw = new wawPakeList;
			newWaw->number = num;
			
			if(isEmpty()){
				top = newWaw;
				newWaw->NEXT = 0;
			}
			else{
				newWaw->NEXT = top;
				top = newWaw;
			}
		}
		void pop(T &num){
			wawPakeList *temp = 0;
			
			if(isEmpty()){
				cout << "Stack is Empty";
			}
			else{
				num = top->number;
				temp = top->NEXT;
				delete top;
				top = temp;
			}
		}
		bool isEmpty()
		{
			if(!top) //if top is empty
				return 1; //return empty
			else
				return 0;
		}
	
};

int main()
{
	ThisIsDynamic<int> newStack;
	
	newStack.push(1);
	newStack.push(6);
	newStack.push(5);
	newStack.push(4);
	newStack.push(3);
	newStack.push(2);
	newStack.push(1);
	newStack.push(8);
	newStack.push(7);
	newStack.push(6);
	newStack.push(5);
	newStack.push(4);
	newStack.push(3);
	newStack.push(2);
	
	
	
	int take;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
	newStack.pop(take);
	cout << take << endl;
}
