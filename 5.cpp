#include <iostream>
using namespace std;
class Max
{
public:
	int proizv(int* a, int n)
	{   int pr;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i] * a[j] > pr && i != j)
				{
					pr = a[i] * a[j];
				}
		return pr;
	}
};
int main()
{
	int n;
	cout << "Введите количество чисел в последовательности: " << endl;
	cin >> n;
	int* a = new int[n];
	cout << endl << "Введите последовательность чисел:" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Max m;
	cout << m.proizv(a, n);
}