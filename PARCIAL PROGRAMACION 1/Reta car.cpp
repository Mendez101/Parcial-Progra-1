//Programa hecho por : Enrique Antonio Mendez Caceres
//Ultima Actualisacion 10/11/18.


//  Bibliotecas
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 
// incluye los archivos de biblioteca requeridos
using namespace std;
class customer // Cliente

{
	private:
	public:
	string customername;
	string fe;
    string carmodel;
    string carnumber;
    char data;
    char op;
    char kk;
    char lic;
    // Variables definidas 
};
class rent : public customer // clase eliminada de clase cliente
{
	public:
	int days=0,rentalfee=0; // variables int adicionales 
	void data()
	{


do{
        cout <<"Menu"<<endl; // dando al usuario la opci�n de seleccionar
       cout<<"Presione 'g' Rentar Auto."<<endl;
	    cout<<"PRESIONE 'd' Nuevo auto."<<endl;
        cout<<"PRESIONE 'n' Nuevo cliente."<<endl;
        cout<<"Para salir precione x"<<endl;
        cout<<endl;
        cout<<"Seleccione una de las opciones anteriores: ";
        cin >>fe;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(fe=="d")
 {
 
		cout<<"Llame a enrique Mendez"<<endl;
		 ifstream inA("A.txt"); //displaying details of model A
         char str[200];
         system("exit");
         system ("CLS");
         
sleep(2);
  }
  if(fe=="n")
  {
  
	cout<<"NUEVOS CLIENTES"<<endl;
		  
       cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Llene los datos siguientes "<<endl; 
    cout<<"NOMBRE COMPLETO : ";cin >> op;
    cout<<endl;
    cout<<"LICENCIA:" ;cin>>lic;
    cout<<endl;
    cout<<"Numero de dui:" ;cin>>kk;
	cout<<endl;
     sleep(2);
     system ("CLS");
     
 }
 if(fe=="g")
 {
	     cout << "Nombre de cliente: "; //Datos del Usuario
    cin >> customername;
    cout<<endl;
		 ifstream inC("C.txt"); 
         char str[200];
         system ("CLS");
         
     sleep(2);
}  
if(fe !="d" && fe !="n" &&  fe !="g" )
     
      cout<<"Modelo de carro no vAlido. Intentalo de nuevo!"<<endl;
        }
while(fe !="d" && fe !="n" &&  fe !="g" );
    cout<<"--------------------------------------------------------------------------"<<endl;



    do{
        system ("tito.png");
		cout <<"Autos disponibles"<<endl; // dando al usuario la opci�n de seleccionar
		cout<<"PRESIONE 'A' para Ferrari Blanco 2006."<<endl;
        cout<<"PRESIONE 'B' para Tesla Naranja  2017."<<endl;
        cout<<"Presione 'C' para Ford  Rojo     2018."<<endl;
        cout<<endl;
        cout<<"Seleccione un auto de las opciones anteriores: ";
        cin >>carmodel;
        cout<<endl;
        system ("CLS");
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 
		cout<<"Has elegido Ferrari 2006"<<endl;
		 ifstream inA("A.txt"); 
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
         system ("CLS");
}
sleep(2);
  }
  if(carmodel=="B")
  {
  
		cout<<"Has elegido Tesla model 2017"<<endl; //Opcion que se a determinado
		 ifstream inB("B.txt"); 
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         system ("CLS");
         
     }
     sleep(2);
 }
 if(carmodel=="C")
 {
	     cout<<"Has elegido Ford model 2018"<<endl;////Opcion que se a determinado
		 ifstream inC("C.txt"); 
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
         system ("CLS");
     }
     sleep(2);
}  
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" )//Bucle para que el usuario coloque lo nesesario
     
      cout<<"Modelo de carro no vAlido. Intentalo de nuevo!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Por favor proporcione la siguiente informacion: "<<endl; 
// Obtenci�n de datos del usuario relacionados con el servicio de alquiler.
    cout<<"Por favor seleccione un n�mero de carro : ";
    cin >> carnumber;
    cout<<"N�mero de dias que desea alquilar el carro. : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()//se calcula eL presio por dias
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculo de la renta. Por favor espera......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*30;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*40;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*50;
    }
void showrent()//Fatuta de cliente
    {
    cout << "                             Factura del cliente              "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	| No Factura. :"<<"------------------------|"<<setw(10)<<"10000"<<" |"<<endl;
    cout << "	| Nombre del cliente:"<<"------------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "	| Modelo de carro :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "	|  No. carro :"<<"-------------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "	| Numero de dias :"<<"---------------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "	| Su cantidad de alquiler es :"<<"---------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "	| La cantidad total de alquiler es :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "	 ________________________________________________________"<<endl;
    cout << "	 # Esta es una factura generada por computadora y "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout << "	Se le recomienda pagar la cantidad antes de la fecha de vencimiento."<<endl;
    cout << "	De lo contrario se aplicar� una multa."<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    int f;
    cout<<"Pulse cualquier tecla para continuar"<<endl;
    cin>>f;
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};
class welcome //Se muestra la pantalla de inicio
{
	public:
	int welcum()
	{
 ifstream in("Bienbenido Enrique.txt"); //displaying welcome ASCII image text on output screen

  if(!in) {
    cout << "Cargando Archivos :v.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);  // delimita por defecto a '\ n'
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
    cout <<"                                       ______________                       "<<endl;
    cout <<"                                  _.-''         || \ `-.                    "<<endl;
    cout <<"                             _.-''              ||   \  `-._       -=====/  "<<endl;
    cout <<"                   _____..-''.<(]_______________||_____\    `-------/--/.   "<<endl;
    cout <<"         _..---''''__      /  ``     ____________|__________.....________\  "<<endl;
    cout <<"   _.-'''__.-.='_`_`-.\---|---'''''''       ` `  |   __  /.-'_`_`-.\      \."<<endl;
    cout <<" .' --''' .'/ /  |  \ \`. |  Mendez  Caceres    /   '='.'/ /  |  \ \`.  __.|"<<endl;
    cout <<" |--------|| |``-O-''| ||----------------------/-------|| |``-O-''| ||''  / "<<endl;
    cout <<" '''----..| \\\\/_ _\/ / |______________________________|\\\\/_ _\/ / `--'  "<<endl;
    cout <<"             `-.....-'                                    `-.....-'         "<<endl;

    cout << endl << "Sisten mendez" << endl;

  sleep(1);
  cout<<"\RENTA DE CARROS MENDEZ :V ....."<<endl;
  sleep(1); // funci�n que espera (n) segundos
  system ("CLS"); //Limpiar panntalla
}

};
int main()
{
welcome obj1; //objeto creado para la clase de bienvenida
obj1.welcum(); //Funcion 
rent obj2; 
/// El objeto creado para la clase de alquiler 
obj2.data();
// El objeto creado para calcular precio
obj2.calculate();
obj2.showrent();

return 0; //final del programa
}


