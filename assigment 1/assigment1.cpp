/*Assigment 1
* Dmitrii Frolov
* U214N1483
*/
#include <iostream>

using namespace std;

int main() {
	int* A;
	int sizeOfA;
	bool check;


	cout << "\nHow many elements in set A? ";
	cin >> sizeOfA;
	A = new int[sizeOfA];
	for (int i = 0; i < sizeOfA; i++) {

		cout << "\nA[" << i << "] : ";
		cin >> A[i];

		do {

			check = false;

			for (int j = 0; j < i; j++) {

				if (A[i] == A[j]) {
					check = true;
				}
			}

			if (check == true) {

				cout << "\nTry again A[" << i << "] : ";
				cin >> A[i];
			}

		} while (check == true);


	}
	int* B;
	int sizeOfB;
    check = false;


	cout << "\nHow many elements in set B? ";
	cin >> sizeOfB;
	B = new int[sizeOfB];
	for (int i = 0; i < sizeOfB; i++) {

		cout << "\nB[" << i << "] : ";
		cin >> B[i];

		do {

			check = false;

			for (int j = 0; j < i; j++) {

				if (B[i] == B[j]) {
					check = true;
				}
			}

			if (check == true) {

				cout << "\nTry again B[" << i << "] : ";
				cin >> B[i];
			}

		} while (check == true);


	}

	//itersection 
	int* C;
	int sizeOfC = 0;
	for (int i = 0; i < sizeOfA; i++) {

		for (int j = 0; j < sizeOfB; j++) {

			if (A[i] == B[j]) {
				sizeOfC++;
			}
		}
	}

		C = new int[sizeOfC];
		int i = 0;
		for (int g = 0; g < sizeOfA; g++) {

			for (int j = 0; j < sizeOfB; j++) {

				if (A[g] == B[j]) {
				
					C[i] = B[j];
					i++;
				}
			}
		}

		cout << "\nIntersection of A and B = {";

		for (int i = 0; i < sizeOfC; i++) {
			cout << ' ' << C[i] << ' ';
		}
		cout << '}';


		//union
		int* D;
		int sizeOfD;
		sizeOfD = sizeOfA + (sizeOfB - sizeOfC);
		D = new int[sizeOfD];
		int j = 0;

		for (int i = 0; i < sizeOfA; i++) {
			D[i] = A[i];
			j++;
		}

		for (int i = 0; i < sizeOfB; i++) {
			check = false;
				for (int g = 0; g < sizeOfC; g++) {
					if (C[g] == B[i]) {
						check = true;
					}
				}
				if (check == false) {
					D[j] = B[i];
					j++;
				}


		}
		cout << "\nUnion A and B {";

		for (int i = 0; i < sizeOfD; i++) {
			cout << ' ' << D[i] << ' ';
		}
		cout << '}';


		//difference
		int* E;
		int sizeOfE =0;
		sizeOfE = sizeOfA - sizeOfC;
		E = new int[sizeOfE];

		 i = 0;
		for (int j = 0; j < sizeOfA; j++) {
			check = false;
			for (int g = 0; g < sizeOfC; g++) {
				if (C[g] == A[j]) {
					check = true;
				}
			}
			if (check == false) {
				E[i] = A[j];
				i++;
			}

			
		}
		
		cout << "\nA - B = {";

		for (int i = 0; i < sizeOfE; i++) {
			cout << ' ' << E[i] << ' ';
		}
		cout << '}\n';

		
		system("Pause");
}