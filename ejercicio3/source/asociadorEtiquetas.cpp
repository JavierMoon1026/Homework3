#include "../header/asociadorEtiquetas.h"
#include <fstream>

Asociador::Asociador(Generador& builder) : data(builder) {}

string Asociador::serializar_doubles(const vector<double>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << vec[i];
        if (i < vec.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

string Asociador::serializar_strings(const vector<string>& vec) {
    ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        oss << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) oss << ", ";
    }
    oss << "]";
    return oss.str();
}

string Asociador::serializar_lists(const vector<vector<int>>& lists) {
    ostringstream oss;
    oss << "[\n";
    for (size_t i = 0; i < lists.size(); ++i) {
        oss << "  [";
        for (size_t j = 0; j < lists[i].size(); ++j) {
            oss << lists[i][j];
            if (j < lists[i].size() - 1) oss << ", ";
        }
        oss << "]";
        if (i < lists.size() - 1) oss << ",";
        oss << "\n";
    }
    oss << "]";
    return oss.str();
}

void Asociador::print_json() {
    //se arma el JSON como un string
    ostringstream oss;
    oss << "{\n";
    oss << "  \"vec_doubles\" : " << serializar_doubles(data.get_doubles()) << ",\n";
    oss << "  \"palabras\" : " << serializar_strings(data.get_palabras()) << ",\n";
    oss << "  \"listas\" : " << serializar_lists(data.get_listas()) << "\n";
    oss << "}";

    //se imprime por consola
    cout << oss.str() << endl;

    //se guarda en archivo
    ofstream archivo("output.json");
    if (archivo.is_open()) {
        archivo << oss.str();
        archivo.close();
    } else {
        cerr << "Error: no se pudo abrir el archivo para escritura." << endl;
    }
}