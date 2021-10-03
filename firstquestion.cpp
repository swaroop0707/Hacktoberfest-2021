#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e = 120;
        int count = 0;
        int n;
        cin >> n;
        int a[120];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if ((e - n) >= 90)
        {
            cout << "Yes";
            //flag=1;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                if (a[i] == 1)
                {
                    count++;
                }
            }
            if (count + (e - n) >= 90)
            {
                cout << "Yes";
            }

            else
                cout << "No";
        }
    }

    return 0;
}
