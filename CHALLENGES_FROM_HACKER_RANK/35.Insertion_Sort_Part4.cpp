/*

URL : https://www.hackerrank.com/challenges/runningtime/problem

*/

// CODE


int runningTime(vector<int> arr) {

// The approach will be same as like the insertion sort but there is a catch when ever there is an shift in the number towards the right we need to take count of it and return the total count at the end.

// Algorithm

// 01. Traverse the Array from LEFT to RIGHT.

int size=arr.size(),shift_counter=0;

for(int i=1;i<size;++i)
{
// Considering the first element is already sorted and we will start our comparison from it.
int key = arr[i];  // the current element we are at.
int j=i-1; // Starting point for our comparision.

while(j>=0&&key<arr[j])
{
    arr[j+1]=arr[j];
    j--;
    shift_counter++;
}
// placing the key in the right position.
arr[j+1]=key;
}
    return shift_counter;
}

