#include <iostream>
using namespace std;

main(){
    
    int mn;

        cout<<"enter a number from 1-12 \n";
        cin>>mn;

    switch(mn){
        case 1:
        cout<<"the month is January,";
    break;
        case 2:
        cout<<"the mont is Febuary,";
    break;
        case 3:
        cout<<"the month is March,";
    break;
        case 4:
        cout<<"the month is April,";
    break;
        case 5:
        cout<<"the month is May,";
    break;
        case 6:
        cout<<"the mont is June,";
    break;
        case 7:
        cout<<"the month is July,";
    break;
        case 8:
        cout<<"the month is Auguest,";
    break;
        case 9:
        cout<<"the month is September,";
    break;
        case 10:
        cout<<"the mont is October,";
    break;
        case 11:
        cout<<"the month is November,";
    break;
        case 12:
        cout<<"the month is December,";
    break;

    default:
        cout<<"invalid month,";
    break;
    }

    cout<<" the month number is "<<mn;

    return 0;
}