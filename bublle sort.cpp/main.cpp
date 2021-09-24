#include <iostream>

using namespace std;

// bubble sort



void bubble_sort(int A[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

            }
        }


    }




}









int main()
{
    int n;
    cin>>n;
    int B[n];
    for(int k=0;k<n;k++)
    {

        cin>>B[k];
    }
    for(int kk=0;kk<n;kk++)
    {

        cout<<B[kk]<<endl;
    }

    bubble_sort( B,n);

    for(int kkk=0;kkk<n;kkk++)
    {

        cout<<B[kkk]<<endl;
    }

    return 0;
}
