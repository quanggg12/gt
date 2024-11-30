#include <bits/stdc++.h>
#define ll long long

using namespace std;
//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố

int check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n], sum = 0;
    for(int &x : a) {
        cin >> x;
        sum += x;
    }
    int sum_left = 0, sum_right = 0;
    for(int i = 0; i < n - 1; i++){
        sum_left += a[i - 1];
        sum_right = sum - sum_left - a[i];
        if(check(sum_left) && check(sum_right)) cout << i << " ";
    }
    return 0;
}