URL : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=true

// Course

int designerPdfViewer(vector<int> h, string word) {
    int len=word.length(),max=-1;
    for(char &x:word)
    {
        int temp=h[int(x)-97];
        if(temp>max){max=temp;}
    }
    return max*len;
}
