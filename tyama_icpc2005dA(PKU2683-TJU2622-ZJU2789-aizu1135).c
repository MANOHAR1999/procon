main(N,R,M,m,y,n,t,c,i,d){float r;for(scanf("%d",&N);N--;printf("%d\n",R))for(scanf("%d%d%d",&M,&y,&n),R=M;n--;R=m>R?m:R)if(m=M,d=0,scanf("%d%f%d",&t,&r,&c),t)for(i=0;i<y;i++)m+=(int)(r*m)-c;else{for(i=0;i<y;i++)d+=(int)(r*m),m-=c;m+=d;}exit(0);}