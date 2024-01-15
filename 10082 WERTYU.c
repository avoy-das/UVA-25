#include <stdio.h>
int main()
{
    char t;
    while (scanf("%c",&t)!=EOF)
    {
    if ( t =='W') { printf("Q"); }
    if ( t =='E') { printf("W"); }
    if ( t =='R') { printf("E"); }
    if ( t =='T') { printf("R"); }
    if ( t =='Y') { printf("T"); }
    if ( t =='U') { printf("Y"); }
    if ( t =='I') { printf("U"); }
    if ( t =='O') { printf("I"); }
    if ( t =='P') { printf("O"); }
    if ( t =='S') { printf("A"); }
    if ( t =='D') { printf("S"); }
    if ( t =='F') { printf("D"); }
    if ( t =='G') { printf("F"); }
    if ( t =='H') { printf("G"); }
    if ( t =='J') { printf("H"); }
    if ( t =='K') { printf("J"); }
    if ( t =='L') { printf("K"); }
    if ( t =='X') { printf("Z"); }
    if ( t =='C') { printf("X"); }
    if ( t =='V') { printf("C"); }
    if ( t =='B') { printf("V"); }
    if ( t =='N') { printf("B"); }
    if ( t =='M') { printf("N"); }
    if ( t =='[') { printf("P"); }
    if ( t ==']') { printf("["); }
    if ( t ==';') { printf("L"); }
    if ( t ==',') { printf("M"); }
    if ( t ==' ') { printf(" "); }
    if ( t =='/') { printf("."); }
    if ( t =='1') { printf("`"); }
    if ( t =='2') { printf("1"); }
    if ( t =='3') { printf("2"); }
    if ( t =='4') { printf("3"); }
    if ( t =='5') { printf("4"); }
    if ( t =='6') { printf("5"); }
    if ( t =='7') { printf("6"); }
    if ( t =='8') { printf("7"); }
    if ( t =='9') { printf("8"); }
    if ( t =='0') { printf("9"); }
    if ( t =='-') { printf("0"); }
    if ( t =='=') { printf("-"); }
    if ( t =='\\') { printf("]");}
    if ( t =='\'') { printf(";"); }
    if ( t =='\n') { printf("\n"); }
    if ( t =='.') { printf(","); }
    }
    return 0;
}

