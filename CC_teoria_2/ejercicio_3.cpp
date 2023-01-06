#include <iostream> // libreria de operaciones de entrada y salida
#include <conio.h> // libreria de funciones basicas  de entrada y salida
using namespace std; // dar acceso al espacio de nombres

main(){  // funcion principal
    char c, cr[2];  //declaracion de 2 variables
    enum tipo_estudiante {flojo, atarantado, estudioso, nerd};
    int seleccion;
    do{ // Repetir la instruccion almenos una vez, hasta que satisfaga la condicion (while)
        cout<<"¿Como estudias para un examen?";
        do{   //Crear mi menu de opciones, que se inicializaran una vez almenos
            cout<<endl<<"elige una de las siguientes opciones: \n";
            cout<<" 0 : no estudio"<<endl;
            cout<<" 1 : estudio un dia antes"<<endl;
            cout<<" 2 : repaso cada clase y pregunto mis dudas"<<endl;
            cout<<" 3 : estudio a todas horas, todos los dias"<<endl;
            cin>>seleccion;
        }
        while ((seleccion<flojo)|| (seleccion > nerd));  // condiciones a evaluar en el do
        switch(seleccion){  //se seleccionara la  situaciones de acuerdo a lo que se requiera
            case flojo:
            cout<<"Mejor maneja un taxi! \n";
            break;
            case atarantado:
            cout<<"Piensa que el examen ya es mañana \n";
            break;
            case estudioso:
            cout<<"Estudia ingles y elige a que pais vas a pasear";
            break;
            case nerd:
            cout<<"tambien hay personas, arte, deportes, etc  \n"<<"Vive!!";
            break;
        };
        cout<<"oprime ""Esc"" para terminar"<<endl; //se crea una salida del programa
        c = getch(); // getch, permite guardar una letra en la variable 
        cin.getline(cr,2); 
    }
    while(27 != c); // Condicion a evaluar en el primer do
    cout<<"Adios!"; 
    return 0;//Finalizacion con exito el programa
}
