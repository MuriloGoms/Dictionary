//Use `std::map<string, string>` para armazenar nomes e números de telefone. Permita: Adicionar um contato, Buscar pelo nome e Listar todos o contatos ordenado afalbeticamente

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, std::string> Lista_telefonica;
    int lista;
    std::string nome;
    std::string numero_fone;


    while(true) {
        std::cout << "\n===== Lista Telefonica =====\n";
        std::cout << "1 - Registar nova pessoa\n";
        std::cout << "2 - Exibir lista telefonica\n";
        std::cout << "3 - Apagar contato\n";
        std::cout << "4 - Sair\n";
        std::cout << "Escolha: ";
        std::cin >> lista;
        std::cin.ignore(); //Limpa o buffer do teclado

        switch (lista){
            case 1:
                std::cout << "Digite o nome do contato: ";
                std::getline(std::cin, nome);
                std::cout << "Digite o numero do contato: ";
                std::getline(std::cin, numero_fone);
                Lista_telefonica[nome] = numero_fone;
                std::cout << "Contato adicionado\n";
                break;
            
            case 2:
                std::cout << "\n====== Contatos ======\n";        
                if(Lista_telefonica.empty()){
                    std::cout << "Nenhum contato adicionado. \n";
                }
                else {
                    for(const auto& par : Lista_telefonica){
                        std::cout << "Nome: " << par.first << "\nTelefone: " << par.second << "\n___________________\n" "\n";
                    }
                }
                break;
            
            case 3:
                std::cout << "Digite o contato que voce quer apagar da lista: ";
                std::getline(std::cin, nome);
                if(Lista_telefonica.erase(nome)){
                    std::cout << "Contato removido! \n";
                }
                else {
                    std::cout << "Esse contato nao existe na lista\n";
                }
                break;
            
            case 4:
                std::cout << "Saindo...\n";
                return 0;

            default:
                std::cout << "Digite uma opcao valida!\n";
        }
    }
}