/*

URL : https://www.hackerrank.com/challenges/insertionsort1/problem

*/

// CODE :


void display(vector<int> &arr)
{
    for(int &i:arr) cout<<i<<" ";
    cout<<"\n";
}
void insertionSort1(int n, vector<int> arr) {

// Let us try with while loop 

// Algorithm 


// 01. Find the size of the vector and the last element (Key).

int size=arr.size();
int key=arr[size-1];

// 02. Now traverse the Vector from last but one position.
int temp=size-2;
bool flag=true;
while(temp>=0)
{
// 03. In every itertation compare the Key with every element.
    if(key<arr[temp])
// 04. If the key is LESS than those elements create a pocket by moving those elements to the right.
    {
        arr[temp+1]=arr[temp];
        display(arr);
    }
// 05. If the Key is greater than the element we are comparing insert the key next to it i mean to the right side of it.
    else if(key>=arr[temp])
    {
        arr[temp+1]=key;
        flag=false;
        display(arr);
// FATAL MISTAKE MADE HAVEN'T TEMINATED THE LOOP
        break;
    }
    --temp;
}
// Findings

// -> Suppose we traversed till the first element and and all elements are greater than key then we will place the element in the first position as there isn't any element left to it to compare.
if(flag)
{
    arr[0]=key;
    display(arr);
}

/*



Possible Test cases:

01. Happy path -> when every thing in bound.

02. Edge Case 01 -> when there exist only one element -> just print it and return no need to get into the logic.

03. Edge Case 02 -> If there are two elements -> we will consider last element as Key and compare it with the n-1 if the element is Greater than key copy the element to right and paste the key there *** But the above logic doesn't faciliate this ***.


*/

}

