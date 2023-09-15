/*
URL : https://www.hackerrank.com/challenges/insertionsort2/problem
*/

// CODE

void display(vector<int> &arr)
{
    for(int &i:arr){cout<<i<<" ";}
    cout<<"\n";
}
void insertionSort2(int n, vector<int> arr) {
/*

Constrainst and points to be noted 

01. We are validating the elementing by comparing it to the all the elements to it's left if it is Less than the elements to it's left it would be replaced or else it 
would continue to the next element.

02. If the element we are in is greater than the element to it's left it should remain the way it is.
*/


// Algorithm 

// 01. Iterate over all the container starting from left to right .
for(int i=1;i<arr.size();++i)
{
// 02. When an key element is selected it is validated against all the elements present to it's left.
// ex: 34678(1) -> 134678
     int key = arr[i];
     int j=i-1;
     while(j>=0)
     {
// // Here we are validating the element against the partially sorted list.
         if(arr[j]<=key){break;}
// 03. if the key is greater than the last element of the partially sorted list then it will be greater than all the elements present in the partially sorted list. 
// So we continue(break the loop).
         else if(arr[j]>key){arr[j+1]=arr[j];}

// 04. if the key is less than the partially sorted list then 
//     i. Make a copy of the Key in a variable.
//     ii. Move the each element to it's left to right once comparision is done if it found to be less than that element if we found an element which is less than our 
//	   key or our key is greater than any element in the partially sorted list then place our key next to that value.
//     iii. [EDGE_CASE] if we traverse till ZEROth Index and not found any value greater than the current key then placce the key on ZeroTH index only.
         --j;
     }
     arr[j+1]=key; 
    display(arr);   
}





}

