//============================================================================
// Name        : TEST.cpp
//============================================================================

// Adds passed in array values together
int add(int arr []){
	int sum = 0;
	for(int i = 0;i < sizeof(arr); i++){
		sum = sum + arr[i];
	}
	return sum;
}

int multiply(int arr []){
		int result = 0;
		for(int i = 0; i < sizeof(arr); i++){
			result = result * arr[i];
		}
		return result;
}
