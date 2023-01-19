#include <iostream>
#include <map>

using namespace std;

map<string, string, greater<>> m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string name;
    string access;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> name >> access;
        m[name] = access;
    }
    
    map<string, string>::iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        if(it->second == "enter"){
            cout << it->first << "\n";
        }
    }

    return 0;
}