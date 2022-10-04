/**********************************************************************************************************************
 // FileName:        ADC.hpp
 // Program version: Replit
 // Company:         TECNM - ITCH - Departamento Electrica Electronica - Especialidad de sistemas embebidos
 // Description:     Declaracion de la clase ADC
 // Authors:         Jesus Adrian Guerra Delgado
 // Updated:         09/2022
 //Nota: Declaracion de los miembros, metodos y constructores
************************************************************************************************************************/
//30-09-2022
#ifndef ADC_HPP
#define ADC_HPP
using namespace std;
#include<iostream>
/************************************************
*                 CLASE
************************************************/
class ADC{
  private:
    int _Resolucion;
    float _frec_m;
    int _canal;
    float _voltaje;
    int _digital;
    int _num;
    static int n_canales;
  public:    
    /************************************************
    *                 CONSTRUCTOR
    ************************************************/
    ADC(int, float, int, float, int);
    ADC();
    /************Metodo para mostrar los datos de la clase************/
    void muestradatos();
    /************Metodo Capturador************/
    void captura();
    /************GETTERS************/
    int getdigital();
    static int getn_canales();
    /************SETERS************/
    void capVoltaje();
};

#endif