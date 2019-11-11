#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,a,b; 
struct qwq
{
	int l,r;
	int aclt,ans;
	qwq()
	{
		l=0,r=0,aclt=0,ans=0;
	}
}mst[1010];
bool cmp(qwq x,qwq y)
{
	if(x.l==y.l) return x.r>y.r;
	return x.l<y.l;
}
int main()
{
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	for(int i=1;i<=n;++i)
		scanf("%d%d",&mst[i].l,&mst[i].r);
	sort(mst+1,mst+1+n,cmp);
	mst[0].aclt=1;
	for(int i=1;i<=n;++i)
	{
		mst[i].aclt=mst[i-1].aclt*mst[i-1].l;
		mst[i].ans=mst[i].aclt/b;
	}
	printf("%d",mst[n].ans);
	return 0;
 } 
