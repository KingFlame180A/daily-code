#include<iostream>
using namespace std;

void truck_weight_check(int load_weight);

int main() {
	truck_weight_check(1210);
}

void truck_weight_check(int load_weight) {
	if (load_weight > 1200) {
		cout << "overweight" << endl;
	}
	else
		cout << "within limit" << endl;
}