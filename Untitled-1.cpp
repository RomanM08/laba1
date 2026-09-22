/**************
* Мхеян Роман *
*  ПИ - 261   *
*  Вар 4      *
**************/


#include <iostream>
#include <cmath>

int main()  {
  double a = 5.54;
  double b = 3.93;
  double c = 1.45;
  int T1 = 288;
  int T2 = 675;
  double K;
  K = (c-1)/c;
  double n1;
  n1 = 1 - pow((1/b),K);
  std::cout << n1 <<std::endl;
  
  double n2;
  n2 = (T2 - T1)/(T2+(T2 - T1)/((c-1) * std::log(a)));
  std::cout << n2 <<std::endl;
  
  double n3;
  n3 = 1 - K * (std::log(b)/(pow(b,K) - 1));
  std::cout << n3 <<std::endl;
  
  return 0;
}