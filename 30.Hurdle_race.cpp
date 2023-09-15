URL :  https://www.hackerrank.com/challenges/the-hurdle-race/problem?isFullScreen=true

// CODE 

int hurdleRace(int k, vector<int> height) {
auto max = max_element(height.begin(), height.end());
if(*max<=k) return 0;
return (*max-k);
}
