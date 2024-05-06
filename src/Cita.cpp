
#include "Cita.hpp" // Inclusión del archivo de cabecera de la clase Cita

Cita::Cita() { // Implementación del constructor de la clase Cita
}
Cita::Cita(int idPaciente, int idMedico, string fecha, string hora) { // Implementación del constructor de la clase Cita
//Para asignar los valores a los atributos de la clase se utiliza el operador this o el operador de resolución de ámbito ::
    this->idPaciente = idPaciente; // Asigna el identificador del paciente
    this->idMedico = idMedico; // Asigna el identificador del médico
    this->fecha = fecha; // Asigna la fecha de la cita
    this->hora = hora; // Asigna la hora de la cita
}

Cita::~Cita() { // Implementación del destructor de la clase Cita
}

int Cita::getId() { // Implementación del método que devuelve el identificador de la cita
    return id; // Devuelve el identificador de la cita
}

void Cita::setId(int id) { // Implementación del método que establece el identificador de la cita
    this->id = id; // Asigna el identificador de la cita
}

int Cita::getIdPaciente() { // Implementación del método que devuelve el identificador del paciente
    return idPaciente; // Devuelve el identificador del paciente
}

void Cita::setIdPaciente(int idPaciente) { // Implementación del método que establece el identificador del paciente
    this->idPaciente = idPaciente; // Asigna el identificador del paciente
}

int Cita::getIdMedico() { // Implementación del método que devuelve el identificador del médico
    return idMedico; // Devuelve el identificador del médico
}

void Cita::setIdMedico(int idMedico) { // Implementación del método que establece el identificador del médico
    this->idMedico = idMedico; // Asigna el identificador del médico
}

string Cita::getFecha() { // Implementación del método que devuelve la fecha de la cita
    return fecha; // Devuelve la fecha de la cita
}

void Cita::setFecha(string fecha) { // Implementación del método que establece la fecha de la cita
    this->fecha = fecha; // Asigna la fecha de la cita
}

string Cita::getHora() { // Implementación del método que devuelve la hora de la cita
    return hora; // Devuelve la hora de la cita
}

void Cita::setHora(string hora) { // Implementación del método que establece la hora de la cita
    this->hora = hora; // Asigna la hora de la cita
}

string Cita::toString() { // Implementación del método que devuelve una cadena con la información de la cita
    return "Cita [id=" + to_string(id) + ", idPaciente=" + to_string(idPaciente) + ", idMedico=" + to_string(idMedico) + ", fecha=" + fecha + ", hora=" + hora + "]";
}
