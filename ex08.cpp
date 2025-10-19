//Use unordered_map<string, string> onde a chave é o nome de usuário e o valor é a senha. Peça login e senha e verifique se o usuário existe e se a senha está correta.  

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, std::string> login;

    login["Murilo"] = "1234";
    login["juninho"] = "abc12";
    login["Pedro"] = "apapa";
    login["Ana"] = "abakachi123";

    std::string usuario, senha;

    std::cout << "\n====== Login ======\n";
    std::cout << "Usuario: ";
    std::cin >> usuario;
    std::cout << "Senha: ";
    std::cin >> senha;
    
    auto it = login.find(usuario);
    if(it != login.end()){
        if(it->second == senha){
            std::cout << "Login realizado com sucesso.";
        }
        else{
            std::cout << "Senha incorreta.";
        }
    } 
    else{
        std::cout << "Usuario nao encotrado.";
    }

    return 0;
}
