/*ARRAYS-SUM OF TWO ARRAYS
Take as input N, the size of array. Take N more inputs and store that in an array.
Take as input M, the size of second array and take M more inputs and store that in second array. 
Write a function that returns the sum of two arrays. Print the value returned.

Input Format:
Constraints:
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END

*/
#include <iostream>
using namespace std;

int main()
{
    int r1,r2,max,carry=0;
    cin>>r1;
    int m1[r1];
    for(int i=0;i<r1;i++)
    cin>>m1[i];
    cin>>r2;
    int m2[r2];
    for(int i=0;i<r2;i++)
    cin>>m2[i];

    max=(r1>=r2)?r1:r2;
    int arr[max+1]={0},k=max;
    int i=r1-1,j=r2-1;

    for(;i>=0 && j>=0;i--,j--,k--)
    { 
      
        int sum=carry+m1[i]+m2[j];
        //cout<<carry<<"  "<<m1[i]<<"  "<<m2[j]<<" ="<<sum<<endl;
        arr[k]=sum%10;
        carry=sum/10;
    }

    if(i>=0)
    {
        while(i>=0)
        {
        int sum=carry+m1[i];
        arr[k]=sum%10;
        carry=sum/10;
        k--;
        i--;
        }

    }else if(j>=0)
    {
         while(j>=0)
        {
        int sum=carry+m2[j];
        arr[k]=sum%10;
        carry=sum/10;
        k--;
        j--;
        }
    }else{
        arr[k]=carry;
    }
 
    if(arr[0]!=0)
    cout<<arr[0]<<", ";

    for(int i=1;i<=max;i++)
    cout<<arr[i]<<", ";

    cout<<"END";

    return 0;


}




