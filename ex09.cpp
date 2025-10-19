// Crie um map<string, float> com nomes de produtos e seus preços. Depois, calcule o valor total de uma compra (o usuário digita os produtos que quer).

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, float> Produtos;
    std::map<std::string, float> Carrinho;
    std::string produto;
    float preco;

    Produtos["Manteiga"] = 4.99;
    Produtos["Chocolate"] = 6.89;
    Produtos["Trufa"] = 2.89;
    Produtos["Leite"] = 5.99;

    int opcao;
    while (true)
    {
        std::cout << "\n====== Mercado ======\n";
        std::cout << "1 - Adicionar produto\n";
        std::cout << "2 - Remover produto\n";
        std::cout << "3 - Ver produtor disponiveis\n";
        std::cout << "4 - Finalizar compra\n";
        std::cout << "5 - sair\n";
        std::cout << "Escolha: ";
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao)
        {
        case 1:
            std::cout << "Digite o nome do produto: ";
            std::getline(std::cin, produto);
            if(Produtos.find(produto) != Produtos.end()){
                Carrinho[produto] = Produtos[produto];
                std::cout << "Produto adicionado ao carrinho\n";
            }
            else{
                std::cout << "Produto indiponivel.\n";
            }
            break;

        case 2:
            std::cout << "Digite o produto que deseja remover: ";
            std::getline(std::cin, produto);
            if (Carrinho.erase(produto))
            {
                std::cout << "Produto removido do carrinho\n";
            }
            else{
                std::cout << "Produto nao encontrado no carrinho.\n";
            }
            break;
        
        case 3:
            std::cout << "\n====== Produtos Disponiveis ======\n";
            for(const auto& par : Produtos){
                std::cout << par.first << " -> R$ " << par.second << std::endl;
            }
            break;

        case 4:
            std::cout << "\n====== Carrinho ======\n";
            if(Carrinho.empty()){
                std::cout << "O carrinho esta vazio.\n";
            }
            else{
                float total = 0;
                for(const auto& par : Carrinho){
                    std::cout << par.first << " -> R$ " << par.second << std::endl;
                    total += par.second;
                }

                std::cout << "Total: R$" << total << std::endl;
            }
            std::cout << "[0] Para confirmar compra.";
            std::getline(std::cin, produto);
            if(produto == "0"){
                std::cout << "Compra confirmada! Obrigado por comprar aqui.\n";
                return 0;
            }
            break;

        case 5:
            std::cout << "Encerrando programa...\n";
            return 0;

            default:
            std::cout << "Opcao invalida!\n";
            break;
        }
    }
}