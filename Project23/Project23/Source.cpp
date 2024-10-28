#include<iostream>
using namespace std;

int get_ticket_price(int visitor_age);

int main() {
	get_ticket_price(5);
	get_ticket_price(17);
	get_ticket_price(63);
}
int get_ticket_price(int visitor_age) {
	int price;
	if (visitor_age < 10) {
		 price = 8;
	}
		
	else if (visitor_age < 60) {
		 price = 18;
	}
		
	else if (visitor_age > 60) {
		 price = 12;
	}
		
	cout << price << endl;

	return price;
}