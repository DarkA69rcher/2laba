//
// Created by dark6 on 25.10.2021.
//
#include <string>
using namespace std;
#ifndef INC_2LABA_PAYMENT_H
#define INC_2LABA_PAYMENT_H


class Payment {
private:
    string fio;
    int oklad;
    double year;
    double nadbavka;
    double nalog=0.13;
    int kol_otr_dnei_;
    int kol_dnei_mes;
    double nachis;
    double yder;
public:
    Payment(string fio_,int oklad_,double year_,double nadbavka_,int kol_otr_dnei,int kol_dnei_mes_){
        fio=fio_;
        oklad=oklad_;
        year=year_;
        nadbavka=nadbavka_;
        kol_otr_dnei_=kol_otr_dnei;
        kol_dnei_mes=kol_dnei_mes_;
    }
    double vichislenie_nach_summ();
    double vichislenie_yder_summ();
    double zp();
    int stag(int year_now);
};


#endif //INC_2LABA_PAYMENT_H
