#include <iostream> 
using namespace std; 

class Person
{ 
	private : 
	int age; 
	public: 
		void setAge(int age)
		{ 
			this->age = age; 
		} 

		void showAge()
		{ 
			cout << this->age<<endl; 
		} 
}; 

int main() 
{ 
	Person divyanshu; 
	divyanshu.setAge(22); 
	divyanshu.showAge(); 
}