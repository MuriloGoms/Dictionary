//Dado um map<string, string> (por exemplo, país → capital), crie um novo dicionário invertido (capital → país). Mostre ambos os mapas na tela. 

#include <iostream>
#include <map>
#include <string>

int main() {
    // Mapa original: país → capital
    std::map<std::string, std::string> paisCapital;
    paisCapital["Brasil"] = "Brasilia";
    paisCapital["Franca"] = "Paris";
    paisCapital["Japao"] = "Toquio";
    paisCapital["Canada"] = "Ottawa";

    // Novo mapa invertido: capital → país
    std::map<std::string, std::string> capitalPais;

    // Invertendo o mapa
    for (auto const& par : paisCapital) {
        capitalPais[par.second] = par.first;
    }

    // Mostrando o mapa original
    std::cout << "=== Mapa Original (Pais -> Capital) ===\n";
    for (auto const& par : paisCapital) {
        std::cout << par.first << " -> " << par.second << '\n';
    }

    // Mostrando o mapa invertido
    std::cout << "\n=== Mapa Invertido (Capital -> Pais) ===\n";
    for (auto const& par : capitalPais) {
        std::cout << par.first << " -> " << par.second << '\n';
    }

    return 0;
}
