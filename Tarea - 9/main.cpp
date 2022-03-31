/*
Cree un programa que muestre el resultado de jugar con dos dados
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int input (int cant)

{
  if (cant == 1)
    {
    cout << endl;
    std:: cout << " -------------- Bienvenidos al juego de los Dados -------------- " << endl;
    std:: cout << " \n  Oprima una tecla para lanzar el dado 1 ";
    }
  else
    {
      std::cout << " \n  Oprima una tecla para lanzar el dado 2 ";
    }
  std::cin.ignore ();
}

int tirardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  std::cout << "  Alcanzo la casilla " << ran << std::endl;
  return ran;
}

int dado (int pdado, int sdado)
{
  std::cout << " \n  El resultado que ha conseguido es de  " << pdado + sdado << " = " << " casillas " << std::endl;
  return pdado + sdado;
}

int main ()
{
  int resultado, dado1, dado2;

  input (1);
  dado1 = tirardado ();
  input (2);
  dado2 = tirardado ();
  resultado = dado(
  dado2, dado2);
  
  return 0;
}
