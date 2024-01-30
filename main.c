#include <math.h>
#include <stdio.h>

int factorielle(int nombre) {
  int indice;
  int res = 1;
  for (indice = 1; indice < nombre + 1; indice++) {
    res *= indice;
  }
  return res;
}

int somme_n_int(int nombre) { return (nombre * (nombre + 1)) / 2; }

double exposant(double nombre, double exp) {
  if (exp == 0) {
    return 1;
  }
  int indice;

  for (indice = 1; indice < exp; indice++) {
    nombre *= nombre;
  }
  return nombre;
}

double cosinus(float x) {

  int n;          // indice de boucle
  double res = 1; // resultat

  for (n = 1; n <= 20; n++) {
    res += (exposant(-1, n) * exposant(x, (2 * n))) / factorielle(2 * n);
    printf("%f\n", res); // testeur
  }
  return res;
}

int main() { printf("cosinus de pi/4 = %f", cosinus(3.14159265359 / 4)); }