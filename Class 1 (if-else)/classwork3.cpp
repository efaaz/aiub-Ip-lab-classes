#include <iostream>
using namespace std;

int main(){
    float length, breadth;
    cout<<"Enter lenght"<<endl;
    cin>>length;
    cout<<"Enter Breadth"<<endl;
    cin>>breadth;

    if(length == breadth){
        cout<<"This is a square"<<endl;
    }
    else if(length != breadth){
        cout<<"This is not square"<<endl;
    }else{
    cout<<"Invalid input"<<endl;
    }

return 0;
}
