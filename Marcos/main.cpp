#include <iostream>
#include "src/Pessoa.hpp"
#include "src/Aluno.hpp"
#include "src/ArquivosController.hpp"
#include <memory>


int main(int argc, char const *argv[])
{
    ArquivosController gerenciador;

    auto aluno1 = std::make_shared<Aluno>("143249199", "teste aluno 1", 21);
    auto aluno2 = std::make_shared<Aluno>("451355813", "teste aluno 2", 25);

    aluno1 -> addDisciplinas("AED I", 8);
    aluno1-> addDisciplinas("AED II", 6);
    
    gerenciador.carregarAluno(aluno1);
    gerenciador.salvarNoArquivo();
    gerenciador.lerArquivo("alunos.txt");
}
