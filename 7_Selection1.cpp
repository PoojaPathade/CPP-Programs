#include<iostream>
#include<string>

using namespace std;

int main()
{
    string branch[5] = {"Electrical", "Mechanical", "Computer" , "Electronics" , "Civil"};

    string user ;


    cout<<"Enter the branch : "<<"\n";
    cin>>user;


    if(user == "Electrical") 
    {
        cout<<"Visit to holl number 301 "<<"\n";
    }
    else if( user == "Mechanical")
    {
        cout<<"Visit to holl number 302"<<"\n";
    }
    else if(user == "Computer")
    {
        cout<<"Visit to holl number 303"<<"\n";
    }
    else if(user == "Electronics")
    {
        cout<<"Visit to holl number 304"<<"\n";
    }
    else if(user == "Civil")
    {
        cout<<"Visit to holl number 305"<<"\n";
    }
    else 
    {
        cout<<"Sorry this branch is not available in our colleage"<<"\n";
    }

    return 0;
}
