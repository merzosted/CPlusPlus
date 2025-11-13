#include <iostream>
using namespace std;

int main() {

    string str;
    cout<<"Enter your name : ";
    
    // cin>>str;
    // getline() function is used to take input with spaces until the newline character is encountered.
    getline(cin,str);
    
    cout<<"Hello "<<str<<"\n";
    return 0;
}