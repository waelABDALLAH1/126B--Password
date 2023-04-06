#include <iostream>
using namespace std ;
int nbd;
void read(){
    cin>>nbd;
    int x;
for (int j=0;j<nbd;j++){
     cin>>x;
    }
}

int fac(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}
int c(int n, int p)
{
    return fac(n)/(fac(p)*fac(n-p)) ;
}
int main (){
int t;
cin>>t;
while(t--){
    read();
    cout << c(10-nbd ,2)*6 <<endl ;

}
}

