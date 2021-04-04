#include <iostream>
using namespace std;
#include<vector>
#include "product.h"
#include "inventory.h"
int main()
{   // just to test
    // product *p = new product(1,"Watch",1500.00);
	// p->get_product_info();
    // p->update_product_info();
    // p->get_product_info();
    vector<inventory> inventory_of_products;
#if 0 //works
    {
        inventory_of_products.push_back(inventory());
        auto entry = inventory_of_products.back();
        entry.add_product_to_inventory();
        entry.get_product_info_from_inventory(123);
        entry.update_product_in_inventory(123);
        entry.get_product_info_from_inventory(123);
        entry.delete_product_in_inventory();
    }
#endif
#if 0 //doesn't work
    {   
        inventory_of_products.push_back(inventory());
        auto entry = inventory_of_products.end(); //iterator
        entry--;
        entry->add_product_to_inventory();
        entry->get_product_info_from_inventory(123);
        entry->update_product_in_inventory(123);
        entry->get_product_info_from_inventory(123);
    }
#endif
#if 1 //works
    inventory *i = new inventory();
    i->add_product_to_inventory();
    // i->add_product_to_inventory();
    // i->add_product_to_inventory();
    // i->add_product_to_inventory();
    // i->list_all_products_in_inventory();

    i->get_product_info_from_inventory(1234);
    // i->update_product_in_inventory(125);
    // i->get_product_info_from_inventory(123);
    i->delete_product_in_inventory(123);
    i->list_all_products_in_inventory();


    // inventory *j = new inventory();
    // j->add_product_to_inventory();
    // j->get_product_info_from_inventory(234);
    // j->update_product_in_inventory(234);
    // j->get_product_info_from_inventory(234);
#endif

    
    return 0;
	
}