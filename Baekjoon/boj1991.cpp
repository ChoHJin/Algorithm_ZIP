// #include <iostream>
// #include <vector>

// using namespace std;

// int n;
// pair<char, char> tree[26];

// void preOrder(char root) {
//     if(root == '.') {
//         return;
//     }

//     cout << root;
//     preOrder(tree[root - 'A'].first);
//     preOrder(tree[root - 'A'].second);
// }

// void inOrder(char root) {
//     if(root == '.') {
//         return;
//     }
//     inOrder(tree[root - 'A'].first);
//     cout << root;
//     inOrder(tree[root - 'A'].second);
// }

// void postOrder(char root) {
//     if(root == '.') {
//         return;
//     }
//     postOrder(tree[root - 'A'].first);
//     postOrder(tree[root - 'A'].second);
//     cout << root;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         char parent, left, right;
//         cin >> parent >> left >> right;

//         tree[parent - 'A'].first = left;
//         tree[parent - 'A'].second = right;
//     }

//     preOrder('A');
//     cout << endl;

//     inOrder('A'); 
//     cout << endl;

//     postOrder('A');
//     cout << endl;
    

//     return 0;
// }