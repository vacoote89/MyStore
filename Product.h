#ifndef PRODUCT_H
#define PRODUCT_H



class Product
{
private:
	

public:
	
	/**
	 * @brief Construct a new Product object (Copy Constructor)
	 * @param Product Object whose values will be copied.
	 */
	Product(const Product&);

	/**
	 * @brief Overloaded assignment operator 
	 * @param Product Object whose values will be copied
	 * @return Product 
	 */
	Product operator=(const Product&);
};


#endif