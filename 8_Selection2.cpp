#include<iostream>

using namespace std;

int main()
{
    int appointment_No = 0;

    cout<<"Entre the number: \n ";
    cin>>appointment_No;

    switch(appointment_No)
    {
        case 1:
            cout<<"Your appointment at 1 PM\n";
            break;
        
        case 2:
            cout<<"Your appointment at 2 PM\n";
            break;

        case 3:
            cout<<"Your appointment at 3 PM\n";
            break;

        case 4:
            cout<<"Your appointment at 4 PM\n";
            break;

        default :
            cout<<"Invalid...Please register your appointment";

    }
}
