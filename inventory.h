#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
class product;

class inventory
{
    private:
    int inventory_count_;
    vector<int> list_of_all_Ids;
    vector<product> inventory_products;
    public:
    void get_product_info_from_inventory(int product_id) ;
    void add_product_to_inventory(void); // types yet to decide 
    void update_product_in_inventory(int product_id);
    void delete_product_in_inventory(int product_id);
    void list_all_products_in_inventory();

    
    // add dtor ?not necessary I guess
};

#endif