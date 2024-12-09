// C++ Program to implement Sentinel Linear Search 
#include <iostream> 
using namespace std; 

int sentinelLinearSearch(int arr[], int size, int target) 
{ 
	// Store the last element as the sentinel 
	int last = arr[size - 1]; 
	// Set the sentinel to the target 
	arr[size - 1] = target; 

	int i = 0; 
	while (arr[i] != target) { 
		i++; 
	} 

	// Restore the original value at the end 
	arr[size - 1] = last; 

	if (i < size - 1 || arr[size - 1] == target) { 
		return i; // Element found at index i 
	} 
	else { 
		return -1; // Element not found 
	} 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 8, 4, 11, 2 }; 
	int size = sizeof(arr) / sizeof(arr[0]); 
	int target = 4; 

	int result = sentinelLinearSearch(arr, size, target); 

	// printing result if the based on the value returned by 
	// sentinalLiner Search 
	if (result != -1) { 
		cout << "Element " << target << " found at index "
			<< result << endl; 
	} 
	else { 
		cout << "Element " << target << " not found"
			<< endl; 
	} 

	return 0; 
}

