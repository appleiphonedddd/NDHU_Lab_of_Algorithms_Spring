#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long LL;
const int maxn = 10005, Inf = 0x3f3f3f3f;
int T, n, f, pie[maxn];
double s[maxn], maxs;

inline bool check(double x)
{
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += s[i] / x;
    }
    return ans >= f;
}

int main(void)
{
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &f);
        ++f;
        maxs = -1;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &pie[i]);
            s[i] = M_PI * pie[i] * pie[i];
            maxs = max(maxs, s[i]);
        }
        double left = 0, right = maxs;
        while (right - left > 1e-6)
        {
            double mid = (left + right) / 2;
            if (check(mid))
                left = mid;
            else
                right = mid;
        }
        printf("%.4lf\n", left);
    }
    return 0;
}