#include <iostream>
using namespace std;

int main(){
    char gender;
    cout<<"Enter your gender"<<endl;
    cin>>gender;

    if(gender == 'M' || gender == 'm'){
        cout<<"You are Male"<<endl;
    }
    else if(gender == 'F' || gender == 'f'){
        cout<<"You are Female"<<endl;
    }else{
    cout<<"Invalid input"<<endl;
    }

return 0;
}
