#include <stdio.h>
#include <math.h>

int main()
{
    // Variable declaration
    double A, B, C;
    // take input
    scanf("%lf %lf %lf", &A, &B, &C);
    // calculate discriminant
    double discriminant = (B * B) - (4 * A * C);
    if (discriminant < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {   
        printf("R1 = %.5lf\n", (-B + sqrt(discriminant)) / (2 * A));
        printf("R2 = %.5lf\n", (-B - sqrt(discriminant)) / (2 * A));
    }

    return 0;
}