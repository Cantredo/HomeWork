/*************************************************************************
	> File Name: 198.cpp
	> Author: Cantredo
	> Mail: aimingco@gmail.com
	> Created Time: 2019年07月31日 星期三 13时51分39秒
 ************************************************************************/

using namespace std;

const int MOD = 1e9 + 7 ;

int main(){
    int n ;
    cin >> n ;
    long long f[100005] ; 
    f[1] = f[2] = 1 ;
    for (int i = 3 ; i <= n ; i ++){
        f[i] = (f[i - 1] % MOD + f[i - 2] % MOD) % MOD ;
    }
    cout << f[n] << endl ;
    return 0 ;
}
