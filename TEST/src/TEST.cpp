//============================================================================
// Name        : TEST.cpp
//============================================================================
#include <iostream>
using namespace std;

int size = 0;
// Adds passed in array values together
int add(int arr []){
	int sum = 0;
	for(int i = 0;i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

// Multiplies passed in array values together
int multiply(int arr []){
		int result;
		for(int i = 0; i < size; i++){
			result = result * arr[i];
		}
		return result;
}

// Reverses passed in array
int* reverseArr(int arr []){
		int *result = NULL;
		result = new int[size];
		int count = 0;
		for(int i = size - 1; i >= 0; i--){
			 result[count] = arr[i];
			 count++;
		}
		return result;
}

int main(){
	// Initialize variables
	int sum = 0;
	int product = 0;
	int input;

	// Ask user for input
	cout << "How many numbers to add and multiply?" << endl;
	cin >> size;
	int num[size];
	int *reverse;
	// Initialize array
	for(int i = 0;i <= size; i++){
		num[i] = 0;
	}

	// Ask user for each number
	for(int i = 0;i < size;i++){
	cout << "Enter number to add and multiply: " << endl;
	cin >> input;
	num[i] = input;
	}

	// Call add and multiply to do calculations
	sum = add(num);
	product = multiply(num);
	reverse = reverseArr(num);


	// Print results
	cout << endl << "Sum: " << sum << endl;
	cout << "Product: " << product << endl;
	cout << "Reversed Array: ";
	for(int i = 0; i < size; i++){
		cout << reverse[i] << " ";
	}

	return 0;
}
