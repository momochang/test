#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

void Permutations(int *a, int k, const int m)
{
	int i;
	int t;
	if (k == m) //��X�ƦC
	{
		for (i = 0; i <= m; i++)
			cout << a[i] << "�@";
			cout << endl;
	}
	else // a [k : m] �٦��W�L�@�إH�W���ƦC�A���j���ͥ���
		for (i = k; i <= m; i++)
		{
			t = a[k];
			a[k] = a[i];
			a[i] = t;
			Permutations(a, k + 1, m);
			t = a[k];
			a[k] = a[i];
			a[i] = t;
		}
};

int main() {
	int str[4] = { 32,65,74,8 };
	Permutations(str,0,3);

	cin.get();
}