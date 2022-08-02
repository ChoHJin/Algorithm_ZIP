#include <iostream>

using namespace std;

int arr[10001];
int f = 0;  //front
int b = 0;  //back

void push(int x) {
    arr[b++] = x;
}

int pop() {
    if(f == b) return -1;
    
    int t = arr[f++];
    
    return t;
}

int Front() {
    if(f == b) {
        return -1;
    }

    return arr[f];
}

int Back() {
    if(f == b) {
        return -1;
    }

    return arr[b - 1];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(s == "push") {
            int n;
            cin >> n;
            push(n);
        }

        if(s == "pop") {
            cout << pop() << "\n";
        }

        if(s == "size") {
            cout << b - f << "\n";
        }

        if(s == "empty") {
            if(f == b) 
                cout << 1 << "\n";
            else 
                cout << 0 << "\n";
        }

        if(s == "front") {
           cout << Front() << "\n";
        }

        if(s == "back") {
            cout << Back() << "\n";
        }
    }
}