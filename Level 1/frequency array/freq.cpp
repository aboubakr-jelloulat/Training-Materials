#include <iostream>
using namespace std;


//	*********	What is a Frequency Array	***********

/*
	1) - What is freq Array : 

		A frequency array is a way to count how many times each item (number, letter, etc.) appears in a list, string, or array.

	2) - why we use it ? :

		Fast – It gives us O(1) (constant time) access to the count of any element.



*/

void	CountAlpha(string s)
{
	int freq[26] = {0};

	for (char c : s)
		freq[c - 'a']++;
	// print 

	for (int i = 0; i < 26; i++)
		if (freq[i])
			cout << char (i + 'a') << " :  appears  " << freq[i] << "  times" << endl;
}


int main()
{
	CountAlpha("cccaabababaccbc");

	return 0;
}