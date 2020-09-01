#include <iostream>
#include "Vote.h"
using namespace std;

int main() {
	Vote pby("PBY");
	Vote IU("IU");
	unsigned count{ 0 };
	int vote{ 0 };

	while (count < 10) {
		count++;
		cout << "1. " << pby.getName() << " vs 2. "
			<< IU.getName() << "\n?: ";
		cin >> vote;
		
		if (vote == 1) {
			pby.incrementCount();
		}
		else if (vote == 2) {
			IU.incrementCount();
		}
		else {
			cout << "¹«È¿" << endl;
			count--;
		}
	}
	cout << "\n" << pby.getName() << ": " << pby.getCount() << endl;
	cout << IU.getName() << ": " << IU.getCount() << endl;

	if (pby.getCount() > IU.getCount()) {
		cout << pby.getName() << " win!" << endl;
	}
	else if (pby.getCount() < IU.getCount()) {
		cout << IU.getName() << " win!" << endl;
	}
	else if (pby.getCount() == IU.getCount()) {
		cout << "Draw!" << endl;
	}

	return 0;
}