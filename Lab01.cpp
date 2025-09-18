/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        18.09.2025  *
 * Название:    Вариант 11  *
 * **************************/
 
#include <iostream>
#include <cmath>

using namespace std;

int main(){
  const double PI = 3.141592;                       // Вводим число пи
  
  float T;
  float h;
  float v;
  float H;
  int t;
  float a;
  
  cout << "Enter the depth of the shaft: ";         // Задаем глубину шахты(0,85 км)
  cin  >> H;
  
  cout << "Enter the constant a: ";                 // Вводим а = 5,96 (м.с2)
  cin  >> a;
  
  cout << "Enter time: ";                           // Pадаем момент времени, в который необходимо необходимо узнать глубину спускания клетки((10 с)
  cin  >> t;
  
  H = H * 1000;                                     // переводим км в м
  
  T = PI * sqrt(H / (2 * a));                       // Определяем продолжительность полного опускания клети
  h = (H / 2) * (1 - cos(sqrt((2 * a) / H ) * t));  // Определяем глубину спускания
  v = sqrt((a * H) / 2);
  
  cout << fixed;
  cout.precision(5);
  cout << T << endl;
  cout << h << endl;
  cout << v << endl;
  
  return 0;
}