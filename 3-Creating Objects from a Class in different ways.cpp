#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Human
{
	public: string name;
	void introduce()
	{ 
		cout << "hi "<<name<<endl;
	}
};

int main()
{
	Human divya;
	Human *anshu = new Human();
	divya.name = "divya";
	divya.introduce();
	anshu->name = "anshu";
	anshu->introduce();
	return 0;
}

