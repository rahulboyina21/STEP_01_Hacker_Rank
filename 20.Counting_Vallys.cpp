
URL : https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=true

// CODE : 
int countingValleys(int steps, string path) {
int ctr=0,ans=0;
// UDDDUDUU
// 10-1-2 -1 -2 -1 0
for(char &ch:path)
{
    if(ch=='U'){ctr++;}
    else if(ch=='D'){ctr--;} 
    if(ctr==0 && ch=='U'){ans++;}
    /* Actuall we are counting vally's so we can say the journey is complete once we reach the sea level 
     but if we go uphill and reach sea level it would be irelavent to current context of conditions. 
     So, we will be aiming for the steps leading from vally to sea level which indicate the step should 
     be U for reaching sea level not D. */
}
return ans;
}

