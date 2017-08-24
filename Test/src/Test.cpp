
#include <iostream>
using namespace std;

int main() {
	int TheNum;
	cout << "Enter Number from 1 to 5: ";
	cin >> TheNum;
	if (TheNum == 1){
		cout << "You are the first rank";
	}

	else if (TheNum == 2) {
		cout << "You are at the Second rank";
	}

	else if (TheNum == 3){
		cout << "You are the Third";
	}

	else {
		cout << "Sorry You lost try again";
	}
	return 0;
}
