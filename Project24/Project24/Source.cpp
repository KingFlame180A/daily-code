#include<iostream>
using namespace std;

void verify_username();

int main() {
	 verify_username();
}

void verify_username() {
	string name = "h";
	while (name != "CodeMaster123") {
		cout << "enter Username" << endl;
		cin >> name;
	}
	cout << "Access Granted" << endl;
}


