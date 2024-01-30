#include <math.h>
#include <stdio.h>

// fonction factorielle
int factorielle(int nombre) {
  int indice;
  int res = 1;
  for (indice = 1; indice < nombre + 1; indice++) {
    res *= indice;
  }
  return res;
}

// faire la somme des n premier entiers
int somme_n_int(int nombre) { return (nombre * (nombre + 1)) / 2; }

// calcul nombre eposant exp
double exposant(double nombre, double exp) {
  if (exp == 0) {
    return 1.0;
  }
  int indice;

  for (indice = 1; indice < exp; indice++) {
    nombre *= nombre;
  }
  return nombre;
}

/* //calcul cos(x) avec des fonction maison
double cosinus(double x) {
  int n;            // indice de boucle
  double res = 1.0; // resultat

  for (n = 1; n <= 20; n++) {
    res += (exposant(-1.0, n) * exposant(x, 2 * n)) / factorielle(2 * n);
    printf("%f\n", res); // testeur
  }
  return res;
}*/

// calcul cos(x) version précise

double cosinus(double x) {
  int n;            // indice de boucle
  double res = 1.0; // resultat
  // erreur au de la de 16.
  for (n = 1; n <= 16; n++) {
    res += (pow(-1.0, n) * pow(x * x, n)) / factorielle(2 * n);
    // printf("%f\n", res); // testeur
  }
  return res;
}

int main() {
  // valeur abjectif : 0.70710678118
  printf("ma fonction cosinus de pi/4 = %.015f\n", cosinus(M_PI / 4));
  printf("ma fonction cosinus de pi/4 = %.015f\n", cos(M_PI / 4));
  printf("%f\n", M_PI);
}