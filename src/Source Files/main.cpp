#include <stdio.h>
#include <iostream>

#include "Cita.hpp" 
#include "Paciente.hpp"


int main(int argc, char** argv) {

   Paciente p1(001,"camilo", "Castellanos", "03/08/200");

   Cita c1(p1, 101, "2023/01/01", "01:00:00");
   
   cout<<c1.getPaciente().tostring();
   cout<<c1.toString();
   print("%s",&c1.toString);

}
