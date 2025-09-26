/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        18.09.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Вводим число пи
  const double PI = 3.141592;

  float T;
  float h;
  float v;
  float H;
  int t;
  float a;

  // Задаем глубину шахты(0,85 км)
  cout << "Enter the depth of the shaft: ";
  cin >> H;

  // Вводим а = 5.96 (м.с2)
  cout << "Enter the constant a: ";
  cin >> a;

  // Pадаем момент времени, в который необходимо необходимо узнать глубину спускания клетки((10 с)
  cout << "Enter time: ";
  cin >> t;

  // переводим км в м
  H = H * 1000.0f;

  // Определяем продолжительность полного опускания клети 
  T = PI * sqrt(H / (2 * a));
  // Определяем глубину спускания
  h = (H / 2.0f) * (1 - cos(sqrt((2.0f * a) / H) * t));
  v = sqrt((a * H) / 2);

  cout << fixed; cout.precision(5);
  cout << T << endl
    << h << endl
    << v << endl;

  return 0;
}
