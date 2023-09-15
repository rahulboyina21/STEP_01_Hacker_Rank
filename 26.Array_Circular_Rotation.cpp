URL : https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true

// Code : 

void rotate(vector<int> &a,int st,int sp)
{
    while(st<sp)
    {
        int temp=a[st];
        a[st]=a[sp];
        a[sp]=temp;
        ++st;
        --sp;
    }
}

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) 
{
    int a_len = a.size();
    if(k>a_len){k=k%a_len;}
    // I missed out this logic initally as when the roatation requested is more than array size then
    // What needed to be done ?
    // Example if the array of size 5 is told to rotate 6 times 
    // for k=6 after the 5th rotation which is the size of the array then it would be considered 
    // Just only one right shift 
    // another example : size 5 rotate k=26 then what would be the optimal value of K.
    // we can write 26 as (5*5) + 1 -> (5*5) will give the actual array hitting 5 times
    // so to simplify it we can discard the number which is divisible by size and then consider just
    // the Remainder.so new_k=k%size => 26%5 => 1

    rotate(a,0,a_len-1-k);
    rotate(a,a_len-k,a_len-1);
    rotate(a,0,a_len-1);
    
    vector<int> ans(queries.size());
    for(int i=0;i<queries.size();++i)
    {
        ans[i]=a[queries[i]];
    }
    
    return ans;
}
