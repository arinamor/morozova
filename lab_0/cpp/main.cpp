#include <iostream>
#include <fstream>
#include <iterator>
#include <set>
#include <algorithm>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    ifstream file ("C:/Users/Lenovo Pc/Desktop/evsikovhw1/1.txt");
    set<int> a, b,res;
    int k, x, c;
    for (int i=1;i<13;i++)
    {
        file >> k;
        a.insert(k);
    }
    //cout << "Элементы множества: ";
    //copy( a.begin(), a.end(), ostream_iterator<int>(cout, " "));
    x = *(min_element(a.begin(), a.end()));
    c = *(max_element(a.begin(), a.end()));
    for (int i=1;i<c+1;i++)
    {
        b.insert(i);
    }
    //copy( b.begin(), b.end(), ostream_iterator<int>(cout," "));
    set_difference( b.begin(), b.end(), a.begin(), a.end(), inserter(res, res.begin()));
    if(res.empty())
        cout << "Сообщение " << x << "-" << c << " получено полностью" << endl;
        else
        {
         cout << "Сообщение " << x << " - " << c << " получено c нехваткой пакетов: " << endl;
         copy( res.begin(), res.end(), ostream_iterator<int>(cout," "));
        }

    return 0;
}
