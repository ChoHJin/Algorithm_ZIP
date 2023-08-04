// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> tmp;
// int n, k, cnt;
// int ans = -1;

// void merge(vector<int>& a, int p, int q, int r) {
//     int i = p;
//     int j = q + 1;
//     int t = 1;

//     while(i <= q && j <= r) {
//         if(a[i] <= a[j]) {
//             tmp[t++] = a[i++];
//         } else {
//             tmp[t++] = a[j++];
//         }
//     }

//     while(i <= q) {
//         tmp[t++] = a[i++];
//     }

//     while(j <= r) {
//         tmp[t++] = a[j++];
//     }

//     i = p;
//     t = 1;

//     while(i <= r) {
//         a[i++] = tmp[t++];
//         cnt++;

//         if(cnt == k) {
//             ans = a[i - 1];
//             break;
//         }
//     }
// }

// void mergeSort(vector<int>& a, int p, int r) {
//     if(p < r) {
//         int q = (p + r) / 2;
//         mergeSort(a, p, q);
//         mergeSort(a, q + 1, r);
//         merge(a, p , q, r);
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     cin >> n >> k;

//     vector<int> v(n + 1);
//     tmp.resize(n + 1);

//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     mergeSort(v, 0, n - 1);

//     cout << ans << endl;

//     return 0;
// }