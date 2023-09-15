/*

	URL : https://www.hackerrank.com/challenges/correctness-invariant/problem

*/

// CODE


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(vector<int> &arr,int size)
{
    // Algorithm 
    
    // 01. Inital iteration will go from left to right with assumption the element in the zeroTH index is already sorted.
    
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        // the current value of the loop iterating upon.
        
        // 02. Now we have to iterate to the left validating the current key.
        
        int j=i-1;
        // Starting point of the loop to be traversed.
        
        while(j>=0&&key<arr[j])
        {
            //We will be creating the pocket by moving the element greater than key to the right side of the container.
            
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int size_of_the_vector;
    
    cin >>size_of_the_vector;
    
    // Create a vector of type int with the above size.
    
    vector<int>arr(size_of_the_vector);
    
    // take the input of the elements into the vector.
    
    for(int i=0;i<size_of_the_vector;++i)
    {
        // The value should be stored into the vector (ARR).
        cin>>arr[i];
    }
    
    
    // Passing the values to the external function of the insertion sort.
    insertion_sort(arr,size_of_the_vector);
    
    //Print the values
    
    for(int &i:arr){cout<<i<<" ";}
    
    return 0;
}

