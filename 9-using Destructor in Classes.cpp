#include <iostream> 
using namespace std; 

class Human
{ 
	public: Human()
	{ 
		cout << "constructer called"<<endl; 
	} 

	~Human()
	{ 
		cout << "destructer called"<<endl;
	} 
}; 

int main() 
{ 
	Human *divyanshu; 
	divyanshu = new Human(); 
	delete divyanshu; 
	return 0; 
}