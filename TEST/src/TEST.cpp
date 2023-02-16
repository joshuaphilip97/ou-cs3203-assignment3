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
