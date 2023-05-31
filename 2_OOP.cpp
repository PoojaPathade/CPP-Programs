// class = Characteristics + Behaviours
// class = Data + Function/Method


#include<iostream>
using namespace std;

class Demo
{
    public :
        int No1;
        int No2;

        void fun()
        {
            cout<<"Inside fun \n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"Size of object : "<<sizeof(obj1)<<"\n";  // 8 

    obj1.No1 = 10;
    obj1.No2 = 20;

    obj2.No1 = 30;
    obj2.No2 = 40;

    cout<<obj1.No1<<"\n";

    return 0;

}
