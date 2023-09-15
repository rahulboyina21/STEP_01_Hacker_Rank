URL : https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true

// CODE 

int utopianTree(int n) {
    bool flag=true;
    int arr[60];
    int val=0;
    for(int i=0;i<60;i++)
    {
        if(flag){val+=1;arr[i]=val;flag=false;}  
        else{val*=2;arr[i]=val;flag=true;}  
    }
    return arr[n];
}