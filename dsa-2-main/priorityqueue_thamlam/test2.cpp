#include <bits/stdc++.h>
#define ll long long

using namespace std;

template <class T, class K = greater<T>>
struct PQ{
    T *buf;
    int n, cap; // n - size, cap = capacity
    K cmp;
    PQ(){
        n = cap = 0;
        buf = NULL;
    }
    ~PQ(){
        if(buf) delete []buf;

    }
    int size(){
            return n;
        }
    bool empty(){
       return n == 0;
    }
    T top(){
        return buf[0];
    }

    void heapify_down(int k){
        if(2 * k + 1 > n) return;
        int p = 2 * k + 1;
        if(p + 1 < n && cmp(buf[p], buf[p + 1])) p++;
        if(cmp(buf[k], buf[p])){
            swap(buf[k], buf[p]);
            heapify_down(p);
        }

    }

    void pop(){
        buf[0] = buf[n--];
        heapify_down(0);
    }

    void push(T x){
        if(n == cap){
            T *tem = buf;
            cap = cap *2 + 1;
            buf = new T[cap];
            for(int i = 0; i < n; i++){
                buf[i] = tem[i];
                if(tem) delete tem[];
            }
        }
        buf[n++] = x;
        int k = n - 1;
        while(k > 0 && cmp(buf[k], buf[(k - 1)/2])){
            swap(buf[k], buf[(k - 1)/ 2]);
            k = (k - 1) /2;
        }
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    PQ<int> Q;
    int a[] = {},n = sizeof(a)/sizeof(int);
    for(int x : a) Q.push(x);

    while(Q.size()){
        cout << Q.top() << " ";
        Q.pop();
    }
    return 0;
}