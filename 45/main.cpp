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

       if(a==1)
       {
         string s1 ;
         cin>>s1;
         int i1;
         cin>>i1;

         map1.insert({s1,i1}) ;

       }

       else if(a==2)
       {
         int c;
         cin>>c;
         A.erase(c);


       }
       else if(a==3)
        {
          int dd;
          cin>>dd;

         if(A.count(dd) == 1)
         {

             cout<<"Yes "<<endl;
                      }

                      else
                      {

                          cout<<"No"<<endl;
                      }

        }

    }
    return 0;
}
