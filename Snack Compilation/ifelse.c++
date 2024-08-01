#include <iostream>
using namespace std;

    int main(){

        int g;

            cout<<"Enter a grade\n";
            cin>>g;
        
        if(g>=75&&g<=80){
            cout<<"The letter grade is C";
        }
        else if(g>=81&&g<=90){
            cout<<"The letter grade is B";
        }
        else if(g>=91&&g<=100){
            cout<<"The letter grade is A";
        }
        else{
            cout<<"The letter grade is F";
        }

    return 0;

}