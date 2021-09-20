#include<algorithm>
#include<stdlib.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int q;
    cin>>q;
    map<string,int>map1;

    while(q--)
    {
       int a;

       cin>>a;

   multimap<string, int>::iterator it ;

       if(a==1)
       {
         string s1 ;
         cin>>s1;
         int i1;
         cin>>i1;
         it = map1.find(s1);

         if(it != map1.end())
         {
       it->second= (it->second) + i1 ;
         }


        else {
         map1.insert({s1,i1}) ;
        }


       }

       else if(a==2)
       {
         string s2;
         cin>>s2;
         map1.erase(s2);


       }
       else if(a==3)
        {
           string s3;
           cin>>s3;
            it = map1.find(s3);

         if(it == map1.end())
         {
        cout << "0" ;
         }
    else
    {
        cout<< it->second ;
    }

    cout << endl ;


        }

    }
    return 0;
}
