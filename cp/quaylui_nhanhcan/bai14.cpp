#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n, S, a[100];
int X[100]; //X[0], X[1], //

void nhap(){
    cin >> n >> S;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
}

vector<vector<int>> res;

void Try(int i, int sum, int start){
    //tim gia tri de gan cho X[i]
    for(int pos = start; pos < n; pos++){
        X[i] = a[pos];
        sum += a[pos];
        if(sum == S){
            vector<int> tmp(X + 1, X + i + 1);
            res.push_back(tmp);
        }
        else if(sum < S){
            Try(i + 1, sum, pos);
        }
        //backtrack
        sum -= a[pos];
    }
}

int main(){
    nhap();
    Try(1, 0, 0);
    if(res.size() == 0){
        cout << "-1\n";
    }
    else{
        cout << res.size() << endl;
        for(vector<int> it : res){
            cout << "{";
            for(int i = 0; i < it.size(); i++){
                cout << it[i];
                if(i != it.size() - 1) cout << " ";
                else cout << "}\n";
            }
        }
    }
}

// Cho mảng A[] gồm N số nguyên dương phân biệt và số X. Nhiệm vụ của bạn là tìm phép tổ hợp các số trong mảng A[] có tổng bằng X. Các số trong mảng A[] có thể được sử dụng nhiều lần. Mỗi tổ hợp các số của mảng A[] được in ra theo thứ tự không giảm các số. Ví dụ với A[] = {2, 4, 6, 8}, X = 8 ta có các tổ hợp các số như sau: {2, 2, 2, 2}, {2, 2, 4}, {2, 6}, {4, 4}, {8}.

// Input Format

// Dòng thứ nhất là hai số N và X; dòng tiếp theo đưa vào N số của mmảng A[]; các số được viết cách nhau một vài khoảng trống

// Constraints

// 1<=N<=20; 1<=X,A[i]<=100;

// Output Format

// In ra số tổ hợp thỏa mãn sau đó in ra các tổ hợp thỏa mãn trên từng dòng. Xem output để rõ hơn cách in. Trong trường hợp không có tổ hợp thỏa mãn thì in ra -1.

// Sample Input 0

// 3 10
// 4 2 3 
// Sample Output 0

// 5
// {2 2 2 2 2}
// {2 2 2 4}
// {2 2 3 3}
// {2 4 4}
// {3 3 4}