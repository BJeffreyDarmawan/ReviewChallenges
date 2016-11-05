
#include<iostream>

using namespace std;

class MyOwnLinkedList{
	private:
		struct MyOwn{
			int number;
			struct MyOwn *listNext;
		};
		MyOwn *kepala; //??
		//i dont understand how the kepala works.. none here assigns anything into kepala..
	public:
		MyOwnLinkedList(){
			kepala = 0;
		}
		~MyOwnLinkedList()
		{
    	MyOwn *ownPtr;
    	MyOwn *nextOwn;
    	
    	ownPtr = kepala;
    	
    	while(ownPtr != 0)
    	{
    		nextOwn = ownPtr->listNext; //before it is destroyed, NEXT must be alternated
    		
    		delete ownPtr; //destroy current ownPtr
    		
    		ownPtr = nextOwn; //ownPtr is now the previous ownPtr NEXT
		}
	}
		
		void appendNode(double num) //what is a node...
		{
			MyOwn *newOwn;
			MyOwn *ownPtr;
			
			newOwn = new MyOwn; //create new list member
			newOwn->number = num; //inside list member
			newOwn->listNext = 0;
			
			if(!kepala) //if list still empty, make at first list
				kepala = newOwn; //so, kepala actually earn his value from here..
			else //else, make at the end
			{
				ownPtr = kepala;
				
				while (ownPtr->listNext) //goes to the end of the list, while NEXT exist, ptr goes to the NEXT
					ownPtr = ownPtr->listNext;
				
				//now at the end of the list
				ownPtr->listNext = newOwn;
			}
		}
		
		void insertNode(int num)
		{
			MyOwn *newOwn;
			MyOwn *ownPtr;
			MyOwn *prevOwn;
			
			newOwn = new MyOwn;
			newOwn->number = num;
			
			if(!kepala) //if theres no kepala
			{
				kepala = newOwn;
				newOwn->listNext = 0;
			}
			else
			{
				ownPtr = kepala; //locate ownPtr as kepala
				
				prevOwn = 0;
				
				while(ownPtr != 0 && ownPtr->number < num) //this locates the position where to put num, the list is in order
				{
					prevOwn = ownPtr;
					ownPtr = ownPtr->listNext;				
				}
				
				if(prevOwn == 0) //if there's no previous (no number lower than num)
				{
					kepala = newOwn; //kepala location is now at newOwn
					newOwn->listNext = ownPtr; //then NEXTs points to ownPtr
					//like taro newOwn di depan kepala					
				}
				else
				{
					prevOwn->listNext = newOwn; // put in the middle
					newOwn->listNext = ownPtr; // continue the list
				}
			}
		}
		
		void deleteNode(int num)
		{
			MyOwn *ownPtr;
			MyOwn *prevOwn;
			
			if(!kepala)
				return;
			
			if(kepala->number == num)
			{
				ownPtr = kepala->listNext;
				delete kepala; //kepala ilang
				kepala = ownPtr; //kepala jd ownPtr
			}
			else
			{
				ownPtr = kepala;
				
				while(ownPtr != 0 && ownPtr->number != num) //ownPtr == 0 -> akhir
				{
					prevOwn = ownPtr;
					ownPtr = ownPtr->listNext;
				}
				//if ownPtr goes to the end, ownPtr = 0 then
				
				if(ownPtr) //if ownPtr != 0, delete
				{
					prevOwn->listNext = ownPtr->listNext;
					delete ownPtr;
				}
			}
		}
			
		void print()
		{
			MyOwn *ownPtr;
			
			ownPtr = kepala; //ownPtr goes to kepala position
			
			while(ownPtr) //while ownPtr has value (number)
			{
				cout << ownPtr->number << endl;
				
				ownPtr = ownPtr->listNext; //ownPtr goes to NEXT
			}	
		}
		MyOwnLinkedList(const MyOwnLinkedList &obj) 
		{
  		 	//cout << "Copy constructor allocating ptr." << endl;
  		 	kepala = new MyOwn;
			*kepala = *obj.kepala; // copy the value
		}
};

int main()
{
	MyOwnLinkedList MyList;
    MyList.appendNode(1);
    MyList.appendNode(2);
    MyList.appendNode(3);
    MyList.appendNode(5);
	
    MyList.insertNode(4);
	
    MyList.print();
	
    cout << "delete 3 --------------" << endl;
    MyList.deleteNode(3);
	
    MyList.print();
    
    MyList.insertNode(3);
    
    MyOwnLinkedList MySecondList;
    MySecondList = MyList;
    
    cout << "Print copied list" << endl;
    MySecondList.print();
    //why crash?
    return 0;
}
