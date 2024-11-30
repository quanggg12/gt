#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//N * N
int n, X[100], cnt = 0, res = 0, tong = 0;
int cot[100], cheo1[100], cheo2[100], a[100][100];

void Try(int i){
    //Lua chon cot de dat con hau o hang thu i
    for(int j = 1; j <= n; j++){
        //X[i] = j
        if(cot[j] == 0 && cheo1[i - j + n] == 0 && cheo2[i + j - 1] == 0){
            X[i] = j;
            cot[j] = 1;
            cheo1[i - j + n] = 1;
            cheo2[i + j - 1] = 1;
            if(i == n){
                int sum = 0;
                for(int i = 1; i <= n; i++){
                    sum += a[i][X[i]];
                }
                res = max(res, sum);
            }
            else{
                Try(i + 1);
            }
            //backtrack
            cot[j] = 0;
            cheo1[i - j + n] = 0;
            cheo2[i + j - 1] = 0;
        }
    }
}


int main(){
    n = 8;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    Try(1);
    cout << res << endl;
}


// Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó. Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

// Input Format

// Gồm 8 dòng, mỗi dòng gồm 8 số tương ứng với các số trên bàn cờ.

// Constraints

// 1<=A[i][j]<=100;

// Output Format

// In ra số điểm đạt được lớn nhất.

// Sample Input 0

// 12 29 80 91 56 46 97 13 
// 54 88 27 84 85 9 32 77 
// 48 80 88 74 30 77 38 98 
// 6 82 20 95 7 86 12 43 
// 100 82 15 7 95 9 5 84 
// 51 40 65 98 86 38 30 63 
// 96 78 98 76 33 11 2 58 
// 33 51 35 68 62 87 67 39 
// Sample Output 0

// 653