#include <bits/stdc++.h>

using namespace std;

template <typename T1, typename T2>
class Pair{
public:
    Pair(){}
    T1 first;
    T2 second;

    Pair(const Pair<T1,T2>& copied){
        first = copied.first;
        second = copied.second;
    }

    Pair <T1,T2> operator=(const Pair<T1,T2>& copied) {
        first = copied.first;
        second = copied.second;
        return (*this);
    }
};

template <typename T1, typename T2>
Pair <T1, T2> Make_pair(T1 f, T2 s){
    Pair <T1, T2> a;
    a.first = f;
    a.second = s;
    return a;
}

template <typename T>
void mySort(vector <T>& a) {
    for(int i = 0; i < a.size(); i ++){
        for(int j = 0; j < i; j ++){
            if(a[i]. first < a[j].first || (a[i]. first == a[j].first && a[i]. second < a[j].second)){
                T carry = a[i];
                a[i] = a[j];
                a[j] = carry;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int n = 10 + rand() % 10;
    vector<pair<int, double> > a(n);
    vector<Pair<int, double> > b(n);
    for (int i = 0; i < n; ++i) {
        a[i].first = rand() % 100;
        a[i].second = 0.5 + rand() % 100;
        b[i].first = a[i].first;
        b[i].second = a[i].second;
    }
    sort(a.begin(), a.end());
    mySort(b);
    for (int i = 0; i < n; ++i) {
        cout << a[i].first << " " << a[i].second << " " << b[i].first << " " << b[i].second << endl;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i].first != b[i].first) {
            cout << "a[" << i << "].first != b[" << i << "].first: " << a[i].first << " != " << b[i].first << endl;
        }
        if (a[i].second != b[i].second) {
            cout << "a[" << i << "].second != b[" << i << "].second: " << a[i].second << " != " << b[i].second << endl;
        }
    }
}
