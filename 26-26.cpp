#include <iostream>
#include <fstream>		
#include <vector>	 // вектор массив
#include <algorithm> // сортировка				
using namespace std;

int main()
{
	int * p;
	int a[5] = {1,2,3,4,5};
	
	for(int i = 0; i < 5; i++)
	{
		p = &a[i];
		cout << p << endl;
	}
	return 0;
}
