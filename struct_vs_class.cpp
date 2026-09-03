/*
 * Course: COEN 2220 - Programming 2
 * Name: Mario A. Marrero Colón
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Converting a struct to a class with encapsulation
 * Due date: Sept 03, 2026
 */

#include <iostream>
using namespace std;

/*struct RectangleStruct
{
    double width;
    double height;
};
*/
// TODO (Parte F): Declara e implementa RectangleClass aqui abajo,
// convirtiendo RectangleStruct a una class con encapsulacion real:
//   - width y height como miembros privados
//   - setWidth(double) y setHeight(double) que solo acepten valores > 0
//     (si el valor no es valido, no lo asignes, y no hace falta mensaje de error aqui)
//   - getWidth() const y getHeight() const
//   - getArea() const

class RectangleClass
{
    private:
        double width;
        double height;
    
    public:
        void setWidth(double w)
        {
            if (w > 0)
            {
                width = w;
            }
            else
            {
                width = 0;
            }
        }
        void setHeight(double h)
        {
            if (h > 0)
            {
                height = h;
            }
            else
            {
                height =0;
            }
         }
         getWidth() const {return width;}
         getHeight() const {return height;}
         getArea() const {return width * height;}

};

int main() {
    // Esto compila hoy, sin ningun problema - y ese es el problema:
    /*RectangleStruct r;
    r.width = -5.0;    // no tiene sentido, pero nada lo impide
    r.height = 3.0;
    cout << "Struct area (con ancho invalido): " << (r.width * r.height) << endl;*/

    // TODO (Parte F): Crea un objeto de tipo RectangleClass, intenta asignarle un
    // width negativo con setWidth(), y confirma que NO se acepta //Class area (con ancho invalido): 0
    // (el area calculada con datos validos previos, si los hubo,
    // deberia quedar intacta).

    RectangleClass rc;
    rc.setWidth(5.0);
    rc.setHeight(6.7);
    cout << "Class area (con ancho valido): " << rc.getArea() << endl;
    // Class area (con ancho valido): 33

    return 0;
}