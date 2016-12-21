/*
-----------------------------------------------------QUESTION SET------------------------------------------------
Given an array of n unique integers where each element in the array is in range [1, n].
The array has all distinct elements and size of array is (n-2). Hence Two numbers from the range are missing from this array.
Find the two missing numbers.
Examples:
Input  : arr[] = {1, 3, 5, 6}
Output : 2 4
Input : arr[] = {1, 2, 4}
Output : 3 5
Input : arr[] = {1, 2}
Output : 3 4
-------------------------------------------------------SOLUTION--------------------------------------------------
                                      Method 1 – O(n) time complexity and O(n) Extra Space
Step 1: Take a boolean array mark that keeps track of all the elements present in the array.
Step 2: Iterate from 1 to n, check for every element if it is marked as true in the boolean array,
if not then simply display that element.
*/
#include <iostream>
#include<vector>                                  //Header file is neccessary
using namespace std;
void findTwoMissingNumber(int a[],int n){
	vector<bool>mark(n,false);                      //Mark is an array and vector<bool> is predefined function; CHECK IN REFERENCE :)
	for(int i=0;i<n-2;i++){
		mark[a[i]]==true;
	}
	cout<<"The Missing Terms are :- \n";
	for(int i=1;i=<n;i++){
		if(! mark[i]){
			cout<<i<<"\n";
		}
	}
}

int main() {
	// your code goes here
	int a[]={1,4,2,5};
	int n=2+sizeof(a)/sizeof(a[0]);              // a is memeory of whole array
	findTwoMissingNumber(a,n);
	return 0;
}
/*
FOR REFERENCE:-
http://www.geeksforgeeks.org/find-two-missing-numbers-set-1-an-interesting-linear-time-solution/
https://cal-linux.com/tutorials/vectors.html
http://www.cplusplus.com/reference/vector/vector/
*/