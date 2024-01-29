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

float exposant(float nombre, int exp) {
  if (exp == 0) {
    return 1;
  }
  int indice;

  for (indice = 1; indice < exp; indice++) {
    nombre *= nombre;
  }
  return nombre;
}

float cosinus(float x) {

  int n;         // indice de boucle
  float res = 1; // resultat

  for (n = 1; n <= 10; n++) {
    res += (pow(-1, n) * pow(x, (2 * n))) / factorielle(2 * n);
    printf("%f\n", res); // testeur
  }
  return res;
}

int main() {}