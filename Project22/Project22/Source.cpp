#include<iostream>
using namespace std;

void school_zone_signal(string signal_color);

int main() {
	school_zone_signal("red");
	school_zone_signal("yellow");
	school_zone_signal("green");
}

void school_zone_signal(string signal_color) {
	if (signal_color == "red")
		cout << "Stop" << endl;
	else if (signal_color == "yellow")
		cout << "Be ready" << endl;
	else if (signal_color == "green")
		cout << "proceed" << endl; 
}