
#include "Paciente.hpp" // Inclusión del archivo de cabecera de la clase Paciente

Paciente::Paciente() { // Implementación del constructor de la clase Paciente
}

Paciente::Paciente(int id, string nombre, string apellidos, string fechaNacimiento) { // Implementación del constructor de la clase Paciente
    this->id = id; // Asigna el identificador del paciente
    this->nombre = nombre; // Asigna el nombre del paciente
    this->apellidos = apellidos; // Asigna los apellidos del paciente
    this->fechaNacimiento = fechaNacimiento; // Asigna la fecha de nacimiento del paciente
}

Paciente::~Paciente() { // Implementación del destructor de la clase Paciente
}

int Paciente::getId() { // Implementación del método que devuelve el identificador del paciente
    return id; // Devuelve el identificador del paciente
}

void Paciente::setId(int id) { // Implementación del método que establece el identificador del paciente
    this->id = id; // Asigna el identificador del paciente
}

string Paciente::getNombre() { // Implementación del método que devuelve el nombre del paciente
    return nombre; // Devuelve el nombre del paciente
}

void Paciente::setNombre(string nombre) { // Implementación del método que establece el nombre del paciente
    this->nombre = nombre; // Asigna el nombre del paciente
}

string Paciente::getApellidos() { // Implementación del método que devuelve los apellidos del paciente
    return apellidos; // Devuelve los apellidos del paciente
}

void Paciente::setApellidos(string apellidos) { // Implementación del método que establece los apellidos del paciente
    this->apellidos = apellidos; // Asigna los apellidos del paciente
}

string Paciente::getFechaNacimiento() { // Implementación del método que devuelve la fecha de nacimiento del paciente
    return fechaNacimiento; // Devuelve la fecha de nacimiento del paciente
}

void Paciente::setFechaNacimiento(string fechaNacimiento) { // Implementación del método que establece la fecha de nacimiento del paciente
    this->fechaNacimiento = fechaNacimiento; // Asigna la fecha de nacimiento del paciente
}

string Paciente::toString() { // Implementación del método que devuelve una cadena con la información del paciente
    return "Paciente [id=" + to_string(id) + ", nombre=" + nombre + ", apellidos=" + apellidos + ", fechaNacimiento=" + fechaNacimiento + "]";
}

```