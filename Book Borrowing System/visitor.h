#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define nil NULL
#define infoVs(P) (P)->infoVs
#define nextVs(P) (P)->nextVs
#define prevVs(P) (P)->prevVs
#define first(LV) (LV).first

struct infotype{
    string student_id;
    string name;
    string phone;
    string majors;
};

typedef struct elmVs *addrVs;

struct elmVs{
    infotype infoVs;
    addrVs nextVs;
    addrVs prevVs;
};

struct ListVs{
    addrVs first;
};

void CreateListVs(ListVs &LV);
addrVs alokasiVs(infotype x);
addrVs getDataVs(ListVs LV, string student_id);
void dealokasiVs(addrVs &P);
void insertFirstVs(ListVs &LV, addrVs P);
addrVs findElmVsID(ListVs LV, string student_id);
void deleteFirstVs(ListVs &LV, addrVs &P);
void deleteLastVs(ListVs &LV, addrVs &P);
void deleteAfterVs(ListVs &LV, addrVs Prec, addrVs &P);
void RegisterVs(ListVs &LV, string student_id, addrVs &P);
void printListVs(ListVs LV);
int countVs(ListVs LV);
void EditVsName(ListVs &LV, addrVs P);
void EditVsPhone(ListVs &LV, addrVs P);
void EditVs(ListVs &LV);
void sortingVsAscending(ListVs &LV);
void sortingVsDescending(ListVs &LV);

#endif // VISITOR_H_INCLUDED
