/*Programa para controlar um robo humanoide
  Equipe FIRE - Outubro de 2018
  Instituto Federal de Minas Gerais - Campus Ouro Preto
  ******** ARDUINO PRIMARIA **********
*/

//---------------------------------------------------------------------------- INCLUDE:
//Usando SoftwareSerial para deixar a serial de Hardware livre para conexao com PC
#include<SoftwareSerial.h> 

//Biblioteca personalizada para controle de servos do Bipede da FIRE
#include "ServoBip.h"

//Biblioteca padrao para controle de servos da arduino
#include "Servo.h"
//---------------------------------------------------------------------------- DEFINE:

#define TX 13   //Pino TX da SoftwareSerial
#define RX 12   //Pino RX da SoftwareSerial

//---------------------------------------------------------------------------- OBJETOS:

ServoBip ombroE(1,180,0,90);
ServoBip ombroD(2,180,0,90);
ServoBip bracoE(3,180,0,90);
ServoBip bracoD(4,180,0,90);
ServoBip maoE(5,180,0,90);
ServoBip maoD(6,180,0,90);
ServoBip quadrilE(7,180,0,90);
ServoBip quadrilD(8,180,0,90);
ServoBip coxaE(9,180,0,90);
ServoBip coxaD(10,180,0,90);
ServoBip joelhoE(11,180,0,90);
ServoBip joelhoD(12,180,0,90);
ServoBip canelaE(13,180,0,90);
ServoBip canelaD(14,180,0,90);
ServoBip peE(15,180,0,90);
ServoBip peD(16,180,0,90);
ServoBip cabeca(17,180,0,90);

//---------------------------------------------------------------------------

void setup()
{
   maoE.center();
}

void loop()
{
  canelaE.test_range(200);
}


