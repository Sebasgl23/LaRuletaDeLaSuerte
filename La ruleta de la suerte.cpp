/*Sebastian Guardo Lugo-6901620002 ; Oscar Castillo- 6901620038*/
#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include <string.h>//Para los vectores *ncancion
#include <windows.h>//Para las funciones Sleep()
#include <stdlib.h>//Para cambiar el color


using namespace std;
int main(){
    system ("color 9F" );
	int saldo,opcion;
	string pista;
	
	cout<<" ***************************************"<<endl;
	cout<<" *Bienvenidos a La Ruleta De La Fortuna* "<<endl;
	cout<<" ***************************************"<<endl;
	cout<<"           "<<endl;
	cout<<"           "<<endl;
	cout<<"           "<<endl;
	cout<<"           "<<endl;
	cout<<"Elija la dificultad del juego:"<<endl;
	cout<<"           "<<endl;
	cout<<"1) FACIL (480 $) "<<endl;
	cout<<"           "<<endl;
    cout<<"2) MEDIO (320 $)"<<endl;
    cout<<"           "<<endl;
	cout<<"3) DIFICIL (120 $)"<<endl;
	cout<<"           "<<endl;
	
	
	
	
		int aux1=0;
			do{
                cin>>opcion;
                cout<<"           "<<endl;
				if(opcion==1 || opcion==2 || opcion==3 ){
					aux1=1;
				}else{
					cout<<"Opcion no valida, inserte una opcion valida"<<endl;
				}
			}while(aux1!=1);
			
	if(opcion==1){
		saldo=480;
	}else if(opcion==2){
		saldo=320;
	}else{
		saldo=120;
	}
	system("cls");
	cout<<"Su Saldo Es De: "<<saldo<<" $"<<endl;
	cout<<"           "<<endl;
	
	
		char *ncancion;
		char *autor;
		srand(time(NULL));
		
	    
		cout<<"Escoja Una Categoria :"<<endl;
		cout<<"           "<<endl;
		cout<<"1) Deportes"<<endl;
		cout<<"           "<<endl;
		cout<<"2) Cultura General"<<endl;
		cout<<"           "<<endl;
		cout<<"3) Musica"<<endl;
		cout<<"           "<<endl;
		 aux1=0;
			do{
			cin>>opcion;
				if(opcion==1 || opcion==2 || opcion==3 ){
					aux1=1;
				}else{
					cout<<"Eleccion Invalida"<<endl;
				}
			}while(aux1!=1);
			
		if(opcion==1){
			
		 	 int aux=rand()%4;
		 
		 	 if(aux==1){
		 		ncancion="REAL_MADRID";
		 		pista="Ganador de la Champions temporada 2016-2017";
		 	
		 		
			 }else if(aux==2){
			 	ncancion="ATLETICO_DE_MADRID";
			 	pista="Tercer puesto de la Liga española temporada 2016-2017";
			 	
			 }else if(aux==3){
			 	ncancion="AS_DE_MONACO";
			 	pista="Ganador de La Ligue 1 temporada 2016-2017";
			 	
			 }else{
			 ncancion="JUAN_MANUEL_LILLO";
			 pista="Entrenador actual de Atletico Nacional";
			 }
			
		}else if(opcion==2){
		 int aux=rand()%4;
		 	
		 	 if(aux==1){
		 	 	ncancion="SIMON_JOSE_BOLIVAR";
			 	pista="Libertador venezolano";
			 	
			 }else if(aux==2){
			 	ncancion="ALBERTO_LLERAS_CAMARGO";
			 	pista="Primer presidente del frente nacional";
			 	
			 }else if(aux==3){
			 	ncancion="DOMINGO_CAICEDO";
			 	pista="Ultimo presidente de la Gran Colombia";
			 	
			 }else{
			 	ncancion="AMSTERDAM";
			 	pista="Capital de Holanda";
			 }
		}else{
		 int aux=rand()%4;

		 	
		 	 if(aux==1){
		 		ncancion="RENE_PEREZ_JOGLAR";
			 	pista="Artista nominado a 9 Grammys";
			 	
			 }else if(aux==2){
			 	ncancion="JUAN_LUIS_GUERRA";
			 	pista="Tiene 2 premios Billboard y 18 Grammys";
			 	
			 	
			 }else{
			 	ncancion="DIOMEDES_DIAZ";
			 	pista="Cantante de vallenato";
			 }
			 
		}
		
	system("cls");
	int longitud=strlen(ncancion);
	char ocancion[longitud];
	for(int i=0;i<=longitud;i++){
		ocancion[i]='_';
		if(ncancion[i]=='_'){
			ocancion[i]=' ';
		}
	}
	ocancion[longitud]=NULL;	
	
	

do{
system("cls");

	cout<<""<<ocancion<<endl;
	cout<<"           "<<endl;
	cout<<"La rueda esta girando"<<endl;
	cout<<"                 "<<endl;
	Sleep(2000);
	srand(time(NULL));
	opcion= rand()%7;
	
	if(opcion==0){
		cout<<"Perdiste 60 $"<<endl;
		cout<<"                 "<<endl;
		saldo=saldo-60;
	}else if(opcion==1){
		cout<<"Perdiste 120 $"<<endl;
		cout<<"                 "<<endl;
		saldo=saldo-120;
	}else if(opcion==2){
		cout<<"No ganas nada ni pierdes nada"<<endl;
		cout<<"                 "<<endl;
	}else if(opcion==3){
		cout<<"Ganaste 60 $"<<endl;
		cout<<"                 "<<endl;
		saldo=saldo+60;
	}else if(opcion==4){
		cout<<"Ganaste 120 $"<<endl;
		cout<<"                 "<<endl;
		saldo=saldo+120;
	}else if(opcion==5){
		cout<<"Ganaste 240 $"<<endl;
		cout<<"                 "<<endl;
		saldo=saldo+240;
	}else{
		cout<<"Has ganado una pista y 120 puntos"<<endl;
		cout<<"                 "<<endl;
		cout<<"La pista es: "<<pista<<endl;
		cout<<"                 "<<endl;
		saldo=saldo+120;
	}

	if(saldo<=0){
		cout<<"Lo sentimos has perdido. ";
		Sleep(2000);
		return 0;
	}
	cout<<endl<<endl;
	

	int opcion1;

	cout<<"Opciones de jugador:"<<endl;
	cout<<"                 "<<endl;
	cout<<"1) Escribir Enunciado"<<endl;
	cout<<"                 "<<endl;
	cout<<"2) Comprar Vocal"<<endl;
	cout<<"                 "<<endl;
	cout<<"3) Escribir Consonante"<<endl;
	cout<<"                 "<<endl;
	cout<<"Su saldo es de: "<<saldo;
	cout<<"                 "<<endl;
	cout<<ocancion<<endl;

			aux1=0;
			do{
			cin>>opcion1;
				if(opcion1==1 || opcion1==2 || opcion1==3 ){
					aux1=1;
				}else{
					cout<<"Eleccion Invalida"<<endl;
				}
			}while(aux1!=1);
	
	
	if(opcion1==1){ 
		char frase[20];
		cout<<"Escriba La Frase Completa"<<endl;
		fflush(stdin);
		scanf("%[^\n]",&frase);
		fflush(stdin);
		int i=0;

		do{
			if(frase[i]==' '){
				frase[i]='_';
			}
			i++;
		}while(frase[i]!=NULL);

		if(strcmp(ncancion,frase)==0){
			cout<<"GANASTE, FELICITACIONES"<<endl;
			cout<<"                 "<<endl;
				Sleep(2000);
				return 0;
		}else{
			cout<<"Has Perdido "<<endl;
			cout<<"                 "<<endl;
			cout<<"El Enunciado era: "<<ncancion<<endl;
			cout<<"                 "<<endl;
			Sleep(2000);
			return 0;
		}
		
	
	}else if(opcion1==2){
		saldo= saldo-240;
		cout<<"Esa Vocal Te Costo 240 $"<<endl;
		char cons;
			cout<<"Escriba Una Vocal"<<endl;
			int aux=0;
	
			do{
			cin>>cons;
				if(cons=='a' || cons=='e' || cons=='i' || cons=='o' || cons=='u'){
					aux=1;
				}
			}while(aux!=1);
			

		int contador=0;
		for(int i=0;i<=longitud;i++){
			if(ncancion[i]==cons){
				ocancion[i]=cons;
				contador++;
			}
		}
		

		if(contador>0){
			saldo=saldo+(60*contador);
			cout<<"FELICIDADES, Adivinaste Una Letra"<<endl;
			cout<<ocancion<<endl;
		}else{
			saldo=saldo-240;
			cout<<ocancion<<endl;
		}
		

		if(saldo<=0){
		cout<<"Has Perdido"<<endl;
		cout<<"                 "<<endl;
		cout<<"El Enunciado era : "<<ncancion<<endl;
		Sleep(2000);
		return 0;
		}
		
		
		contador=0;
		for(int i=0;i<=longitud;i++){
		if(ocancion[i]=='_'){
			contador++;
		}
		}
		if(contador==0){
			cout<<"GANASTE, FELICIDADES";
			cout<<"                 "<<endl;
			cout<<"                 "<<endl;
			Sleep(2000);
			return 0;
		}
	    Sleep(2000);
	}else{ 
			char cons;
			cout<<"Escriba Una Consonante"<<endl;
			int aux=0;
			do{
			cin>>cons;
				if(cons!='a'&&cons!='e'&&cons!='i'&&cons!='o'&&cons!='u'){
					aux=1;
				}
			}while(aux!=1);
			
			int contador=0;
		for(int i=0;i<=longitud;i++){
			if(ncancion[i]==cons){
				ocancion[i]=cons;
				contador++;
			}
		}
		if(contador>0){
			saldo=saldo+(60*contador);
			cout<<"Felicidades Adivinaste Una Letra"<<endl;
			cout<<ocancion<<endl;
		}else{
			saldo=saldo-120;
			cout<<ocancion<<endl;
		}
		
		
		if(saldo<=0){
		cout<<"Has Perdido "<<endl;
		
		cout<<"El Enunciado era "<<ncancion<<endl;
		Sleep(2000);
		return 0;
		}
		
		contador=0;
		for(int i=0;i<=longitud;i++){
		if(ocancion[i]=='_'){
			contador++;
		}
		}
		if(contador==0){
			cout<<"GANASTE, FELICITACIONES";
			cout<<"                 "<<endl;
			Sleep(2000);
			return 0;
		}
		Sleep(5000);
	}
}while(true);
return 0;	
}
