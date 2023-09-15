/*
	URL : https://www.hackerrank.com/challenges/quicksort1/problem?isFullScreen=true
*/

// CODE 


vector<int> quickSort(vector<int> arr) {
vector<int> left,right,equal;

int size=arr.size();
int pivot_element=arr[0];
for(int i=0;i<size;++i)
{
    if(arr[i]<pivot_element){left.push_back(arr[i]);}
    else if(arr[i]>pivot_element){right.push_back(arr[i]);}
    else {
    equal.push_back(arr[i]);
    }
}
left.insert(left.end(),equal.begin(),equal.end());
left.insert(left.end(),right.begin(),right.end());

return left;
}

