#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);
    
    if (a == 0) {
        printf("a ko the bang 0.\n");
        if (b!= 0) {
            double x= -c/b;
            printf("1 nghiem x=%lf\n", x);
        } else {
            if (c == 0) {
                printf("vo so nghiem.\n");
            } else {
                printf("vo nghiem.\n");
            }
        }
        return 0;
    }
    double delta=b*b-4*a*c;
    if (delta>0) {
        double x1=(-b+sqrt(delta))/(2*a);
        double x2=(-b-sqrt(delta))/(2*a);
        printf("PT co 2 nghiem.\n");
        printf("Nghiem thu nhat: x1=%lf\n", x1);
        printf("nghiem thu 2:x2=%lf\n", x2);
    } else if (delta==0) {
        double x=-b/(2*a);
        printf("X=%lf\n", x);
    } else {
        printf("The equation has no solution.\n");
    }

    return 0;
}
