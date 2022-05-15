// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.505

#include <iostream>
int main()
{
	using namespace std;
	int quantity,price;
	cout << "Enter quantity" << endl;
	cin >> quantity;
	price = quantity*100;
	if (price>1000){
		cout << "Total cost is " << price-(price*.1) << endl;
	}
	else{
		cout << "Total cost is " << price << endl;
	}
	return 0;
}	