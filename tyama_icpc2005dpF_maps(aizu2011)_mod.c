#define L long long
m[31][50];main(n,p,d,x){L a[50],b;for(;scanf("%d",&n),n;){memset(m,0,6200);for(p=0;p<n;a[p]=(L)1<<p,p++)for(scanf("%d",&x);x;x--)scanf("%d",&d),m[d][p]=1;for(d=1;d<31;d++){for(b=p=0;p<n;p++)if(m[d][p])b|=a[p];for(p=0;p<n;p++)if(m[d][p]&&(a[p]=b)==((L)1<<n)-1){printf("%d\n",d);goto s;}}puts("-1");s:;}exit(0);}