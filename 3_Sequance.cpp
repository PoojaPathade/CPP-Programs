#include<iostream>
using namespace std;

int Addition(int i, int j)
{
    int result = 0;

    result = i + j ;

    return result;
}

int main()
{
    int No1 , No2 , Sum ;
    
    cout<<"Enter two number : "<<"\n";
    cin>>No1>>No2;

    Sum = Addition(No1, No2);
    cout<<"Addition of two number is "<<Sum<<endl;

    return 0;
     
    
}
