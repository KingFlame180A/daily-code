#include<iostream>
using namespace std;

void battlesim();

int playerhealth = 100;

int main() {
	srand(time(NULL));
	int room = 1;
	char input;
	while (playerhealth > 0) {
		switch (room) {
		case 1:
			cout << "you're in room 1, you can go (s)outh" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			battlesim();
			cout << "you're in room 2, you can go (s)outh or (n)orth" << endl;
			cin >> input;
			if (input == 's')
				room = 3;
			else if (input == 'n')
				room = 1;
			break;
		case 3:
			cout << "you're in room 3, you can go (n)orth" << endl;
			cin >> input;
			if (input == 'n')
				room = 2;
			break;
		}


	}
}




void battlesim() {
	int monsterhealth = 30;
	int damage;
	char dummy;
	cout << endl << endl << "---------------MONSTER BATTLE BEGINS---------------" << endl;
	cout << "an ogre attack!" << endl;
	while (playerhealth > 0 && monsterhealth > 0) {

		damage = rand() % 11;
		cout << "the monster bites you for" << damage << "DAMAGE!" << endl;
		playerhealth -= damage;
		cout << "pressany key to continue. . ." << endl;
		cin >> dummy;

		damage = rand() % 10;
		cout << "you hit the monster for" << damage << "DAMAGE!" << endl;
		monsterhealth -= damage;
		cout << "pressany key to continue. . ." << endl;
		cin >> dummy;

		if (playerhealth > 0)
			cout << "you health is now: " << playerhealth << endl;
		else
			cout << "you died" << endl;
		if (monsterhealth > 0)
			cout << "the monster's health is now: " << monsterhealth << endl;
		else
			cout << "you killed the monster, good job!" << endl;

		cout << "pressany key to continue. . ." << endl;
		cin >> dummy;
	}
	if (playerhealth > 0)
		cout << "you won!" << endl;
	else
		cout << "you lost!" << endl;
	cout << "--------------END OF BATTLE ---------------" << endl;
}
