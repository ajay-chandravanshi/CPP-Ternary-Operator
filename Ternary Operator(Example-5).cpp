#include <iostream>
using namespace std;

int main()
{
    int password=1234;
    int comparepassword;
    cout<<"enter your password=";
    cin>>comparepassword;
    (password==comparepassword)?cout<<"Collect your Cash":(cout<<"Wrong Password try again=",
    cin>>comparepassword,
     (password==comparepassword)?cout<<"Collect your Cash":cout<<"Wrong Password");

}