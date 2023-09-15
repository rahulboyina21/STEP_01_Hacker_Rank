URL : https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true

//CODE

 vector<int> permutationEquation(vector<int> p) {
    
    vector<int> list(p.size()+1);
    vector<int> ans(p.size());
    
    for(int i=1;i<list.size();++i)
    {
        list[p[i-1]]=i;
    }
    for(int i=0;i<ans.size();++i)
    {
        ans[i]=list[list[i+1]];
    }
    
    return ans;
}
