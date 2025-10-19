//Crie um map<string, string> onde a chave é uma palavra em português e o valor é a tradução em inglês. Depois, permita que o usuário digite uma palavra em português e veja a tradução (se existir).

#include <iostream>
#include <map>
#include <string>

int main(){
    std::map<std::string, std::string> translator;

    translator["Carro"] = "Car";
    translator["Moto"] = "Bike";
    translator["Cachorro"] = "Dog";
    translator["Gato"] = "Cat";
    translator["Mesa"] = "Table";
    translator["Livro"] = "Book";
    translator["Bomba"] = "Bomb";
    translator["Janela"] = "Window";

    std::string word;

    std::cout << "\nDigite uma palavra em portugues: ";
    std::cin >> word;

    if(translator.find(word) != translator.end()){
        std::cout << word << " = " << translator[word] << std::endl;
    }
    else {
        std::cout << "Palavra nao encontrada no dicionario";
    }

    return 0;
}