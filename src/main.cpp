#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{    
    Sales_item item1,item2;
    if (cin >> item1)
        {
        int cnt = 1;
        while (cin >> item2)
            {
            if (item2.isbn() == item1.isbn())
                ++cnt;
            else
                {
                cout<< item1.isbn() << " occurs "
                    << cnt << " times" << endl;
                item1 = item2;
                cnt = 1;
            }
        }
        cout<< item1.isbn() << " occurs "
            << cnt << " times" << endl;
    }
    return 0;
}
