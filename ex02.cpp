//Leia uma frase do usuário e use `unordered_map<string, int>` para contar quantas vezes **cada palavra** aparece. Dica: use std::stringstream para separar as palavras.

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>

int main(){
    std::unordered_map<std::string, int> contagem;
    std::string frase;

    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase); //Le toda a frase inclusive espaços

    std::stringstream ss(frase); //Cria um fluxo baseado na string
    std::string palavra;

    while(ss >> palavra){
        contagem[palavra]++; //Soma 1 toda vez que a palavra aparece
    }

    std::cout << "===== Contagem de palavras ======";
    for(const auto& par : contagem){
        std::cout << par.first << " -> " << par.second << " vez(es) " << std::endl;
    } 

    return 0;
}


