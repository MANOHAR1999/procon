main(i,r){char c;for(r=0;;){scanf("%s",&c);if(c=='#')break;if(c=='0'){printf("%d\n",r);r=0;continue;}scanf("%s%d %c",&c,&i,&c);r+=c=='F'?i*2:c=='B'?i+(i+1)/2:i<500?500:i;}}