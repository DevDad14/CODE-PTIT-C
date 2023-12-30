<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);


    double delta = b * b - 4 * a * c;

    if (a != 0) {
        if (delta > 0) {
           
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2lf %.2lf\n", x1, x2);
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    } else {
        // Trường hợp a = 0, phương trình là phương trình bậc nhất
        if (b != 0) {
            double x = -c / b;
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
=======
#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);


    double delta = b * b - 4 * a * c;

    if (a != 0) {
        if (delta > 0) {
           
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2lf %.2lf\n", x1, x2);
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    } else {
        // Trường hợp a = 0, phương trình là phương trình bậc nhất
        if (b != 0) {
            double x = -c / b;
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
>>>>>>> 676aa6e (Add files via upload)
=======
#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);


    double delta = b * b - 4 * a * c;

    if (a != 0) {
        if (delta > 0) {
           
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%.2lf %.2lf\n", x1, x2);
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    } else {
        // Trường hợp a = 0, phương trình là phương trình bậc nhất
        if (b != 0) {
            double x = -c / b;
            printf("%.2lf\n", x);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
>>>>>>> 4e93da1f93a3693c079c76996b357a601da2cf52
