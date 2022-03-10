/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
struct cadastro
{

    int idade,telefone;
    string nome, classifica ;
    float peso, altura,imc;
    
  };
  


int main (){
    
  cadastro paciente1;
  
  cout << "Hello World" << endl;
  cout << "ola! mundo" << std::endl;
  cout << ""<<endl;
  cout << "digite seu nome:_______";
    cin >> paciente1.nome;
  cout << "digite sua idade :_______";
     cin >> paciente1.idade;
  cout << "digite seu peso:_______";
     cin >> paciente1.peso;
  cout << "digite sua altura:_______";
    cin >> paciente1.altura;
  cout << "digite seu telefone:_______";
    cin >> paciente1.telefone;
    
    cout << ""<<endl;
    
    float exponiciacao = pow(paciente1.altura,2);
    paciente1.imc = (paciente1.peso/exponiciacao);
    
    cout << "seu IMC é :   ";
    
    cout << paciente1.imc << endl; 
    cout << ""<<endl;
    
    if( paciente1.imc < 18.5){
        
        cout << "você está abaixo do peso recomenda-se consulta ao nutriconista ";
        cout << paciente1.nome;
    }
    if (paciente1.imc >= 18.5 && paciente1.imc < 24.9 ){
        
        cout << "seu peso está ideal ";
        cout << paciente1.nome;
      
    }  
    if (paciente1.imc >= 24.9 && paciente1.imc < 30 ){
        
        cout << "você está acima do peso ";
        cout << paciente1.nome;
        
    }
    if (paciente1.imc > 30 ){
        
        cout << "você está com obesidade  recomenda-se consulta ao nutriconista ";
        cout << paciente1.nome;
        
    }
    
   return 0;
}

