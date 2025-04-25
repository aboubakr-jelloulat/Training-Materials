#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

void Pair()
{

	// **************   pair ***************


	/*

		pair <int, int> 	mypair;

		cin >> mypair.first >> mypair.second;

		cout << mypair.first << endl << mypair.second << endl;
	
	*/
	

	// ************  Array of pair *************

	/*
		pair<int, int> parr[100];

		for (int i = 0; i < 3; i++)
			cin >> parr[i].first >> parr[i].second;

		for (int i = 0; i < 3; i++)
			cout << parr[i].first << "  " << parr[i].second << endl;

	*/

	
}

void Materials()
{

	// ****** vector method

	//   clear();   push_pack   O(1)


	// ******* erase ******

	// 0 1 2 3

	/* 
	v4.erase(v4.begin() + 3); // erase elemnt with position 3


	v4.erase(v4.begin() + 1, v4.begin() + 5); // erase range from [1 , 5)

	// vector 2D

	vector<vector<int>> v5;						 // int v5[][];
	vector<vector<int>> v5(50, vector<int>(50)); // int v5[50][50];

	vector<pair<int, int>> v6;  // vector pair 
	vector<pair<pair<int, int>, float>> v7;


	v7[0].first.first;
	v7[0].first.second;
	v7[0].second;


	*/



	/*    *********   Unique *******     */



	
	/*
	vector<int> arr = {10, 2 , 4, 10, 5 , 42 , 42 , 13, 4, 2};

	Sort the vector
	sort(arr.begin(), arr.end());

	Remove duplicates
	
	Unique : does NOT remove elements from the vector
	
	Moves all unique elements to the beginning of the container
	
	Returns an iterator (last) to the new logical end of the unique part.
	

	auto last = unique(arr.begin(), arr.end());
	arr.erase(last, arr.end()); // remove duplicate elements

	// Print the result
	for (int i = 0; i < arr.size(); i++)
	{
	    cout << arr[i] << endl;
	}
	*/

	/*  ********* lower bound  && upper bound   *********/

	//lower_bound(start, end, value)
	// Finds the first position where the value can be inserted without breaking order >= value)
	// value = 2 && 2 is not found  --> give : 3

	// upper_bound(start, end, value)
	// Finds the first position where value is strictly greater  > value

	// vector<int> v = {1, 3, 4, 5, 7, 8};

	// sort(v.begin(), v.end()); // Must be sorted




	// *** iteration





	/* 

	vector <int>::iterator it  = lower_bound(v.begin(), v.end(), 3);

	you can use like this :

	auto iter = lower_bound(v.begin(), v.end(), 2);

	cout << "simple iter : " << *it << "\t auto iter : " << *iter << endl;

	auto it = upper_bound(v.begin(), v.end(), 7);

	auto i = lower_bound(v.begin(), v.end(), 6);

	** trick :

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

	*/


}

int main(void)
{
	Materials();

	Pair();

	return 0;
}
