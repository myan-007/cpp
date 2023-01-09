// C++ program for implementation of Heap Sort
#include <iostream>

using namespace std;
/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}


// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i)
{
	int current=i;
	int left=2*i;
	int right=2*i + 1;
	if(left < n && arr[left] > arr[current] ){
		current=left;
	}
	if(right < n && arr[right] > arr[current] ){
		current=right;
	}

	if(current != i){
		swap(arr[i], arr[current]);
		printArray(arr,n);
		heapify(arr,n,current);
	}
 


}

// main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >0; i--) {
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
}
int main()
{
	c_p_c();
	int arr[] = { 3,3,2,34,35 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
