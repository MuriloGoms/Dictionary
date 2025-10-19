//Crie um map<int, float> onde a chave é o número da matrícula do aluno e o valor é a nota. Depois, mostre o aluno com maior e menor nota. 

#include <iostream>
#include <map>

int main(){
    std::map<int, float> registro;
    int matricula;
    float nota;
    int n;
    
    std::cout << "Digite um numero de alunos pra registrar: ";
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cout << "Digite a matricula do aluno: ";
        std::cin >> matricula;

        std::cout << "Digite a nota do aluno: ";
        std::cin >> nota;

        registro[matricula] = nota;
    }

    //Inicializa os comparativos com o primeiro elemento do map
    auto it = registro.begin();
    int matriculaMaior = it->first;
    int matriculaMenor = it->first;
    float notaMaior = it->second;
    float notaMenor = it->second;

    for(const auto& aluno : registro){
        if(aluno.second > notaMaior){
            notaMaior = aluno.second;
            matriculaMaior = aluno.first;
        }

        if(aluno.second < notaMenor){
            notaMenor = aluno.second;
            matriculaMenor = aluno.first;
        }
    }

    std::cout << "Aluno com maior nota: " << matriculaMaior << " -> " << notaMaior << std::endl; 
    std::cout << "Aluno com menor nota: " << matriculaMenor << " -> " << notaMenor << std::endl; 

    return 0;
}
