#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
public:
    string name;
    void introduce(){
        cout<<"hi i am "<<name<<endl;
    }
};

int main()
{
    HumanBeing divya;
    divya.name = "divya";
    divya.introduce();

    HumanBeing anshu;
    anshu.name = "anshu";
    anshu.introduce();

    return 0;
}
