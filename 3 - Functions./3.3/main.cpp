#include <iostream>
#include <cmath>

using namespace std;

int root(double n, double precision, double max_no_it){
    float dif, rq = 1, rqn;
    int i=1;
    dif = n;
    while (i<max_no_it && precision<dif) {
        rqn = (float)((float)rq + n / rq) / 2;
        dif = sqrt(pow(n - pow(rqn, 2),2));
        i++;
        rq = rqn;
    }
    return rqn;
}
int main(){
    cout << root(2,1.2,5);
}