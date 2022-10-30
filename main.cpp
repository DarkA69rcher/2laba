#include <iostream>
#include <string>
#include "Payment.h"
using namespace std;
int main() {
    Payment payment = Payment("alex", 100, 2003, 10, 20, 20);
    cout << payment.vichislenie_nach_summ() << endl;
    cout << payment.vichislenie_yder_summ() << endl;
    cout << payment.zp() << endl;
    cout << payment.stag(2021) << endl;
    return 0;
}
