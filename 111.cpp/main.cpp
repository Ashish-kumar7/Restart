#include <iostream>
#include <stdio.h>
#include<sstream>
#include <string>

using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while (t--)
	{
	    string A,B;
	    cin>>A;
	    cin>>B;
	    int count=0;

        int b =0;
        b = stoi(B, 0, 2);

        int a=0;
        a = stoi(A, 0, 2);

	    while(b>0)
        {

        u = a ^ b ;
        v = a & b;
        a = u;

        b = v * 2 ;

        count++;

        }

cout<<count<<endl;



	}


	return 0;
}
