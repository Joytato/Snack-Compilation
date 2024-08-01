#include <iostream>
using namespace std;

main(){

    int ans, fn, sn, opr;

        cout<<"enter the first number\n";
        cin>>fn;

        cout<<"enter the second number\n";
        cin>>sn;

        cout<<"Choose an operator\n";
        cout<<"1. Addition\n";
        cout<<"2. Multiplication\n";
        cout<<"3. Average\n";

        cin>>opr;
    
    switch(opr){
        case 1:
        ans= fn+sn;
    break;
        case 2:
        ans= fn*sn;
    break;
        case 3:
        ans= (fn+sn)/2;
    break;

    default:
        cout<<"invalid operator\n";
    break;
    }

    cout<<"The answer is "<<ans;

    return 0;
}