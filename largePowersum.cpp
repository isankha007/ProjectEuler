#include <iostream>
#include <math.h>

using namespace std;
const int SIZE = 1000;

int main()
{
	int i,j,cnt,sum,maxI;
	int arr[SIZE];

	cout << "Enter power of 2: ";
	cin >> maxI;
	cout << "\n";

	for (i = 0; i < SIZE; i++)
		arr[i] = 0;

	arr[SIZE-1] = 1;
	cnt = 1;
	sum = 0;
	for (i = 1; i <= maxI; i++)
	{
		for (j = 0; j < cnt; j++)
			arr[SIZE-1-j] = arr[SIZE-1-j] * 2;
		for (j = 0; j < cnt; j++)
		{
			arr[SIZE-1-j-1] += arr[SIZE-1-j] / 10;
			if (arr[SIZE-1-j-1] > 0) cnt = max(cnt,j+2);
			arr[SIZE-1-j] = arr[SIZE-1-j] % 10;
		}

	}
	for (i = 0; i <= cnt; i++)
	{
		cout << arr[SIZE-1-cnt+i];
		sum += arr[SIZE-1-cnt+i];
	}
	cout << "\nSUM: " << sum << "\n";
	return 0;
}
