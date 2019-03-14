#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;


int sockMerchant(int n, vector<int> ar) {
    int PiarCout = 0;
    int temp = 0;
    int y=0;
    for(int i=y; i<n; i++)
    {
        temp = ar[i];
        if(temp > 0)
        {
            for(int k=y+1; k<n; k++)
            {
                if(temp == ar[k])
                {
                    PiarCout++;
                    ar[i] = -1;
                    ar[k] = -1;
                    break;
                }
            }
        }
        y++; // i 0 dan başlamasın.
    }
    return PiarCout;
}

int main()
{
    vector<int> v;
    int a;
    int n;
    for(int i = 0; i < n; i++)
    {
    	cin >> a; 
    	v[i] = a;
    }

    int result = sockMerchant(n, v);
    cout << result << endl;

    return 0;
}
