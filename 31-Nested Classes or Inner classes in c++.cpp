#include <iostream> 
#include <string> 
using namespace std; 

class Person
{ 
	public: 
		string name; 
		class Address
		{ 
			public: 
				string country; 
				string stname; 
				int hno; 
		}; 

		Address addr; 
		void AddressPlease()
		{ 
			cout<< name <<endl << addr.country <<endl <<addr.stname << endl <<addr.hno <<endl; 
		} 
}; 

int main() 
{ 
	Person :: Address ad; 
	Person divyanshu; 
	divyanshu.name = "divyanshu"; 
	divyanshu.addr.country = "India"; 
	divyanshu.addr.stname = "Nagpur"; 
	divyanshu.addr.hno = 1; 
	divyanshu.AddressPlease(); 
}