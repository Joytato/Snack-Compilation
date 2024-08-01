#include <iostream>
using namespace std;

int main(){

    int r, n, p;

        cout<<"choose the number of your desired room\n";
        cout<<" \n";

        cout<<"1. Private - Php800\n";
        cout<<"2. Semi Private - Php1300\n";
        cout<<"3. Suite - Php2000\n";    
        cin>>r;

        cout<<"How many nights will you be staying?\n";
        cin>>n;

    switch(r){
        case 1:
        p=800*n;
    break;
        case 2:
        p=1300*n;
    break;
        case 3:
        p=2000*n;
    break;

    default:
        cout<<"Invalid room";
    }

    cout<<"The price is "<<p;

    return 0;
}