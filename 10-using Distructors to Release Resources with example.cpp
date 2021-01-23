#include <iostream> 
#include <string> 
using namespace std; 

class Human
{ 
	private: 
		string *name; 
		int *age; 

		public: Human(string iname, int iage)
		{ 
			name = new string; 
			age = new int; 
			*name = iname; 
			*age = iage;
		} 

		void display()
		{ 
			cout << "Hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl; 
		} 

		~Human()
		{ 
			delete name;
		 	delete age; 
		 	cout << "all memories are released"<<endl; 
		 } 
}; 

int main() 
{ 
	Human *divyanshu = new Human("divyanshu",22); 
	divyanshu->display(); 
	delete divyanshu; 
	return 0; 
}