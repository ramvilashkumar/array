/*Andrew was attempting a mathematics test where he needed to solve problems with factorials. 
One such problem had an answer which equaled 100! ,He wondered what would this number look like. 
He tried to calculate 100! On his scientific calculator but failed to get a correct answer. 
Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format:
a single lined integer N

Constraints:
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120*/




#include<iostream>
using namespace std;
void fact(int);
int product(int,int [],int);
int main() {
	int n;
	cin>>n;
	fact(n);
	return 0;
}

void fact (int n)
{
	int arr[1000]={0},i=0,max_size=1;
	arr[0]=1;

	for(i=2;i<=n;i++)
	{
		max_size=product(i,arr,max_size);

	}

	for(int i=max_size-1;i>=0;i--)
	cout<<arr[i];


}

int product(int x,int arr[],int max_size)
{
	int carry=0;

	for(int i=0;i<max_size;i++)
	{
		int pro=arr[i]*x+carry;
		arr[i]=pro%10;
		carry=pro/10;
	}
	while(carry)
	{
		arr[max_size]=carry%10;
		carry=carry/10;
		max_size++;
	}
	return max_size;
}


