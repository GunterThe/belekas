#include <iostream>

using namespace std;

const int CMax = 100;

int Ivesti();
void Skaiciuoti(int n, int A[]);
void Isvesti(int n, int A[]);

int main()
{
	int n, A[CMax];

	n = Ivesti();
	Skaiciuoti(n, A);
	Isvesti(n, A);

}
//--------------------------------------

int Ivesti()
{
	int n;
	cout << "Iveskite kiek skaiciu norite, kad pasirodytu " << endl;
	cin >> n;
	return n;
}
//---------------------------------------------

void Skaiciuoti(int n, int A[])
{
	int a = 1, b = 0, sum;
    
	for (int i = 0; i < n; i++)
	{
		sum = a + b;
		A[i] = sum;
		if (a > b)
			b = sum;
		else if (a < b)
			a = sum;
		else
			a = sum;
	}
}
//-----------------------------------------------

void Isvesti(int n, int A[])
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << A[i] << ";";
	}
	cout << " " << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << " " << A[i] << ";";
	}
}