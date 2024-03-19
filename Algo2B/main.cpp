#include <bits/stdc++.h>

using namespace std;
int x, n, agecnt[105];

int main()
{
    while (scanf("%d", &n) && n != 0)
    {

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            agecnt[x]++;
        }
        x = 0;

        for (int i = 1; i <= 100 && x <= n; i++)
        {
            // cout<<i<<" x "<<agecnt[i]<<"\n";
            while (agecnt[i] != 0)
            {

                if (x != 0)
                {
                    printf(" ");
                }

                x++, agecnt[i]--;
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
