// laba1++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, s, e;
    cout << "?    " << endl;
    cout << "1. Vp?    " << endl;
    cout << "2. wssa?    " << endl;
    cout << "3. ^?    " << endl;
    cin >> e;
    while (e != 7361874)
        {
    if (e == 1)
    {
        cout << "a b c???" << endl;;
        cin >> a >> b >> c;
        s = a * b * c;
        cout << s;
        e = 7361874;
    }
    else
        if (e == 2) 
        {
            cout << "month(number)?" << endl;
            cin >> a;
            if ((a > 0 && a < 3) || a == 12)
            {
                cout << "winter";
            }
            else
                if (a > 2 && a < 6) 
                {
                    cout << "spring";
                }
                else
                    if (a > 5 && a < 9) 
                    {
                        cout << "summer";
                    }
                    else
                        if (a > 8 && a < 12) 
                        {
                            cout << "autumn";
                        }
                        else
                            while (a > 12 || a < 1)
                            {
                                cout << "wrong variable" << endl;
                                cout << "write new variable: ";
                                cin >> a;
                                if ((a > 0 && a < 3) || a == 12)
                                {
                                    cout << "winter";
                                }
                                else
                                    if (a > 2 && a < 6)
                                    {
                                        cout << "spring";
                                    }
                                    else
                                        if (a > 5 && a < 9)
                                        {
                                            cout << "summer";
                                        }
                                        else
                                            if (a > 8 && a < 12)
                                            {
                                                cout << "autumn";
                                            }
                            }
            e = 7361874;
        }
    if (e == 3)
    {
        int k, m, n;
        cout << "m^k = n ---> k = ?" << endl << "m: ";
        cin >> m;
        cout << "n: ";
        cin >> n;
        k = log2(n) / log2(m);
        cout << "k: " << k;
        e = 7361874;
    }
    else
        if (e < 1 || e > 3) 
        {
        cout << "wrong answer" << endl;
        cout << "new e: ";
        cin >> e;
        }
        }
}

