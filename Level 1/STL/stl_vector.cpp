#include <iostream>
#include <algorithm>
#include <vector>
#include <pair>
using namespace std;

void	intro()
{


}


void	Materials()
{
	



	/*    *********   Unique *******     */


	//vector<int> arr = {10, 2 , 4, 10, 5 , 42 , 42 , 13, 4, 2};

    // Sort the vector
    // sort(arr.begin(), arr.end());

    // Remove duplicates
	//
	// Unique : does NOT remove elements from the vector
	//
	// Moves all unique elements to the beginning of the container
	//
	//Returns an iterator (last) to the new logical end of the unique part.
	//

    // auto last = unique(arr.begin(), arr.end());
    // arr.erase(last, arr.end()); // remove duplicate elements

    // // Print the result
    // for (int i = 0; i < arr.size(); i++)
   	// {
    //     cout << arr[i] << endl;
    // }



	/*  ********* lower bound  && upper bound   *********/


	// lower_bound(start, end, value)
	// Finds the first position where the value can be inserted without breaking order >= value)
	// value = 2 && 2 is not found  --> give : 3 

	// upper_bound(start, end, value)
	// Finds the first position where value is strictly greater  > value


	vector<int> v = {1, 3, 4, 5, 7, 8};

    sort(v.begin(), v.end()); // Must be sorted 

	// *** iteration 

	//vector <int>::iterator it  = lower_bound(v.begin(), v.end(), 3);

	// you can use like this :

	//auto iter = lower_bound(v.begin(), v.end(), 2);

	//cout << "simple iter : " << *it << "\t auto iter : " << *iter << endl;


	// auto it = upper_bound(v.begin(), v.end(), 7);

	// auto i = lower_bound(v.begin(), v.end(), 6);

	// ** trick : 

	auto it = upper_bound(v.begin(), v.end(), 7 - 1); // like using lower_bound is simpl triic

	auto i = lower_bound(v.begin(), v.end(), 7);

	//cout << "upper bound " << *it << "\nlower bound is : " << *i << endl; 

	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	cout << "size :  " <<  v.size() <<  "\ncapacity : " <<  v.capacity() << endl;  // 42 capacity 



}





int main(void)
{
	// Materials();
	
	intro();

	return 0;
}
