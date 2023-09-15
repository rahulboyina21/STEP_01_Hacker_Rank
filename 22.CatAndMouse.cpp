URL : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=true

// Code :

string catAndMouse(int x, int y, int z) {
if(x==y || abs(x-z)==abs(y-z)) return "Mouse C";
else if(abs(x-z)<abs(y-z)) return "Cat A";
else return "Cat B";

}