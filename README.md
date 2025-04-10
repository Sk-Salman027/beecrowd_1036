## Bhaskara's Formula
### Problem statement
Read 3 floating-point numbers. After, print the roots of bhaskara’s formula. If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

### Input
```c
 double A, B, C;
// take input
scanf("%lf %lf %lf", &A, &B, &C);
```
### calculate discriminant:
`double discriminant = (B * B) - (4 * A * C)`
### Check condition:
```c
 if (discriminant < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {   
        printf("R1 = %.5lf\n", (-B + sqrt(discriminant)) / (2 * A));
        printf("R2 = %.5lf\n", (-B - sqrt(discriminant)) / (2 * A));
    }
```

