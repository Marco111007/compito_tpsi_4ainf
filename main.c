#include <stdio.h>
#include"tracer.h"
#include"pow.h"
#include"math.h"
#define buf 10
#include"logger.h"
int operando1_[buf]={0};
int operando2_[buf]={0};
int risultato_[buf]={0};
int operazione[buf]={\0};

int main(){
    #ifdef debug
    trace();
    #endif
    int i,u,n1,n1,somma,differenza,moltiplicazione,divisione;
    printf("+somma\n-differenza\n\n*moltiplicazione\n/divisione\n^potenza\n#logger\n! esci");
    scanf("%d",& u);
    switch(u){
        case +:
        int somma(int n1,int n2);
        printf("il risultato e' %d");
        break;
        case -:
        int differenza(int n1,int n2);
        printf("il risultato e' %d");
        break;
        case *:
        int moltiplicazione(int n1,int n2);
        printf("il risultato e' %d");
        break;
        case /:
        int divisione(int n1,int n2);
        printf("il risultato e' %d");
        break;
        case #:
        int logger(int n1,int n2);
        printf("il risultato e' %d");
        break;
        case ^:
        int potenza(int n1,int n2);
        printf("il risultato e' %d");
        break;

    }
}