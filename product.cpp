#include <iostream>
using namespace std;
#include "product.h"
#include <cstring>


product::product(int product_id,const char* product_name,double product_price)
:product_id_(product_id),product_name_(new char[strlen(product_name)+1]),product_price_(product_price)
{
    strcpy(product_name_,product_name);
}

void product::get_product_info(void){
    cout<<"Product Id: "<<this->product_id_<<"\n";
    cout<<"Product Name: "<<this->product_name_<<"\n";
    cout<<"Product Price: "<<this->product_price_<<"\n";
}

void product::update_product_info(){
    int choice;
    cout<<"Enter the corresponding number to update attributes \n 1: Product Name \n 2: Product Price \n";
    cin>>choice;

    if(choice == 1){
        char product_name[20];
        cout<<"Enter new product name: ";
        cin>>product_name;
        strcpy(product_name_,product_name);
    }
    else{
        double product_price;
        cout<<"Enter new product price: "<<endl;
        cin>>product_price;
        product_price_ = product_price;
    }
    
}
// product::~product()
// {
//     delete [] product_name_;
// }