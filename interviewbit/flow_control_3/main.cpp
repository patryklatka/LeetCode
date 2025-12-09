#include<iostream>

using namespace std;

int main()  {
    int x, y;
    cin>>x>>y;
    // YOUR CODE GOES HERE
    string s = (x <= y) ? "Robin" : "Rahul";
    cout << s << endl;
    return 0;
}