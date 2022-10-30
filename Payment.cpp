//
// Created by dark6 on 25.10.2021.
//
#include <iostream>
#include <string>
#include "Payment.h"
using namespace std;
#include "Payment.h"
double Payment::vichislenie_nach_summ(){
    nachis=((oklad/kol_dnei_mes)*kol_otr_dnei_)+(((oklad/kol_dnei_mes)*kol_otr_dnei_)*nadbavka/100);
    return nachis;
};
double Payment::vichislenie_yder_summ(){
    yder=nachis*nalog+nachis*0.01;
    return yder;
};
double Payment::zp(){
    return nachis-yder;
};
int Payment::stag(int year_now) {
    return year_now-year;
}