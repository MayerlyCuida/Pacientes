
#ifndef PACIENTE_HPP // Esta directiva evita que el archivo se incluya más de una vez
#define PACIENTE_HPP // Esta directiva evita que el archivo se incluya más de una vez

#include <string> // Inclusión de la librería string

using namespace std; // Se utiliza el espacio de nombres std para no tener que escribir std::string
class Paciente { // Declaración de la clase Paciente

public: // Sección de métodos públicos
    Paciente(); // Constructor de la clase
    Paciente(int id, string nombre, string apellidos, string fechaNacimiento); // Constructor de la clase
    virtual ~Paciente(); // Destructor de la clase
    int getId(); // Método que devuelve el identificador del paciente
    void setId(int id); // Método que establece el identificador del paciente
    string getNombre(); // Método que devuelve el nombre del paciente
    void setNombre(string nombre); // Método que establece el nombre del paciente
    string getApellidos(); // Método que devuelve los apellidos del paciente
    void setApellidos(string apellidos); // Método que establece los apellidos del paciente
    string getFechaNacimiento(); // Método que devuelve la fecha de nacimiento del paciente
    void setFechaNacimiento(string fechaNacimiento); // Método que establece la fecha de nacimiento del paciente
    string toString(); // Método que devuelve una cadena con la información del paciente

private: // Sección de atributos privados

    int id; // Atributo que almacena el identificador del paciente
    string nombre; // Atributo que almacena el nombre del paciente
    string apellidos; // Atributo que almacena los apellidos del paciente
    string fechaNacimiento; // Atributo que almacena la fecha de nacimiento del paciente

}; // Fin de la declaración de la clase Paciente

#endif /* PACIENTE_HPP */ // Esta directiva evita que el archivo se incluya más de una vez

```
