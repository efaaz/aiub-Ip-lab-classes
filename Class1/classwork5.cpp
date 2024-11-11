#include <iostream>
using namespace std;

int main(){
    float productNum, quantity, prod1, prod2, prod3, prod4, prod5, price;
    prod1 = 200.75;
    prod2 = 345.5;
    prod3 = 775.75;
    prod4 = 400.35;
    prod5 = 1200.75;


    cout<<"Enter product number"<<endl;
    cin>>productNum;
    cout<<"Enter total quantity of this product"<<endl;
    cin>>quantity;

    if(productNum == 1){
            price = prod1*quantity;
        cout<<"The retail value of this product is: "<<price<<endl;
    }
    else if(productNum == 2){
            price = prod2*quantity;
        cout<<"The retail value of this product is: "<<price<<endl;
    }
    else if(productNum == 3){
            price = prod3*quantity;
        cout<<"The retail value of this product is: "<<price<<endl;
    }
    else if(productNum == 4){
            price = prod4*quantity;
        cout<<"The retail value of this product is: "<<price<<endl;
    }
    else if(productNum == 5){
            price = prod5*quantity;
        cout<<"The retail value of this product is: "<<price<<endl;
    }
    else{
    cout<<"Invalid input"<<endl;
    }

return 0;
}
