#include<bits/stdc++.h>
#include<string>
using namespace std;

void subsq(string input, string output)
{
	if(input.length()==0)
	{
		cout<<output<<endl;
		return;
	}
	subsq(input.substr(1),output);
	subsq(input.substr(1),output+input[0]);
}
int main()
{
	string input;
	cin>>input;
	string output = "";
	subsq(input,output);
}
