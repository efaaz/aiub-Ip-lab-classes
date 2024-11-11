#include <iostream>
using namespace std;

int main(){
    float classes, attended, perc;
    cout<<"Enter total classes"<<endl;
    cin>>classes;
    cout<<"Enter total class attended"<<endl;
    cin>>attended;
    perc = (attended/classes)*100;

    if(perc >= 80){
        cout<<"The student is allowed to sit in exam"<<endl;
    }
    else if(perc < 80){
        cout<<"This student is not allowed to sit in exam "<<endl;
    }else{
    cout<<"Invalid input"<<endl;
    }

return 0;
}
