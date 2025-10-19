//Peça ao usuário uma frase e use map<char, int> para contar quantas vezes cada letra aparece. Ignore espaços e caracteres especiais.

#include <iostream>
#include <map>
#include <string>

int main() {
    std::string frase;
    std::map<char, int> contagem;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);

    for (char c : frase) {
        // Verifica se é uma letra maiúscula ou minúscula
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Converte para minúscula
            if (c >= 'A' && c <= 'Z') {
                c = c + 32; // diferença entre 'A' e 'a' na tabela ASCII
            }

            contagem[c]++;
        }
    }

    std::cout << "\nContagem de letras:\n";
    for (auto const& par : contagem) {
        std::cout << par.first << ": " << par.second << '\n';
    }

    return 0;
}
