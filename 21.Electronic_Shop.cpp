URL : https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true

// CODE

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
     sort(keyboards.begin(),keyboards.end(),greater<int>());
     sort(drives.begin(),drives.end(),greater<int>());
     int max_spend=-1;
     bool flag=false;
     for(int i=0;i<keyboards.size();++i)
     {
         if(keyboards[i]>=b) continue;
         for(int j=0;j<drives.size();++j)
         {
             int sum=keyboards[i]+drives[j];
             if(sum<=b && sum>max_spend)
             {max_spend=sum; break;flag=true;}
         }
         if(flag){break;}
     }
    return max_spend;
}