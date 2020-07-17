/* Image Roation By 90 degree

Sample Input
3
1 2 3 
4 5 6
7 8 9

Sample Output
7  4  1  
8  5  2  
9  6  3 
*/


#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n][n];
    //input the values in matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }

      //For image Rotation
     //Step 1: First transpose the matrix
    //Step 2: Find mirror image

    //Step 1

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(i<j)
        swap(arr[i][j],arr[j][i]);
    }

    //Step 2
    for(int i=0;i<n;i++)
    {
        int p=0,q=n-1;

        while(p<=q)
        {
            swap(arr[i][p],arr[i][q]);
            p++;
            q--;
        }
    }

    //Print the final resultant matrix
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    cout<<arr[i][j]<<"  ";

    cout<<endl;
    }
    return 0;
}
