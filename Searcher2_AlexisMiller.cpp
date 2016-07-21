// Alexis Miller
// 15195414
// Date: July 19

#include <iostream>
using namespace std;

// Program that prints the position of an int in an array.

int arrayContainsValue(int [], int);

int main(){
	int val;
	int myDataList[] = {12, 223, 232, 434, 1433, 0, -34, 14, 43, 544, 223};
	cout << "Please enter an integer to search for: ";
	cin >> val;
	cout << "The value was found at position: " << arrayContainsValue(myDataList, val) << endl;
	return 0;
}

int arrayContainsValue(int a[], int b){
	for(int i=0; i<11; i++){
		if(b==a[i])
			return i;
	}
	return -1;
}
