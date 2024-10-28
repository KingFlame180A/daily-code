#include<iostream>
using namespace std;


void docking_countdown();
int main() {

	docking_countdown(); 


}

void docking_countdown() {
	for (int i = 20; i >= 0; i -= 3) {
		cout << i << endl;

	}
	cout << "Docking Complete" << endl;
}