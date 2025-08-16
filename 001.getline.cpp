#include <iostream>
using namespace std;

int main() {

    string str;
    cout<<"Enter your name : ";
    
    // cin>>str;

    getline(cin,str);
    
    cout<<"HEllo "<<str<<"\n";
    return 0;
}