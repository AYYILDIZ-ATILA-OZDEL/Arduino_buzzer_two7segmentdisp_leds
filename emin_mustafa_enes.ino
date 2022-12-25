//Emin-Mustafa-Enes
int led1 = A2;
int led2 = A1;
int x;
//sol taraftaki display tanımı
int rinput1 = 4; 
int rinput2 = 5; 
int rinput3 = 6; 
int rinput4 = 7; 
String name;
int b = 0;
//sağ display tanımı
int linput1 = 8; 
int linput2 = 9; 
int linput3 = 10; 
int linput4 = 11; 
int t = 0;
int n=0; 
int display1;
int display2;
int button = 2;
int state = 0;
int a = 0;
int durum_dongu;
int sayac;
int buzzer = 13;
int ledR = A3;
int ledB = A4;
int ledG = A5;


void setup(){
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(13,OUTPUT);

pinMode(button,INPUT);
Serial.begin(9600);

  
}

void loop()
{
  if (t==0)
  sayi();
  
  
durum_dongu = digitalRead(2);
 
 while(durum_dongu == true )
{
   durum_dongu = digitalRead(2);
   
   Serial.println(durum_dongu);

 if(durum_dongu == true )
 {
      sayac++;
   Serial.print("sayac = ");
   Serial.println(sayac);
      delay(500);
 }

  if (sayac == 3)
  {
    sayac = 0;
  }
  else if (sayac == -1)
  {
    sayac = 2;
  }
}
   switch(sayac)
 {
  case 0:
     Serial.println("The System is in Standby Mode");
     Serial.println(n);
     analogWrite(ledR,0);
     analogWrite(ledG,0);
     analogWrite(ledB,0);

     if(durum_dongu == true )
 {
      sayac++;
   Serial.print("sayac = ");
   Serial.println(sayac);
      delay(1000);
       
 }

     break;
  // butona 2 kere basıldığında aktifleşir   
  case 2:
  
 n++;
 Serial.println("System in count-up mode");

 display1=n%10; 
 display2=n/10; 
 disp1(display1);
 disp2(display2);
 delay(1000);  
    if(n==b)
 {
   
   tone(buzzer,1000,1000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledR,255);
      delay(1000);
      analogWrite(led1,0);
      analogWrite(led2,0);    
      analogWrite(ledR,0);
      tone(buzzer,300,1000);

      analogWrite(ledB,255);
      delay(1000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledB,0);
      tone(buzzer,1000,1000);

      analogWrite(ledR,255);
      delay(1000);
      analogWrite(led1,0);
      analogWrite(led2,0);
      analogWrite(ledR,0);
      tone(buzzer,300,1000);
   
      analogWrite(ledB,255);
      delay(1000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledB,0);
      tone(buzzer,1000,1000);
      
     
      n=0; 
      
      analogWrite(ledR,0);
      analogWrite(ledG,0);
      analogWrite(ledB,0);
      analogWrite(led1,0);
      analogWrite(led2,0);
      sayac = 0;
      sayi();
      
 }
  
  break;
 //butona 1 kere basılma durumunda aktifleşir
 case 1:
 Serial.println("System in count-down mode");
 n--;
 display1=n%10; 
 display2=n/10; 
 disp1(display1);
 disp2(display2);
 delay(1000); 
     if(n==0)
 {
	sifre();
       
  

     }
  break;
 
 }  
}

//geri sayım modunda sistemi durdurmak için kullanıcıdan parolayı ister
void sifre(){
  while(x!=b)
  {
    Serial.println("Şifre giriniz :");
                   
      String Sifre;
  if (Serial.available() > 0) { 
    Sifre = Serial.readString();
    x = Sifre.toInt();
     }
    Serial.println(x);
    
tone(buzzer,500,2000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledR,255);
      delay(1000);
      analogWrite(led2, 0);
      analogWrite(led1, 0);
      analogWrite(ledR,0);
      //rgb led control
      analogWrite(ledG,255);
      delay(1000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledG,0);
      
      analogWrite(ledB,255);
      delay(1000);
      analogWrite(led2, 0);
      analogWrite(led1, 0);
      analogWrite(ledB,0);
      
      analogWrite(ledR,255);
      delay(1000);
      analogWrite(led1,255);
      analogWrite(led2,255);
      analogWrite(ledR,0);
      
      analogWrite(ledG,255);
      delay(1000);
      analogWrite(led2, 0);
      analogWrite(led1, 0);
      analogWrite(ledG,0);
      
      analogWrite(ledB,255);
      delay(1000);
      analogWrite(led1,255);
      analogWrite(led2,255);     
      analogWrite(ledB,0);

      
      
      analogWrite(ledR,0);
      analogWrite(ledG,0);
      analogWrite(ledB,0);
      analogWrite(led1,0);
      analogWrite(led2,0);
  
    
  
}
  sayi();
  
     }
