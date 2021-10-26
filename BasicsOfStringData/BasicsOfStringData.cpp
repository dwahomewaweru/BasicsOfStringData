// BasicsOfStringData.cpp 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Capturing string data type and show limitations of cin>> \n";
    string myName;
    cout << "input your full name : ";

    //getline() will output full Mike Franks
    getline (cin, myName);
    //cin will output Mike only
    //cin >> myName;
    cout << "\n";
    //cout << "Hey! Your name using cin is : " << myName<<endl;
    cout << "Hey! Your name using getline function is : " << myName<<endl;
    // Input full name : Mike Franks
   

}


