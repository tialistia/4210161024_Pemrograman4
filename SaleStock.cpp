#include"SaleStock.h"
#include <iostream>

using namespace std;

BuyStock::BuyStock(Stock *abcStock){
   this->abcStock = abcStock;
}

class BuyStock::excute(){
	
		Stock absStock;
		absStock->buy();
		
};
