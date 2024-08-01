#include <iostream>
using namespace std;

int main(){

    int i, mtp, ans;

        cout<<"Enter a multiplier\n";
        cin>>mtp;

    for(i=10; i>=1; i--){
        ans=i*mtp;

        cout<<i<<"*"<<mtp<<"="<<ans<<"\n";
    }
    return 0;
}