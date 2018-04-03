#include"Stock.h"
#include <iostream>

using namespace std;

class Stock::buy() {
	private:
		string name = "ABC";
		int quantity = 10;
	public:
		void buy(){
		cout<<"Stock"<<endl;
		cout<<"Name : ";
		cin>>name;
		cout<<"Quantity : ";
		cin>>quantity;
		cout<<"bought";
		}
};
