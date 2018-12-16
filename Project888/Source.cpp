#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int arr[100];
	int n, k;
	cout << "Enter the number in array" << endl;
	cin >> n;
	cout << "Enter the number k " << endl;
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		cout << "enter number :" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i]%k==0)
		{
			sum += arr[i] ;
		}
	}
	cout <<"The sum of numbers divided by k : "<< sum << endl;
	system("pause");
}