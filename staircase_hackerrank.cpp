#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int line=0; line<n; line++){
        for(int j=0; j<((n-1)-line); j++){
            cout << " ";
        }
        int j=(n-1)-line;
        for(int i=0; i+j<n; i++){
            cout << "#";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
