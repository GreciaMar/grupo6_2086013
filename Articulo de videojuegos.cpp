#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numero, opcion;
    float preciouni, total;
    string articulo, lanzamiento, clasificacion, caracteristicas, descripcion, genero;

    cout << "\n\t ***Articulos de Videojuegos*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n"
    ;
    cin >> opcion;
    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "\nIngrese el numero de articulo \n";
        cin >> numero;
        
        cout << "\nIngrese el nombre del articulo\n";
        cin.ignore();
        getline(cin, articulo);     
        
        cout << "\nIngrese el año de lanzamiento del articulo\n";
        cin.ignore();
        getline(cin, lanzamiento);
        
        cout << "\nIngrese la clasificacion del articulo\n";
        cin.ignore();
        getline(cin, clasificacion);
        
        cout << "\nIngrese las caracteristicas del articulo\n";
        cin.ignore();
        getline(cin, caracteristicas);
        
        cout << "\nIngrese la descripcion del articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        
        cout << "\nIngrese el genero del articulo\n";
        cin.ignore();
        getline(cin, genero);
        
        cout << "\nIngrese el precio unitario del articulo\n";
        cin >> preciouni;
        
        total=preciouni*1.16;
        cout<< "\nEl total del producto sera:\n" << total << endl;
        system("pause");
        system("clean");
		return main();
		break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("clean"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "\nGracias por utilizar el programa \n"<<endl;
        break;

    default:
        cout << "\nIngrese una opcion correcta \n"<<endl;
        return main();

    }
    return 0;

}

