#include <stdio.h>
#include <math.h>

void wczytywanie_danych(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2) {// pierwsze równanie w postaci: a1x + b1y = c1
    printf("podaj a1: ");
    scanf(" %lf", a1);
    printf("podaj b1: ");
    scanf(" %lf", b1);
    printf("podaj c1: ");
    scanf(" %lf", c1);
    // \ndrugie równanie w postaci: a2x + b2y = c2
    printf("podaj a2: ");
    scanf(" %lf", a2);
    printf("podaj b2: ");
    scanf(" %lf", b2);
    printf("podaj c2: ");
    scanf(" %lf", c2);
}
int main() {
    double a1, a2, b1, b2, c1, c2, x, y, w, wx, wy;

   wczytywanie_danych(&a1, &a2, &b1, &b2, &c1, &c2);

    w =  a1 * b2 - b1 * a2;
    wx = c1 * b2 - b1 * c2;
    wy = a1 * c2 - c1 * a2;

    if ((w==0) && (wy==0) && (wx==0))
    {
        printf("\nukład nieoznaczony");
            }
            if ((w==0) && (wy!=0) && (wx!=0))
            {
                printf("\nukład sprzeczny");
            }
if (w!=0)
{
    x=(wx/w);
    y=(wy/w);
    printf("\nukład oznaczony\nx= %lf\n", x);
    printf("y = %lf", y);
}

    return 0;
}