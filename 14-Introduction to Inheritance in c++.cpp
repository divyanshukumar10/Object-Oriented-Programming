#include <iostream> 
#include<string> 
using namespace std;

class Person
{ 
	public: string name; 
	int age; 
	void setName(string iname)
	{
		name = iname;
	} 

	void setAge(int iage)
	{
		age = iage;
	} 
}; 

class Student : public Person
{ 
	public: int id;
	void setId(int iid)
	{
		id = iid;
	} 
	void introduce()
	{ 
		cout <<"hi iam "<<name<<" and i am "<<age<<" years old "<<endl<<"and my student id is "<<id; } 
}; 

int main() 
{ 
	Student divyanshu; 
	divyanshu.setName("divyanshu"); 
	divyanshu.setAge(22); 
	divyanshu.setId(12345); 
	divyanshu.introduce(); 
}