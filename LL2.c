#include <stdio.h>
#include <math.h>

int main() {
    //Probleme pentru instrucțiuni de ramificare
    // Ex.1 Scrieți un program C pentru a găsi maxim între două numere.
    double a1, b1;
    printf("Introduceți două numere: \n");
    scanf("%lf %lf", &a1, &b1);
    if (a1 > b1) {
        printf("Nr. maxim este: %.0lf\n", a1);
    } else if (a1 < b1) {
        printf("Nr. maxim este: %.0lf\n", b1);
    } else {
        printf("Cele două numere sunt egale\n");
    }

    printf("\n");
    // Ex.2 Scrieți un program C pentru a găsi maxim între trei numere.
    double a2, b2, c2;
    printf("Introduceți trei numere: \n");
    scanf("%lf %lf %lf", &a2, &b2, &c2);
    if ( (a2 >= b2 && a2 > c2) || (a2 > b2 && a2 >= c2) ) {
        printf("Nr. maxim este: %.0lf\n", a2);
    } else if ( (b2 >= a2 && b2 > c2) || (b2 > a2 && b2 >= c2) ) {
        printf("Nr. maxim este: %.0lf\n", b2);
    } else if ( (c2 >= a2 && c2 > b2) || (c2 > a2 && c2 >= b2) ) {
        printf("Nr. maxim este: %.0lf\n", c2);
    } else {
        printf("Toate numerele sunt egale\n");
    }

    printf("\n");
    // Ex.3 Scrieți un program C pentru a verifica dacă un număr este negativ, pozitiv sau zero.
    double a3;
    printf("Introduceți un număr: \n");
    scanf("%lf", &a3);
    if (a3 > 0) {
        printf("Numărul este pozitiv\n");
    } else if (a3 < 0) {
        printf("Numărul este negativ\n");
    } else {
        printf("Numărul este 0\n");
    }    

    printf("\n");
    // Ex.4 Scrieți un program C pentru a verifica dacă un număr este divizibil cu 5 și 11 sau nu.  
    int a4;
    printf("Introduceți un număr întreg: \n");
    scanf("%d", &a4);
    if (a4 % 5 == 0 && a4 % 11 == 0) {
        printf("Numărul este divizibil cu 5 și 11\n");
    } else {
        printf("Numărul nu este divizibil cu 5 și 11\n");
    }       
    
    printf("\n");
    // Ex.5 Scrieți un program C pentru a verifica dacă un număr este par sau impar.
    int a5;
    printf("Introduceți un număr întreg: \n");  
    scanf("%d", &a5);
    if (a5 % 2 == 0) {
        printf("Numărul este par\n");
    } else {
        printf("Numărul este impar\n");
    }

    printf("\n");
    // Ex.6 Scrieți un program C pentru a verifica dacă un an este an bisect sau nu.
    int an;
    printf("Introduceți un an: \n");
    scanf("%d", &an);
    if ( (an % 4 == 0 && an % 100 != 0) || (an % 400 == 0) ) {
        printf("Anul este bisect\n");
    } else {
        printf("Anul nu este bisect\n");
    }

    printf("\n");
    // Ex.7 Scrieți un program C pentru a verifica dacă un caracter este alfabet sau nu.
    char ch;
    printf("Introduceți un caracter: \n");
    scanf(" %c", &ch);
    if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {
        printf("Caracterul este în alfabet\n");
    } else {
        printf("Caracterul nu este în alfabet\n");
    }

    printf("\n");
    // Ex.8 Scrieți un program C pentru a verifica dacă un caracter este vocală sau consoană.
    char ch2;
    printf("Introduceți un caracter din alfabet: \n");
    scanf(" %c", &ch2);
    if ( ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u' ||
         ch2 == 'A' || ch2 == 'E' || ch2 == 'I' || ch2 == 'O' || ch2 == 'U' ) {
        printf("Caracterul este vocală\n");
    } else {
        printf("Caracterul este consoană\n");
    }

    printf("\n");
    // Ex.9 Scrieți un program C pentru a introduce orice caracter și verificați dacă este alfabet, cifră sau caracter special. 
    char ch3;
    printf("Introduceți un caracter: \n");
    scanf(" %c", &ch3);
    if ( (ch3 >= 'a' && ch3 <= 'z') || (ch3 >= 'A' && ch3 <= 'Z') ) {
        printf("Caracterul este în alfabet\n");
    } else if (ch3 >= '0' && ch3 <= '9') {
        printf("Caracterul este cifră\n");
    } else {
        printf("Caracterul este caracter special\n");
    }

    printf("\n");
    // Ex.10 Scrieți un program C pentru a verifica dacă un caracter introdus este cu majusculă sau minusculă.
    char ch4;
    printf("Introduceți un caracter din alfabet: \n");
    scanf(" %c", &ch4);
    if (ch4 >= 'a' && ch4 <= 'z') {
        printf("Caracterul este cu minusculă\n");
    } else if (ch4 >= 'A' && ch4 <= 'Z') {
        printf("Caracterul este cu majusculă\n");
    } else {
        printf("Caracterul nu este în alfabet\n");
    }

    printf("\n");
    // Ex.11 Scrieți un program C pentru a introduce numărul unei zile de săptămânii și a imprima ziua săptămânii. 
    int zi;
    printf("Introduceți un număr de la 1 la 7: \n");
    scanf("%d", &zi);
    if (zi == 1) {
        printf("Luni\n");
    } else if (zi == 2) {
        printf("Marți\n");
    } else if (zi == 3) {
        printf("Miercuri\n");
    } else if (zi == 4) {
        printf("Joi\n");
    } else if (zi == 5) {
        printf("Vineri\n");
    } else if (zi == 6) {
        printf("Sâmbătă\n");
    } else {
        printf("Duminică\n");
    }

    printf("\n");
    // Ex.12 Scrieți un program C pentru a introduce numărul lunii și a imprima numărul de zile din luna respectivă.
    int l;
    printf("Introduceți un număr de la 1 la 12: \n");
    scanf("%d", &l);
    if (l == 1 || l == 3 || l == 5 || l == 7 || l == 8 || l == 10 || l == 12) {
        printf("Luna are 31 de zile\n");
    } else if (l == 4 || l == 6 || l == 9 || l == 11) {
        printf("Luna are 30 de zile\n");
    } else if (l == 2) {
        printf("Luna are 28 sau 29 de zile\n");
    } else {
        printf("Număr invalid\n");
    }

    printf("\n");
    // Ex.13 Scrieți un program C pentru a număra numărul total de note într-o anumită cantitate.
    int note[10];
    printf("Introduceți un șir de note (10 note): \n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &note[i]);
    }
    int nota10 = 0, nota9 = 0, nota8 = 0, nota7 = 0, nota6 = 0, nota5 = 0, nota4 = 0, nota3 = 0, nota2 = 0, nota1 = 0;
    for(int i = 0; i < 10; i++) {
        if(note[i] == 10) nota10++;
        else if(note[i] == 9) nota9++;
        else if(note[i] == 8) nota8++;
        else if(note[i] == 7) nota7++;
        else if(note[i] == 6) nota6++;
        else if(note[i] == 5) nota5++;
        else if(note[i] == 4) nota4++;
        else if(note[i] == 3) nota3++;
        else if(note[i] == 2) nota2++;
        else if(note[i] == 1) nota1++;
    }
    printf("\n");
    printf("Note de 10: %d\n", nota10);
    printf("Note de 9: %d\n", nota9);
    printf("Note de 8: %d\n", nota8);
    printf("Note de 7: %d\n", nota7);
    printf("Note de 6: %d\n", nota6);
    printf("Note de 5: %d\n", nota5);
    printf("Note de 4: %d\n", nota4);
    printf("Note de 3: %d\n", nota3);
    printf("Note de 2: %d\n", nota2);
    printf("Note de 1: %d\n", nota1);


    printf("\n");
    // Ex.14 Scrieți un program C pentru a introduce unghiurile unui triunghi și verificați dacă triunghiul este valid sau nu.
    int a6, b6, c6;
    printf("Introduceți unghiurile unui triunghi (în grade): \n");
    scanf("%d %d %d", &a6, &b6, &c6);
    if (a6 + b6 + c6 == 180 && a6 > 0 && b6 > 0 && c6 > 0) {
        printf("Triunghiul este valid\n");
    } else {
        printf("Triunghiul nu este valid\n");
    }

    printf("\n");
    // Ex.15 Scrieți un program C pentru a introduce toate laturile unui triunghi și verificați dacă triunghiul este valid sau nu. 
    double x, y, z;
    printf("Introduceți laturile unui triunghi: \n");
    scanf("%lf %lf %lf", &x, &y, &z);
    if ( (x + y > z) && (x + z > y) && (y + z > x) ) {
        printf("Triunghiul este valid\n");
    } else {
        printf("Triunghiul nu este valid\n");
    }

    printf("\n");
    // Ex.16 Scrieți un program C pentru a verifica dacă triunghiul este echilateral, isoscel sau triunghi scalen.
    double p, q, r;
    printf("Introduceți laturile unui triunghi: \n");
    scanf("%lf %lf %lf", &p, &q, &r);
    if (p == q && q == r) {
        printf("Triunghiul este echilateral\n");
    } else if (p == q || q == r || p == r) {
        printf("Triunghiul este isoscel\n");
    } else {
        printf("Triunghiul este scalen\n");
    }

    // Ex.17 Scrieți un program C pentru a găsi toate rădăcinile unei ecuații pătratice.
    float a, b, c, D, x1, x2;
    printf("\nIntroduceți coeficienții unei ecuații pătratice (a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("Ecuația are două rădăcini: x1 = %.0f, x2 = %.0f\n", x1, x2);
    } else if (D == 0) {
        x1 = x2 = -b / (2*a);
        printf("Ecuația are o rădăcină dublă: x = %.0f\n", x1);
    } else {
        printf("Ecuația nu are rădăcini\n");
    }

    return 0;
}