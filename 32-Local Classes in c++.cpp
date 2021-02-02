#include <iostream> 
#include <string> 
using namespace std; 

void studentList(); 

int main() 
{ 
	studentList();
} 

void studentList()
{ 
	class Student
	{ 
		public: string name; 
		int age; 
		void display()
		{ 
			cout <<name <<endl<<age<<endl; 
		} 
	}; 

	Student divyanshu; 
	divyanshu.name = "divyanshu"; 
	divyanshu.age = 22; 
	divyanshu.display(); 
}