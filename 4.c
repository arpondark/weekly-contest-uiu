#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int total_drink = k * l;

    int total_limes = c * d;

    int toasts_drink = total_drink / nl;
    int toasts_limes = total_limes;
    int toasts_salt = p / np;

    int max_toasts = toasts_drink;

    if (toasts_limes < max_toasts)
        max_toasts = toasts_limes;
    if (toasts_salt < max_toasts)
        max_toasts = toasts_salt;

    printf("%d\n", max_toasts / n);

    return 0;
}
