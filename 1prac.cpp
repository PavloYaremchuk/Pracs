#include <iostream>
#include <cmath>

using namespace std;
int main()
{
char name[100];
double p, r, t;

printf("Enter your name: ");
scanf("%c", name);

printf ("Enter the pricipal amount: ");
scanf("%lf", &p);

printf ("Enter the rate amount: ");
scanf ("%lf", &r);

printf ("Enter the years amount: ");
scanf ("%lf", &t);

double m = p*pow(1+(r/100),t);

printf ("%.lf", m);
return 0;
}
