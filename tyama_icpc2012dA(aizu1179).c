main(y,m,d){for(scanf("%d",&y);~scanf("%d%d%d",&y,&m,&d);printf("%d\n",196471-(--y)*195-y/3*5-(--m)*20+(y%3-2?m/2:0)-d));exit(0);}