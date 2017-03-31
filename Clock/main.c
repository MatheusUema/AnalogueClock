#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int horas,minutos,segundos;
    horas = 1;
    minutos = 54;
    segundos = 0;
    while(1){ //contagem de tempo
        if (segundos < 59){
            segundos++;
        }
        else {
            if (minutos<59){
                segundos = 0;
                minutos++;
            }
            else {
                minutos = 0;
                horas++;
            }
        }
        printf("===========RELOGIO===========\n");
        printf("\r%dh %dm %ds", horas, minutos, segundos);
        if (segundos < 2.5){
            printf("\n\n              12\n               |\n               |\n               |\n               |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 5){
            printf("\n\n              12\n                 |\n                 |\n                |\n                |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 7.5){
            printf("\n\n              12\n                    /\n                   /\n                  /\n                 /\n                /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 10){
            printf("\n\n              12\n\n                       /\n                     /\n                   /\n                 /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 12.5){
            printf("\n\n              12\n\n                   \n                         _\n                     _ /\n                 _ /\n9              ./             3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 15){
            printf("\n\n              12\n\n                   \n                  \n                             \n                       _ _ /\n9              ._ _ /         3\n\n\n\n\n\n               6\n");
        }
        else if (segundos < 17.5){
            printf("\n\n              12\n\n                   \n                  \n                  \n                 \n9              ._ _ _ _ _ _ _ 3\n\n\n\n\n\n               6\n");
        }
        else if (segundos <20) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _ _ _   \n\n\n\n\n               6\n");
        }
        else if (segundos <22.5){
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _      \n                          |_  \n\n\n\n               6\n");
        }
        else if (segundos < 25) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                  |_ _      \n                      |_   \n                         |_      \n\n\n               6\n");
        }
        else if (segundos < 27.5) {
               printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                   |      \n                   |_   \n                     |      \n                     |_   \n                      \n               6\n");
        }
        else if(segundos < 30) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                 |      \n                 |_    \n                   |      \n                   |  \n                   |\n               6\n");
        }
        else if (segundos < 32.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n               |     \n               |      \n               |  \n               |\n               6\n");
        }
        else if (segundos < 35) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n              |     \n              |      \n             |  \n             |\n               6\n");
        }
        else if (segundos < 37.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n              /      \n             |     \n             |      \n            /  \n           |\n               6\n");
        }
        else if (segundos < 40) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9             _.              3\n            _/      \n          _/     \n        _/      \n      _/  \n     /    \n               6\n");
        }
        else if (segundos < 42.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9               .              3\n           _ _ /      \n     _ _ /     \n    / \n    \n         \n               6\n");
        }
        else if (segundos < 45) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9         _ _ _.              3\n       _ /      \n   _ /     \n      \n    \n         \n               6\n");
       }
        else if (segundos < 47.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9  _ _ _ _ _ _.              3\n            \n  \n      \n    \n         \n               6\n");
        }
        else if (segundos < 50) {
          printf("\n\n              12\n\n                   \n                  \n                   \n  --_ _ _ _  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (segundos < 52.5) {
          printf("\n\n              12\n\n                   \n                  \n  ---_ _  \n        --_  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (segundos < 55) {
          printf("\n\n              12\n\n                   \n  _ _ _                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (segundos < 57.5) {
          printf("\n\n              12\n\n     |_               \n       |                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (segundos < 60) {
           printf("\n\n              12\n           | \n           |               \n            |              \n            |    \n            |  \n9            -.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       if (minutos < 2.5){
            printf("\n\n              12\n               |\n               |\n               |\n               |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 5){
            printf("\n\n              12\n                 |\n                 |\n                |\n                |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 7.5){
            printf("\n\n              12\n                    /\n                   /\n                  /\n                 /\n                /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 10){
            printf("\n\n              12\n\n                       /\n                     /\n                   /\n                 /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 12.5){
            printf("\n\n              12\n\n                   \n                         _\n                     _ /\n                 _ /\n9              ./             3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 15){
            printf("\n\n              12\n\n                   \n                  \n                             \n                       _ _ /\n9              ._ _ /         3\n\n\n\n\n\n               6\n");
        }
        else if (minutos < 17.5){
            printf("\n\n              12\n\n                   \n                  \n                  \n                 \n9              ._ _ _ _ _ _ _ 3\n\n\n\n\n\n               6\n");
        }
        else if (minutos <20) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _ _ _   \n\n\n\n\n               6\n");
        }
        else if (minutos <22.5){
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _      \n                          |_  \n\n\n\n               6\n");
        }
        else if (minutos < 25) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                  |_ _      \n                      |_   \n                         |_      \n\n\n               6\n");
        }
        else if (minutos < 27.5) {
               printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                   |      \n                   |_   \n                     |      \n                     |_   \n                      \n               6\n");
        }
        else if(minutos < 30) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                 |      \n                 |_    \n                   |      \n                   |  \n                   |\n               6\n");
        }
        else if (minutos < 32.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n               |     \n               |      \n               |  \n               |\n               6\n");
        }
        else if (minutos < 35) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n              |     \n              |      \n             |  \n             |\n               6\n");
        }
        else if (minutos < 37.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n              /      \n             |     \n             |      \n            /  \n           |\n               6\n");
        }
        else if (minutos < 40) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9             _.              3\n            _/      \n          _/     \n        _/      \n      _/  \n     /    \n               6\n");
        }
        else if (minutos < 42.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9               .              3\n           _ _ /      \n     _ _ /     \n    / \n    \n         \n               6\n");
        }
        else if (minutos < 45) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9         _ _ _.              3\n       _ /      \n   _ /     \n      \n    \n         \n               6\n");
       }
        else if (minutos < 47.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9  _ _ _ _ _ _.              3\n            \n  \n      \n    \n         \n               6\n");
        }
        else if (minutos < 50) {
          printf("\n\n              12\n\n                   \n                  \n                   \n  --_ _ _ _  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (minutos < 52.5) {
          printf("\n\n              12\n\n                   \n                  \n  ---_ _  \n        --_  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (minutos < 55) {
          printf("\n\n              12\n\n                   \n  _ _ _                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (minutos < 57.5) {
          printf("\n\n              12\n\n     |_               \n       |                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (minutos < 60) {
           printf("\n\n              12\n           | \n           |               \n            |              \n            |    \n            |  \n9            -.              3\n            \n  \n      \n    \n         \n               6\n");
       }
          if (horas < 2.5){
            printf("\n\n              12\n               |\n               |\n               |\n               |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 5){
            printf("\n\n              12\n                 |\n                 |\n                |\n                |\n               |\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 7.5){
            printf("\n\n              12\n                    /\n                   /\n                  /\n                 /\n                /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 10){
            printf("\n\n              12\n\n                       /\n                     /\n                   /\n                 /\n9              .              3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 12.5){
            printf("\n\n              12\n\n                   \n                         _\n                     _ /\n                 _ /\n9              ./             3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 15){
            printf("\n\n              12\n\n                   \n                  \n                             \n                       _ _ /\n9              ._ _ /         3\n\n\n\n\n\n               6\n");
        }
        else if (horas < 17.5){
            printf("\n\n              12\n\n                   \n                  \n                  \n                 \n9              ._ _ _ _ _ _ _ 3\n\n\n\n\n\n               6\n");
        }
        else if (horas<20) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _ _ _   \n\n\n\n\n               6\n");
        }
        else if (horas <22.5){
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                    | _ _      \n                          |_  \n\n\n\n               6\n");
        }
        else if (horas < 25) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                  |_ _      \n                      |_   \n                         |_      \n\n\n               6\n");
        }
        else if (horas < 27.5) {
               printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._ _           3\n                   |      \n                   |_   \n                     |      \n                     |_   \n                      \n               6\n");
        }
        else if(horas < 30) {
            printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              ._             3\n                 |      \n                 |_    \n                   |      \n                   |  \n                   |\n               6\n");
        }
        else if (horas < 32.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n               |     \n               |      \n               |  \n               |\n               6\n");
        }
        else if (horas < 35) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n               |      \n              |     \n              |      \n             |  \n             |\n               6\n");
        }
        else if (horas < 37.5) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9              .              3\n              /      \n             |     \n             |      \n            /  \n           |\n               6\n");
        }
        else if (horas < 40) {
           printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9             _.              3\n            _/      \n          _/     \n        _/      \n      _/  \n     /    \n               6\n");
        }
        else if (horas < 42.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9               .              3\n           _ _ /      \n     _ _ /     \n    / \n    \n         \n               6\n");
        }
        else if (horas < 45) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9         _ _ _.              3\n       _ /      \n   _ /     \n      \n    \n         \n               6\n");
       }
        else if (horas < 47.5) {
          printf("\n\n              12\n\n                   \n                  \n                   \n                 \n9  _ _ _ _ _ _.              3\n            \n  \n      \n    \n         \n               6\n");
        }
        else if (horas < 50) {
          printf("\n\n              12\n\n                   \n                  \n                   \n  --_ _ _ _  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (horas < 52.5) {
          printf("\n\n              12\n\n                   \n                  \n  ---_ _  \n        --_  \n9          --_.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (horas < 55) {
          printf("\n\n              12\n\n                   \n  _ _ _                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (horas < 57.5) {
          printf("\n\n              12\n\n     |_               \n       |                   \n       |  \n       |_ _  \n9          ---.              3\n            \n  \n      \n    \n         \n               6\n");
       }
       else if (horas < 60) {
           printf("\n\n             12\n           | \n           |               \n            |              \n            |    \n            |  \n9            -.              3\n            \n  \n      \n    \n         \n               6\n");
       }
        Sleep(1000);
        system("cls");
    }
}
