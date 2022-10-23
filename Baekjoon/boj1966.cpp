// #include <iostream>
// #include <queue>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;

//     cin >> t;

//     while(t--) {
//         int n, m;

//         cin >> n >> m;

//         queue<pair<int, int>> list;     //문서
//         priority_queue<int> iptList;    //우선 순위 큐를 사용하여 중요도 파악

//         int cnt = 0;    //인쇄 횟수

//         for(int i = 0; i < n; i++) {
//             int num;
//             cin >> num;

//             list.push(make_pair(i, num));
//             iptList.push(num);
//         }

//         while(!list.empty()) {
//             int idx = list.front().first;
//             int ipt = list.front().second;

//             if(iptList.top() > ipt) {   //중요도가 더 높은 문서가 있으면 맨뒤로 보냄
//                 list.push(list.front());
//                 list.pop();
//             }
//             else {
//                 list.pop();
//                 iptList.pop();
//                 cnt++;

//                 if(idx == m) {
//                     cout << cnt << endl;
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }