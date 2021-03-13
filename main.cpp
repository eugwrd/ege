#include <iostream>
#include <fstream>		
#include <vector>
#include <algorithm>				
using namespace std;

int main()
{
	fstream Fin("files/26-j1.txt");
	int N, count = 0;
	Fin >> N;
	
	vector <int> data(N);
	for(int i = 0; i < N; i++)
		Fin >> data[i];	
	sort(data.begin(), data.end());
	
	while(!data.empty())
	{
		for(int i = 1; i < data.size(); i++)
		{
			if(data[0] + data[i] == 100)
			{
				count++;
				data.erase(data.begin() + i);
				break;
			}
		}	
		data.erase(data.begin());
	}
	
	cout << count;
	return 0;
}