//sistem başladığında kullanıcıdan n ve b olmak üzere iki değer ister
void sayi()
{
  
  Serial.println("Please enter your n: ");  
  while (Serial.available()==0) {}              
  name = Serial.readString();
  n= name.toInt();
  Serial.println("Please enter your b: "); 
  while (Serial.available()==0){}    
  b = Serial.parseInt();
  t++;
  void loop();

}
 
//!!'!'^'!'^!'^1231

//her rakamın disp1 üzerinde görünmesi için gereklidir.
void disp1(int num)
{
  if(num == 0)
  {
    digitalWrite(rinput1, LOW); 
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, LOW);
    analogWrite(led1, 255);
    analogWrite(led2, 0);
  }
  if(num == 1)
  {
    digitalWrite(rinput1, HIGH);
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, LOW);
    analogWrite(led1, 0);
    analogWrite(led2, 255);

    
  }
  if(num == 2)
  {
    digitalWrite(rinput1, LOW);
    digitalWrite(rinput2, HIGH);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, LOW);
    analogWrite(led2, 0);
    analogWrite(led1, 255);
  }
  if(num == 3)
  {
    digitalWrite(rinput1, HIGH);
    digitalWrite(rinput2, HIGH);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, LOW);
    analogWrite(led1, 0);
    analogWrite(led2, 255);

  }
  if(num == 4)
  {
    digitalWrite(rinput1, LOW);
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, HIGH);
    digitalWrite(rinput4, LOW);
    analogWrite(led2, 0);
    analogWrite(led1, 255);
  }
  if(num == 5)
  {
    digitalWrite(rinput1, HIGH);
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, HIGH);
    digitalWrite(rinput4, LOW);
    analogWrite(led1, 0);
    analogWrite(led2, 255);
  }
  if(num == 6)
  {
    digitalWrite(rinput1, LOW);
    digitalWrite(rinput2, HIGH);
    digitalWrite(rinput3, HIGH);
    digitalWrite(rinput4, LOW);
    analogWrite(led2, 0);
    analogWrite(led1, 255);
  }
  if(num == 7) 
  {
    digitalWrite(rinput1, HIGH);
    digitalWrite(rinput2, HIGH);
    digitalWrite(rinput3, HIGH);
    digitalWrite(rinput4, LOW);
    analogWrite(led2, 255);
    analogWrite(led1, 0);

  }
  if(num == 8) 
  {
    digitalWrite(rinput1, LOW);
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, HIGH);
    analogWrite(led2, 0);
    analogWrite(led1, 255);
  }
  if(num == 9)
  {
    digitalWrite(rinput1, HIGH);
    digitalWrite(rinput2, LOW);
    digitalWrite(rinput3, LOW);
    digitalWrite(rinput4, HIGH);
    analogWrite(led2, 255);
    analogWrite(led1, 0);

  }
}
//her rakamın disp2 üzerinde görülmesi için gereklidir.
void disp2(int num)
{
  if(num == 0)
  {
    digitalWrite(linput1, LOW);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, LOW);
 
    
  }
  if(num == 1)
  {
    digitalWrite(linput1, HIGH);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, LOW);
 
  }
  if(num == 2)
  {
    digitalWrite(linput1, LOW);
    digitalWrite(linput2, HIGH);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, LOW);
 
  }
  if(num == 3)
  {
    digitalWrite(linput1, HIGH);
    digitalWrite(linput2, HIGH);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, LOW);

  }
  if(num == 4)
  {
    digitalWrite(linput1, LOW);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, HIGH);
    digitalWrite(linput4, LOW);

  }
  if(num == 5) 
  {
    digitalWrite(linput1, HIGH);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, HIGH);
    digitalWrite(linput4, LOW);

  }
  if(num == 6) 
  {
    digitalWrite(linput1, LOW);
    digitalWrite(linput2, HIGH);
    digitalWrite(linput3, HIGH);
    digitalWrite(linput4, LOW);
   
  }
  if(num == 7) 
  {
    digitalWrite(linput1, HIGH);
    digitalWrite(linput2, HIGH);
    digitalWrite(linput3, HIGH);
    digitalWrite(linput4, LOW);
  
  }
  if(num == 8) 
  {
    digitalWrite(linput1, LOW);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, HIGH);
 
  }
  if(num == 9)
  {
    digitalWrite(linput1, HIGH);
    digitalWrite(linput2, LOW);
    digitalWrite(linput3, LOW);
    digitalWrite(linput4, HIGH);

  }
}
