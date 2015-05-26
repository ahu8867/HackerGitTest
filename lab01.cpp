#include <iostream>
#include <ctime>
using namespace std;

void swap(int* a);

int main()
{
	srand(unsigned int(time(NULL)));
	
	
	int *a = new int [100];
	for (int i = 0; i < 100; i++)
	{
		a[i] = rand() % 100;
	}
	swap(a);
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;

	return 0;
}
void swap(int* a)
{
	int temp;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}

