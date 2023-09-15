URL : https://www.hackerrank.com/challenges/cut-the-sticks/problem?isFullScreen=true

//Code

vector<int> cutTheSticks(vector<int> arr) {
sort(arr.begin(),arr.end());
vector<int> ans;
bool flag=true;
while(flag)
{
    int min=0,ctr=0;
    bool toogle=true;
    for(int i=0;i<arr.size();++i)
    {
        if(arr[i]>0)ctr++;
        if(arr[i]>0&&toogle){toogle=false;min=arr[i];}
        arr[i]-=min;
    }
    if(ctr>0) ans.push_back(ctr);
    if(toogle) flag=false;
}
return ans;
}
