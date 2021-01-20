#include <iostream>
#include <string>
using namespace std;

class Human
{
	private: int age;
	int getAge()
	{ 
		return age-5; 
	} 

	public: 
		void displayAge()
		{ 
			cout << getAge() << endl;
		} 

		void setAge(int value)
		{
			age = value;
		}
};

int main()
{
	Human divyanshu;
	divyanshu.setAge(24);
	divyanshu.displayAge();
	return 0;
}