#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){

    char palavra[30], letra[1],secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    acertos = 0;
    acerto=false;

    cout << "Passe a palavra secreta: ";
    cin >> palavra;
    system("cls");

    for(int j =0; j< sizeof(palavra)/4; j++){
        i++;
    }

    tam = sizeof(palavra)/4;

    for(i=0; i<tam;i++){
        secreta[i]='-';
    }
    
    while((chances>0)&&(acertos<tam)){
        cout << "Chances restantes: " << chances << '\n';
        cout << "palavra secreta: ";
        for(i=0; i<tam;i++){
            cout << secreta[i] ;
        }

        cout << "\nDigite uma letra: ";
        cin >> letra[0];
        for (i=0;i<tam;i++){
            if(palavra[i]==letra[0]){
                acerto=true;
                secreta[i]=palavra[i];
                acertos++;
            }
        }
        if (!acerto){
            chances--;
        }
        acerto=false;
        system("cls");

    }
    if (acertos==tam){
        cout << "Voce venceu!!!";
    }
    else{
        cout << "Voce Perdeu!!!";
    }
    system("pause");


    return 0;

}
