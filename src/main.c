#include <stdio.h>
#include <iostream>
#include "Cita.hpp" 


int main() {
    // Crear una instancia de la clase Cita
    Cita cita(1010, 1020, "2023/01/01", "01:00:00");
    // Acceder a los métodos de la clase Cita y mostrar información
   printf("%s\n",cita.toString().c_str());
    return 0;
}
