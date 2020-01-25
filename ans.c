int minimum_pages(int n,int p)
{int ans=0;
int x=p-1;
int y=n-p;
if(x>y)
{ans=y;
}
else{ans=x;}
return ans;
}