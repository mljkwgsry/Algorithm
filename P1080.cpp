#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,l,r,ans;
struct minister
{
	int L,R,mtp;	
}qwq[10010];
bool cmp(minister a,minister b)
{
	return a.mtp<b.mtp;
}
int main()

{
	scanf("%d",&n);
	scanf("%d%d",&l,&r);
	for(int i=1;i<=n;++i)
	{
		scanf("%d%d",&qwq[i].L,&qwq[i].R);
		qwq[i].mtp=qwq[i].L*qwq[i].R;
	}
	sort(qwq+1,qwq+1+n,cmp);
	ans=l;
	for(int i=1;i<n;++i) ans*=qwq[i].L;
	ans/=qwq[n].R;
	printf("%d",ans);
	return 0;
 } 
