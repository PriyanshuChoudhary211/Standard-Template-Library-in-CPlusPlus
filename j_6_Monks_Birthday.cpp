/*
Monk's birthday is coming this weekend! He wants to plan a Birthday party and is preparing an invite list with his friend Puchi. He asks Puchi to tell him names to add to the list.
Puchi is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Monk hates redundancy and hence, enlists the names only once.
Find the final invite-list, that contain names without any repetition.

Input:
First line contains an integer T. T test cases follow.
First line of each test contains an integer N, the number of names that Puchi pops up with.

Output:
For each testcase,Output the final invite-list with each name in a new line. The names in the final invite-list are sorted lexicographically.
*/
//SOLUTION

#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<string>s;
		for(int i =0 ; i<n;i++)
		{
			string x;
            cin>>x;
			s.insert(x);
		}
		for(auto it:s)
		cout<<it<<endl;

	}
}