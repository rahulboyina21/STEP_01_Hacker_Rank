URL : https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true

// CODE

string angryProfessor(int k, vector<int> a) {
    sort(a.begin(),a.end(),greater<int>());
    int ctr=0;
    for(int &x:a){if(x<=0){ctr++;}if(ctr>=k){return "NO";}}
    return "YES";
}