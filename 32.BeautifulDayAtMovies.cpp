URL : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true

// CODE 

int reverse(int i)
{
    int n=i,ans=0;
    
    while(n>0)
    {
        int rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    return ans;
}
int beautifulDays(int i, int j, int k) {
    int ctr=0;
    for(;i<=j;++i)
    {
        int rev=reverse(i);
        int diff=abs(i-rev);
        if(diff%k==0){ctr++;}
    }
    return ctr;
}
