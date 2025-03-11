# cpp_examples

## Descricao
Este repositorio contem exemplos de C++ organizados em tres niveis: **Basico, Intermediario e Avancado**. O objetivo e ajudar a reforcar os conceitos fundamentais, intermediarios e avancados da linguagem.

## Estrutura

### 🟢 C++ Basico
Exemplos para quem deseja revisar conceitos essenciais da linguagem:
- Declaracao de variaveis e tipos de dados
- Entrada e saida de dados (cin, cout)
- Estruturas condicionais (if, else)
- Lacos de repeticao (for, while)
- Arrays e structs
- Criacao de funcoes
- Manipulacao de arquivos
- Tratamento de erros com try/catch

### 🟠 C++ Intermediario
Conceitos mais avancados, incluindo:
- Uso de vetores (std::vector)
- Mapas (std::map) para armazenar pares chave-valor
- Funcoes lambda
- Manipulacao de arquivos com fstream
- Programacao orientada a objetos (POO)
- Tratamento de excecoes avancado
- Ponteiros para funcoes

### 🔴 C++ Avancado
Exemplos para quem deseja aprofundar o conhecimento e melhorar a performance do codigo:
- Multithreading e sincronizacao com mutex
- Async e future para execucao assincrona
- Smart pointers (unique_ptr, shared_ptr)
- Move semantics e rvalue references
- Variadic templates
- CRTP (Curiously Recurring Template Pattern)

Para compilar (com o ambiente já configurado):
```
g++ cpp_basic.cpp -o basic && ./basic

g++ cpp_intermediate.cpp -o intermediate && ./intermediate

g++ cpp_advanced.cpp -o advanced && ./advanced
```
