//Monte um sistema com unordered_map<string, int> para representar um estoque: A chave é o nome do produto. O valor é a quantidade em estoque. Permita adicionar, remover e atualizar a quantidade de um produto. 

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, int> estoque;
    std::string produto;
    int opcao;
    int quantidade;

    while(true) {
    std::cout << "\n====== ESTOQUE ======\n";
    std::cout << "1 - Adicionar Produto\n";
    std::cout << "2 - Exibir estoque\n";
    std::cout << "3 - Remover do estoque\n";
    std::cout << "4 - Sair\n";
    std::cout << "5 - Atualizar Estoque\n";
    std::cout << "Escolha: ";
    std::cin >> opcao;
    std::cin.ignore();

    switch (opcao){
        case 1:
           std::cout << "Digite o nome do produto: ";
           std::getline(std::cin, produto); 
           std::cout << "Digite a quantidade do produto: ";
           std::cin >> quantidade;
           

           if(estoque.count(produto)){
                estoque[produto] += quantidade;
                std::cout << "Item ja existia. Quantidade atualizada!\n";
           }
           else{
                estoque[produto] = quantidade;
                std::cout << "Item adicionado com sucesso!\n";
           }
           break;

        case 2:
            if(estoque.empty()){
                std::cout << "O Estoque esta vazio\n";
            }
            else{
                std::cout << "\n======= Itens do Estoque =======\n";
                for(const auto& par : estoque){
                    std::cout << par.first << " -> " << par.second << std::endl;
                }
            }
            break;
            
        case 3:
            std::cout << "Digite o item que deseja retirar: ";
            std::cin >> produto;
            if(estoque.erase(produto)){
                std::cout << "Item removido com sucesso";
            }
            else{
                std::cout << "Item nao encontrado";
            }
            break;

        case 4:
            std::cout << "Saindo...";
            return 0;

        case 5:
            std::cout << "Digite o item que deseja atualizar: ";
            std::getline(std::cin, produto);

            if(estoque.count(produto)){
            std::cout << "Digite a nova quantidade: ";
            std::cin >> quantidade;
            estoque[produto] = quantidade;
            std::cout << "Produto atualizado com sucesso\n";
            }
            else{
                std::cout << "Produto nao encontrado\n";
            }
            break;

        default:
            std::cout << "Opcao invalida!";
        }
    }
}