#ifndef PRODUCT_H
#define PRODUCT_H

class product
{
	private:
	
    char* product_name_;
    double product_price_;
    public:
    int product_id_;
    // int inventory_count_;//? is this here , don't think so
    product(int product_id,const char* product_name,double product_price);
    void get_product_info(void);
    void update_product_info(void);
	// ~product(); add dtor ? might cause double free as both composite and base class might call it during deletion
}; 

#endif