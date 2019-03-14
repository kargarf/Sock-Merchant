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
    vector<int> v = {1,2,2,2,3,3,4,5,6,6};

    int result = sockMerchant(10, v);
    cout << result << endl;

    return 0;
}
