URL : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

// CODE

int divisibleSumPairs(int n, int k, vector<int> ar) {
int ctr=0;
for(int i=0;i<ar.size();++i)
{
    for(int j=i+1;j<ar.size();++j)
    {
        if((ar[i]+ar[j])%k==0) ctr++;
    }
}
    return ctr;
}