#include<iostream>
using namespace std;

class Stock;
class Order;

class BuyStock : public Order{
   private:
   Stock *absStock;

   public:
   virtual ~BuyStock()
   {
	   delete absStock;
   }

   BuyStock(Stock *absStock);

   virtual void execute();
};
