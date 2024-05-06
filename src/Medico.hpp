
#ifndef MEDICO_HPP // Esta directiva evita que el archivo se incluya más de una vez
#define MEDICO_HPP // Esta directiva evita que el archivo se incluya más de una vez

#include <string> // Inclusión de la librería string

using namespace std; // Se utiliza el espacio de nombres std para no tener que escribir std::string
class Medico { // Declaración de la clase Medico

public: // Sección de métodos públicos
    Medico(); // Constructor de la clase
    Medico(int id, string nombre, string apellidos, string especialidad); // Constructor de la clase
    virtual ~Medico(); // Destructor de la clase
    int getId(); // Método que devuelve el identificador del médico
    void setId(int id); // Método que establece el identificador del médico
    string getNombre(); // Método que devuelve el nombre del médico
    void setNombre(string nombre); // Método que establece el nombre del médico
    string getApellidos(); // Método que devuelve los apellidos del médico
    void setApellidos(string apellidos); // Método que establece los apellidos del médico
    string getEspecialidad(); // Método que devuelve la especialidad del médico
    void setEspecialidad(string especialidad); // Método que establece la especialidad del médico
    string toString(); // Método que devuelve una cadena con la información del médico

private: // Sección de atributos privados
    int id; // Atributo que almacena el identificador del médico
    string nombre; // Atributo que almacena el nombre del médico
    string apellidos; // Atributo que almacena los apellidos del médico
    string especialidad; // Atributo que almacena la especialidad del médico

}; // Fin de la declaración de la clase Medico

#endif /* MEDICO_HPP */ // Esta directiva evita que el archivo se incluya más de una vez

```