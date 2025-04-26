#include <iostream>
using namespace std;

/*
	Prefix Sum means:

	For an array, we precompute the sum of elements from the beginning up to each position.

*/

void PrefixSum()
{
	int n;  cin >> n;
	int arr[n];
	int prfx[n];

	for (int i = 0; i < n; i++) 
		cin >> arr[i], prfx[i] = arr[i]; // 1 2 3 4 5 

	

	for (int i = 1; i < n; i++)
		prfx[i] += prfx[i - 1];

	cout << "after prefix : " << endl;
	for (int i = 0; i < n; i++) 
		cout << prfx[i] << " "; // 1 3 6 10 15 
	

	// ******* Range between 6 and 15 ??

	cout << prfx[n - 1] - prfx[2];  == // 9


}


int main(void)
{
	PrefixSum();

	return 0;
}