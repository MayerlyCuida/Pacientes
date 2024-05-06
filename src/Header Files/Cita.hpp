
#ifndef CITA_HPP // Esta directiva evita que el archivo se incluya más de una vez
#define CITA_HPP // Esta directiva evita que el archivo se incluya más de una vez
class Paciente;

#include <string> // Inclusión de la librería string

// Un namespace es un espacio de nombres que permite agrupar un conjunto de elementos y acceder a ellos de forma más sencilla
using namespace std; // Se utiliza el espacio de nombres std para no tener que escribir std::string
class Cita { // Declaración de la clase Cita
public: // Sección de métodos públicos
    Cita(); // Constructor de la clase
    Cita(Paciente Paciente, int idMedico, string fecha, string hora); // Constructor de la clase
    virtual ~Cita(); // Destructor de la clase
    int getId(); // Método que devuelve el identificador de la cita
    void setId(int id); // Método que establece el identificador de la cita
    int getPaciente(); // Método que devuelve el identificador del paciente
    void setPaciente(Paciente Paciente); // Método que establece el identificador del paciente
    int getIdMedico(); // Método que devuelve el identificador del médico
    void setIdMedico(int idMedico); // Método que establece el identificador del médico
    string getFecha(); // Método que devuelve la fecha de la cita
    void setFecha(string fecha); // Método que establece la fecha de la cita
    string getHora(); // Método que devuelve la hora de la cita
    void setHora(string hora); // Método que establece la hora de la cita
    string toString(); // Método que devuelve una cadena con la información de la cita

private: // Sección de atributos privados
    int id; // Atributo que almacena el identificador de la cita
    Paciente Paciente; // Atributo que almacena el identificador del paciente
    int idMedico; // Atributo que almacena el identificador del médico
    string fecha; // Atributo que almacena la fecha de la cita
    string hora; // Atributo que almacena la hora de la cita


}; // Fin de la declaración de la clase Cita

#endif /* CITA_HPP */ // Esta directiva evita que el archivo se incluya más de una vez
