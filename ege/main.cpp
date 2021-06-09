#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "");

    ifstream fin("files/24_demo.txt");

    char last,prev;
    int cnt = 1, max = 0;
    fin.get(last);
    while (fin.get(prev))
    {
        if (last != prev) cnt++;
        else
        {
            if (cnt > max) max = cnt;
            cnt = 1;
        }

        last = prev;
    }

    cout << max;

    return 0;
}