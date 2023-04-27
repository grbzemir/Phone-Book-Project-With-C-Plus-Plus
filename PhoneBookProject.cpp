#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

string ad[30];
string soyad[30];
string phoneNo[30];
string mobileNo[30];
string faxNo[30];
string email[30];
string adres[30];

int sayac = -1 ; // counter for the number of contacts

// karşılıklı deger atamak icin temp kullanilacaktır!

int Dogrula(string tmpad , string tmpsoyad)
 
 {


    for (int i=0; i<=sayac; i++)

    {

        if (tmpad == ad[i] && tmpsoyad == soyad[i])

        {

            return 0;

        }
        
    }

    return 1;
        
    }

   void KisiEkle()
    
    {

        string tmpad ="";
        string tmpsoyad ="";

        cout<<"Ad: ";
        cin>>tmpad;

        cout<<"Soyad: ";
        cin>>tmpsoyad;

        if (Dogrula(tmpad , tmpsoyad) == 1)

        {
            sayac++;
            ad[sayac] = tmpad;
            soyad[sayac] = tmpsoyad;
           
           
        }

        else

        {

            cout<<"Bu kisi zaten kayitli!"<<endl;
            return ;

        }
        
        cout<<"Cep Telefon Numarasi: ";
        cin>>phoneNo[sayac]; // phone number

        cout<<"Telefon Numarasi: ";
        cin>>mobileNo[sayac]; // mobile number

        cout<<"Fax Numarasi: ";
        cin>>faxNo[sayac]; // fax number

        cout<<"Email: ";
        cin>>email[sayac]; // email

        cout<<"Adres: ";
        cin>>adres[sayac]; // address


    }


    void Yazdir(int tmpsayac)

    {

        if (ad[tmpsayac] == "" && soyad[tmpsayac] == "")

            
            return;

        if(sayac > -1 )

        {

            cout<<"Ad: "<<ad[tmpsayac]<<endl;
            cout<<"Soyad: "<<soyad[tmpsayac]<<endl;
            cout<<"Cep Telefon Numarasi: "<<phoneNo[tmpsayac]<<endl;
            cout<<"Telefon Numarasi: "<<mobileNo[tmpsayac]<<endl;
            cout<<"Fax Numarasi: "<<faxNo[tmpsayac]<<endl;
            cout<<"Email: "<<email[tmpsayac]<<endl;
            cout<<"Adres: "<<adres[tmpsayac]<<endl;
            cout<<"Devam etmek icin bir tusa basiniz..."<<endl;
            getch();
            

        }

    }

    void YazdirHepsini()

    {

        if (sayac > -1)

        {

            for (int i=0 ; i<=sayac; i++)

            {

                Yazdir(i);
                
            }
            
        }
    }

    void BaglantiyiDuzenle(int tmpsayac)

    {

        string tmpad ="";
        string tmpsoyad ="";

        cout<<"Ad: ";
        cin>>tmpad;

        cout<<"Soyad: ";
        cin>>tmpsoyad;


        if (Dogrula(tmpad,tmpsoyad) )

        {

            ad[tmpsayac] = tmpad;
            soyad[tmpsayac] = tmpsoyad;
        
           
        }

        else

        {

            cout<<"Bu kisi zaten kayitli!"<<endl;
            return ;

        }
        
        cout<<"Cep Telefon Numarasi: ";
        cin>>phoneNo[tmpsayac]; // mobile number

        cout<<"Telefon Numarasi: ";
        cin>>mobileNo[tmpsayac]; // mobile number

        cout<<"Fax Numarasi: ";
        cin>>faxNo[tmpsayac]; // fax number

        cout<<"Email: ";
        cin>>email[tmpsayac]; // email

        cout<<"Adres: ";
        cin>>adres[tmpsayac]; // address


    }

    void BaglantiyiSil(int tmpsayac) 

    {

        ad[tmpsayac] = "";
        soyad[tmpsayac] = "";
        phoneNo[tmpsayac] = "";
        mobileNo[tmpsayac] = "";
        faxNo[tmpsayac] = "";
        email[tmpsayac] = "";
        adres[tmpsayac] = "";

    }

   int BaglantiyiBul()

   {

	 if( sayac < 0 )

	 	 return -1;
	 	
	 string tmpad;
     string tmpsoyad;

	 cout<<"Ad: ";
	 cin>>tmpad;

     cout<<"Soyad: ";
     cin>>tmpsoyad;

	 for(int i=0; i<=sayac; i++)

     { 
	 	if( ad[i] == tmpad && soyad[i] == tmpsoyad )

        {

	 		return i;
	 	}

     }

 	 return 1; 
}


    int main()

    {
        
        system("color 3F");
        char secim;

        do 

        {

            system("cls");
            cout<<"[1] Kisi Ekle"<<endl;
            cout<<"[2] Kisi Bul"<<endl;
            cout<<"[3] Kisi Duzenle"<<endl;
            cout<<"[4] Kisi Sil"<<endl;
            cout<<"[5] Hepsini Yazdir"<<endl;
            cout<<"[6] Cikis"<<endl;
            cout<<"Seciminiz (1-6): ";
            cin>>secim;

            switch (secim)

            {

            case '1':
            
            {
                KisiEkle();
                cout<<"Kisi Basariyla Eklendi!"<<endl;
                cout<<"Devam etmek icin bir tusa basiniz..."<<endl;
                getch();
                break;
             
            }

            case '2':
            
            {
                YazdirHepsini();
                break;

            }

            case '3':

            {

            int tmpsayac = BaglantiyiBul();

            if (tmpsayac > -1)

            {

                Yazdir(tmpsayac);

                
            }

            break;
        }

        case '4':
        
     

			{

				 int tmpsayac = BaglantiyiBul();
				 if( tmpsayac > -1 )

                 {

				      BaglantiyiDuzenle(tmpsayac);				 	
				 }

		 		 break;
			}

    case '5':
    
    	
			{

				 int tmpsayac = BaglantiyiBul();
				 if( tmpsayac > -1 )

                 {
				      BaglantiyiSil(tmpsayac);				 	
				 }

		 		 break;

			}

    case '6':
    
    {
        continue;
        break;


    }

    }   
        
        
    }
        while(secim != '6');

        return 0;

    }





  