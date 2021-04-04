#include <iostream>
using namespace std;
#include "inventory.h"
#include "product.h"
#include <cstring>
#include <algorithm>

void inventory::add_product_to_inventory(void){
    inventory_count_++;
    int p_id;
    char p_name[20];
    double p_price;
    cout<<"Enter product Id: "<<endl;
    cin>>p_id; 
    auto found_at = find(list_of_all_Ids.begin(),list_of_all_Ids.end(),p_id);
    if(found_at != list_of_all_Ids.end()){
        cout<<"Product Id already exists ,Please enter valid product Id: ";
        cin>>p_id;
    }
    list_of_all_Ids.push_back(p_id);
    cout<<"Enter product name: "<<endl;
    cin>>p_name;
    cout<<"Enter product price: "<<endl;
    cin>>p_price;
    inventory_products.push_back(product(p_id,p_name,p_price));
}

void inventory::get_product_info_from_inventory(int product_id){
    auto found_at = find(list_of_all_Ids.begin(),list_of_all_Ids.end(),product_id);
    if(found_at == list_of_all_Ids.end()){
        cout<<"Product Id invalid ,Please enter valid product Id!\n";
        return;
    }
    for(auto& p : inventory_products){
        if(p.product_id_ ==  product_id){
            p.get_product_info();
        }
    }
    // cout<<"Product with Id not found \n";
}

void inventory::update_product_in_inventory(int product_id){
    auto found_at = find(list_of_all_Ids.begin(),list_of_all_Ids.end(),product_id);
    if(found_at == list_of_all_Ids.end()){
        cout<<"Product Id invalid ,Please enter valid product Id!\n";
        return;
    }

    for(auto& p : inventory_products){
        if(p.product_id_ ==  product_id){
            p.update_product_info();
        }
    }
}

void inventory::delete_product_in_inventory(int product_id){
    auto found_at = find(list_of_all_Ids.begin(),list_of_all_Ids.end(),product_id);
    if(found_at == list_of_all_Ids.end()){
        cout<<"Product Id invalid ,Please enter valid product Id!\n";
        return;
    }

    
    int ind=0;
    int found = 0;
    for(auto& p : inventory_products){
        if(p.product_id_ ==  product_id){
            // p.update_product_info();
            found = ind;
            cout<<"Product with Id: "<<p.product_id_<<" deleted \n";
            inventory_products.erase(inventory_products.begin()+found);
        }
        ++ind;
    }
}

void inventory::list_all_products_in_inventory(){
    cout<<"The products in inventory are\n";
    for(auto& p : inventory_products){
            p.get_product_info();
            cout<<"\n";
    }
}
// int main(){
//     int p_id;
//     char p_name[20];
//     double p_price;
//     cout<<"Enter product Id: "<<endl;
//     cin>>p_id;
//     cout<<"Enter product name: "<<endl;
//     cin>>p_name;
//     cout<<"Enter product price: "<<endl;
//     cin>>p_price;
//     cout<<p_name;
//     return 0;
// }


