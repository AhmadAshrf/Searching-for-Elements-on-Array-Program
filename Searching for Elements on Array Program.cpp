#include <iostream>
using namespace std;
int main() {
	// Searching for Numbers[Elements] on Array Program
	int arr[5]; 
	cout << "Enter Your Five Numbers!" << endl;
	for (int i = 0; i < 5; i++){
		cin >> arr[i];
	};
	int element;
	cout << "What Element You're Looking For ?" << endl;
	cin >> element;
	bool Found = false;
	int i;
	for (i = 0; i < 5; i++){
		if (element == arr[i])
			Found = true;
		break;
	};
	cout << endl;
	if (Found = true) // check if program found the element
		cout << element << "Found at Position" << i << endl ;
	else
		cout << element << "Is Not Found at The Array" << endl;
	system("pause");
	return 0;
};