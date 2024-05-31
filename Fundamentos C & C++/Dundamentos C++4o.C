#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Definição de uma classe
class Person {
public:
    string name;
    int age;

    // Construtor
    Person(string n, int a) : name(n), age(a) {}

    // Método para atualizar a idade
    void updateAge(int newAge) {
        age = newAge;
    }

    // Método para exibir informações da pessoa
    void display() const {
        cout << "Pessoa: " << name << ", Idade: " << age << endl;
    }
};

// Função para somar dois números inteiros (passagem de argumentos por valor)
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declaração de variáveis e tipos de dados
    int a = 10, b = 20;
    float f = 5.5f;
    char c = 'A';
    bool flag = true;
    string str = "Hello, C++!";

    // Operadores aritméticos
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    float div = static_cast<float>(a) / b;

    // Operadores relacionais e lógicos
    bool isEqual = (a == b);
    bool isGreater = (a > b);
    bool andOperation = (a > 5 && b > 15);
    bool orOperation = (a > 5 || b > 25);

    // Estruturas de controle de fluxo
    if (a > b) {
        cout << "a é maior que b" << endl;
    } else {
        cout << "a não é maior que b" << endl;
    }

    // Switch case
    switch (c) {
        case 'A':
            cout << "A é a primeira letra do alfabeto" << endl;
            break;
        case 'B':
            cout << "B é a segunda letra do alfabeto" << endl;
            break;
        default:
            cout << "Outra letra" << endl;
    }

    // Estruturas de repetição
    // Loop for
    for (int i = 0; i < 5; i++) {
        cout << "for loop: i = " << i << endl;
    }

    // Loop while
    int count = 0;
    while (count < 5) {
        cout << "while loop: count = " << count << endl;
        count++;
    }

    // Loop do-while
    count = 0;
    do {
        cout << "do-while loop: count = " << count << endl;
        count++;
    } while (count < 5);

    // Vetores (arrays) e strings
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Vetor numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    cout << "String: " << str << endl;

    // Uso de funções
    int result = add(a, b);
    cout << "Soma de " << a << " e " << b << " é " << result << endl;

    // Uso de classes (objects)
    Person person("John Doe", 30);
    person.display();

    // Atualizar a idade usando método da classe
    person.updateAge(35);
    person.display();

    // Ponteiros e manipulação de memória
    int *p = new int[5]; // Alocação dinâmica de memória para 5 inteiros
    if (p == nullptr) {
        cout << "Falha na alocação de memória" << endl;
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        p[i] = i * 10;
    }
    cout << "Valores alocados dinamicamente: ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p; // Liberação da memória alocada

    // Entrada e saída
    string filename = "example.txt";
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Erro ao abrir o arquivo para escrita" << endl;
        return 1;
    }
    outFile << "Escrevendo no arquivo de exemplo.\n";
    outFile.close();

    // Leitura do arquivo
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Erro ao abrir o arquivo para leitura" << endl;
        return 1;
    }
    string line;
    while (getline(inFile, line)) {
        cout << "Linha do arquivo: " << line << endl;
    }
    inFile.close();

    return 0;
}
