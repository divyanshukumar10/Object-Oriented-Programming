#include <iostream>
#include <string>
using namespace std;

class Human
{
	public: 
		string name = "noname" ;
		void introduce();
};

void Human :: introduce()
{
	cout << Human ::name <<endl;
}

int main()
{
	Human divyanshu;
	divyanshu.introduce();
	return 0;
}