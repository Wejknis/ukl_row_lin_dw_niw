#include <stdio.h>
#include <math.h>

int main() {
    float a1, a2, b1, b2, c1, c2, x, y, w, wx, wy;

// pierwsze równanie w postaci: a1x + b1y = c1
    printf("podaj współczynnik a1 równania a1x + b1y = a1: ");
    scanf("%f", &a1);
    printf("podaj współczynnik b1 równania a1x + b1y = b1: ");
    scanf("%f", &b1);
    printf("podaj współczynnik c1 równania a1x + b1y = c1: ");
    scanf("%f", &c1);
    // \ndrugie równanie w postaci: a2x + b2y = c2
    printf("podaj współczynnik a2 równania a2x + b2y = a2: ");
    scanf("%f", &a2);
    printf("podaj współczynnik b2 równania a2x + b2y = b2: ");
    scanf("%f", &b2);
    printf("podaj współczynnik c2 równania a2x + b2y = b2: ");
    scanf("%f", &c2);

    w =  a1 * b2 - b1 * a2;
    wx = c1 * b2 - b1 * c2;
    wy = a1 * c2 - c1 * a2;

    if ((w==0) && (wy==0) && (wx==0))
    {
        printf("układ nieoznaczony");
            }
            if ((w==0) && (wy!=0) && (wx!=0))
            {
                printf("układ sprzeczny");
            }
if (w!=0)
{
    x=(wx/w);
    y=(wy/w);
    printf("układ oznaczony x= %i", x);
    printf("%i", y);
}

    return 0;
}