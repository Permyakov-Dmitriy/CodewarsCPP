#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <windows.h>
#include <deque>


using namespace std;


int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int num;
    deque<string> rows;

    cin >> num;

    for (size_t j = 1; j < num / 2 + 2; j++)
    {
        string chs = "";

        for (size_t i = 1; i < num / 2 + 2; i++)
        {
            if (i < j)
            {
                if (j % 2)
                {
                    chs += "■";
                } 
                else
                {
                    chs += "□";
                }
            }
            else
            {
                if (i % 2)
                {
                    chs += "■";
                } 
                else
                {
                    chs += "□";
                }
            }
        }

        string mir = chs.substr(3, size(chs) - 3);

        for (size_t i = 0; i < size(mir); i+=3)
        {
            chs = mir.substr(i, 3) + chs;
        }

        rows.push_back(chs);
    }

    deque<string>::iterator start = rows.begin() + 1;
    deque<string>::iterator end = rows.end(); 

    for (deque<string>::iterator it = start; it != end; ++it)
    {
        rows.push_front(*it);
    }

    string test;

    for (int i = 0; i < size(rows); i++)
    {   
        if (i != size(rows) - 1)
        {
             test += rows[i] + "\n";
        }
        else
        {
            test += rows[i];
        }
    }
    
    cout << test << endl;

    system("pause");

    return 0;
}
