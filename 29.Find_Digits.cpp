URL : https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true

//CODE

int findDigits(int n) {
int ctr=0,temp=n;

while(temp>0)
{
    int div=temp%10;
    if(div!=0&&n%div==0){ctr++;}
    temp/=10;
}
return ctr;
}