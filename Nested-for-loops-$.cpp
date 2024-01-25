#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 6; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << "$";
		}
		cout << endl;
	}

int rows = 3; 
int columns = 5; 
	for (int i = rows; i < rows + columns; ++i) 
	{ 
		for (int j = 0; j < columns; ++j) 
		{ 
			cout << i - rows + 3; 
		} 
		cout << endl; 
	} 
	return 0; 
 }
