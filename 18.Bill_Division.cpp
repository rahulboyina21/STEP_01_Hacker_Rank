// https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

// Actual Code

void bonAppetit(vector<int> bill, int k, int b) {
    int sum=0,expbill=0;
    for(int i=0;i<bill.size();++i){if(i==k) continue; else sum+=bill[i];}
    expbill=(sum/2);
    if(b==expbill) cout<<"Bon Appetit";
    else cout<<b-expbill;
}