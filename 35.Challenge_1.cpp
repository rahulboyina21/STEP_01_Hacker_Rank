/*

URL : https://www.hackerrank.com/challenges/tutorial-intro/problem?isFullScreen=true

*/


// CODE:

int introTutorial(int V, vector<int> arr) {
int ctr=0;
for(int &i:arr){ if(i==V) {return ctr;} ++ctr;}

return -1;
}

