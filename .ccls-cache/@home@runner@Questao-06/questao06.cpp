#include <iostream>

float media(float av1, float av2){
    float media = 0;
    media = (av1+av2)/2;
    return media;
}

float media_av3(float av1, float av2){
    float av3 = 0, media = 0;
    if(av1 > av2){
        std::cout << "Digite a AV3: " << std::endl;
        std::cin >> av3;
        media = (av1 + av3)/2;
    }else{
        std::cout << "Digite a AV3: " << std::endl;
        std::cin >> av3;
        media = (av3 + av2)/2;
    }if (media >= 6 && av3 > 4){
        std::cout << "Parabens voce passou.";
    }else{
        std::cout << "Voce nao passou. ='( ";
    }
    return media;
}

void verifica_media(float media, float av1, float av2){
    float media_verifica = 0;
    if (media >= 6 && av1 >= 4 && av2 >= 4){
        std::cout << "Parabens voce passou.";
    }else if ( av1 < 4 && av2 < 4 ){
        std::cout << "Voce nao passou. :'( ";
    }else if ( av1 < 4 || av2 < 4 || media < 6 ){
        media_verifica = media_av3(av1, av2);
    }
}

void entrada_de_dados(){
    float av1 = 0, av2 = 0, media_final = 0;
    std::cout << "Digite a AV1: " << std::endl;
    std::cin >> av1;
    std::cout << "Digite a AV2: " << std::endl;
    std::cin >> av2;
    media_final = media(av1, av2);
    verifica_media(media_final, av1, av2);
}

int main(){
    entrada_de_dados();
    return 0;
}