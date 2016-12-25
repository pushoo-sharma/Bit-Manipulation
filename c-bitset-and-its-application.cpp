/*
----------------------------------------------------------------------Bitset------------------------------------------------------------------
A bitset is an array of bool but each Boolean value is not stored separately instead bitset optimizes the space such that each bool takes 1 bit
 space only, so space taken by bitset bs is less than that of bool bs[N] and vector bs(N). However, a limitation of bitset is, N must be known 
 at compile time, i.e., a constant (this limitation is not there with vector and dynamic array)

As bitset stores the same information in compressed manner the operation on bitset are faster than that of array and vector. We can access each 
bit of bitset individually with help of array indexing operator [] that is bs[3] shows bit at index 3 of bitset bs just like a simple array.
Remember bitset starts its indexing backward that is for 10110, 0 are at 0th and 3rd indices whereas 1 are at 1st 2nd and 4th indices.
We can construct a bitset using integer number as well as binary string via constructors which is shown in below code.
The size of bitset is fixed at compile time that is, it can’t be changed at runtime.
*/
----------------------------------------------------------------------Application-1----------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define M 32
int main() {
	// your code goes here
	bitset<M>bset1;        //synatx is bitset<size>variable-name;
	                       //we can change the value of bitset;
	bitset<M>bset2(20);
	                       //we can initialize the bitset with specific binary set by passing string
	bitset<M>bset3(string("1100"));
	                       //check the output of the following bitset
	cout<<bset1<<"\n";
	cout<<bset2<<"\n";
	cout<<bset3<<"\n";
	return 0;
}
----------------------------------------------------------------------Application-2----------------------------------------------------------
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	bitset<4> a;
	a[1]=1;
	a[3]=a[1];
	cout<<a;
	return 0;
}