/*
Question:-
Pairs of complete strings in two sets of strings
Two strings are said to be complete if on concatenation, they contain all the 26 English alphabets.
For example, “abcdefghi” and “jklmnopqrstuvwxyz” are complete as they together have all characters from ‘a’ to ‘z’.
We are given two sets of sizes n and m respectively and
we need to find the number of pairs that are complete on concatenating each string from set 1 to each string from set 2.
Input : set1[] = {"abcdefgh", "pushpaksharma",
                 "lmnopqrst", "abc"}
        set2[] = {"ijklmnopqrstuvwxyz", 
                 "abcdefghijklmnopqrstuvwxyz", 
                 "defghijklmnopqrstuvwxyz"} 
Output : 7
The total complete pairs that are forming are:
"abcdefghijklmnopqrstuvwxyz"
"abcdefghabcdefghijklmnopqrstuvwxyz"
"abcdefghdefghijklmnopqrstuvwxyz"
"geeksforgeeksabcdefghijklmnopqrstuvwxyz"
"lmnopqrstabcdefghijklmnopqrstuvwxyz"
"abcabcdefghijklmnopqrstuvwxyz"
"abcdefghijklmnopqrstuvwxyz"
-----------------------------------------------------------------------------------------------------------------------------
Solution
Method 1 (Naive method)
A simple solution is to consider all pairs of strings, concatenate them and
then check if the concatenated string has all the characters from ‘a’ to ‘z’ by using a frequency array.
*/
#include <iostream>
using namespace std;
int CountFrequency(string s1[],string s2[],int n,int m)
{
	int result=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			string cat =s1[i]+s2[j];
			int frequency [26]={0};
			for(int k=0;k<cat.length();k++)
			{
				frequency[cat[k]-'a']++;
			}
			int l;
			for(l=0;l<26;l++)
			{
				if(frequency[i]<1)
				break;
			}
			if(l==26)                         //important statement
			result++;
		}
	}
	return result;
}	

int main() {
	string s1[]={"abcdefgh", "pushpaksharma","lmnopqrst", "abc"};
	string s2[]={"ijklmnopqrstuvwxyz","abcdefghijklmnopqrstuvwxyz","defghijklmnopqrstuvwxyz"};
	int n=sizeof(s1)/sizeof(s1[0]);
	int m=sizeof(s2)/sizeof(s2[0]);
	cout<<"Pair of complete string\n"<<CountFrequency(s1,s2,n,m);  // don't write string s1 in actual arguement.    
    return 0;
}
/*
For reference
Reference 1:-
#include <iostream>
using namespace std;
int main()
{
    string set1[] = {"abcdefgh", "geeksforgeeks",
                      "lmnopqrst", "abc"};
    string set2[] = {"ijklmnopqrstuvwxyz",
                     "abcdefghijklmnopqrstuvwxyz",
                     "defghijklmnopqrstuvwxyz"};
    int n= sizeof(set1)/sizeof(set1[0]);
    int m= sizeof(set2)/sizeof(set2[0]);
    int a= sizeof(set1);
    int b=sizeof(set2);
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<n<<"\n";
    cout<<m<<"\n";
}
*/