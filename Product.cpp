#include "Product.h"


using namespace std;




Product::Product(const Product& rhs) : brand(rhs.brand)
{
    productId = rhs.productId;
    name = rhs.name;
    description = rhs.description;
    model = rhs.model;
    price = rhs.price;
    quantity = rhs.quantity;
    upc = rhs.upc;
    productDimensions = rhs.productDimensions;
  
}

Product Product::operator=(const Product& rhs)
{
    Product newProd(rhs);
   
    return newProd;
}