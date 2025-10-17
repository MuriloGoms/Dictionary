//Crie um programa que use unordered_map<string, float> para armazenar o nome e a nota de 5 alunos. Depois, mostre todos os nomes e notas cadastradas.

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, float> alunos;
    std::string nome;
    float nota;

    for(int i = 0; i < 5; i++){
        std::cout << "Digite o nome do Aluno: ";
        std::cin >> nome;
        std::cout << "Digite a nota do Aluno para Cadastra-lo: ";
        std::cin >> nota;

        alunos[nome] = nota; // Associa o nome á nota
    }

    std::cout << "\n===== Lista de Alunos =====\n";
    for(auto& par : alunos) {
        std::cout << par.first << " -> " << par.second << std::endl;
    }

    //Buscar aluno específico
    std::cout << "Digite o nome do aluno que deseja procurar: ";
    std::cin >> nome;

    if(alunos.count(nome)){
        std::cout << nome << " tem nota " << alunos[nome] << std::endl; 
    }
    else {
        std::cout << "Aluno não encontrado";
    }

    return 0;
}