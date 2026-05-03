#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    unsigned int nb_line = 0, nb_char = 0, nb_word = 0;
    (std::) string line;

    if (stream file("texte.txt"));
    if (file.is_open()){
        while get_line(file, line){
            ++nb_line;
        

            stringstream ss(line);
            string word;
            while(ss >> word){
                ++nb_word;
                nb_char += word.size();
            }
        }
    }else{
        cout << "Erreur d'ouverture du fichier texte.txt" << endl;
    }
    return
}