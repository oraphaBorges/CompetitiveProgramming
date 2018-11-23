//http://clubes.obmep.org.br/blog/um-pouco-sobre-poligonos-poligonos-uma-primeira-definicao-2/um-pouco-sobre-poligonos-uma-segunda-definicao-de-poligonos-2/
//https://www.urionlinejudge.com.br/judge/pt/questions/view/1233/4063
#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

const long long N = 112345;
bool visitado[N];
long long primos[N];

void crivoEratostenes() {
  memset(visitado, 0, sizeof visitado);
  visitado[1] = visitado[0] = true;
  int p = 0;
  for (int i = 2; i < N; ++i) {
    if (!visitado[i]) {
      primos[p++] = i;
      for (long long j = i + i; j < N; j += i)
        visitado[j] = true;
    }
  }
}

long long poligonosEstrelado(long long n) {
  if (n == 1) return 0;
  long long estrelas = n;
  for (int i = 0; primos[i] * primos[i] <= n; ++i) {
    if ((n % primos[i]) == 0) {
      while ((n % primos[i]) == 0) n /= primos[i];
      estrelas -= estrelas / primos[i];
    }
  }
  if (n > 1) estrelas -= estrelas / n;
  return estrelas;
}

int main() {
  crivoEratostenes();
  long long n;
  while (cin >> n) {
    std::cout << (poligonosEstrelado(n) >> 1) << endl;
  }
  return 0;
}
