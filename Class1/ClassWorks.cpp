#include <iostream>
using namespace std;

int main(){
    char word;
    cout<<"Enter a Alphabet"<<endl;
    cin>>word;

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        cout<<word<<" is a vowel"<<endl;
    }
    else{
        cout<<word<<"  a consonent"<<endl;
    }

return 0;
}
