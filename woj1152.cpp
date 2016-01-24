/*
 * Author: NICK WONG
 * Created Time:  1/24/2016 14:56:02
 * File Name: woj1152.cpp
 */
#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<list>
#include<deque>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<ctime>
#include<iomanip>
using namespace std;
#define out(x) cout<<#x<<": "<<x<<endl
const double eps(1e-8);
const int maxn=5001000;
const long long maxint=-1u>>1;
const long long maxlong=maxint*maxint;
typedef long long lint;
int a[maxn],c[maxn];
int n,k;

void init()
{
    memset(c,0,sizeof(c));
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
}

void work()
{
    int num=0;
    for (int i=0; i<=maxn-1; i++)
    {
        num+=c[i];
        if (num>=k)
        {
            printf("%d\n",i);
            break;
        }
    }
}

int main()
{
    while(~scanf("%d%d",&n,&k))
    {
        init();
        work();
    }
    return 0;
}
