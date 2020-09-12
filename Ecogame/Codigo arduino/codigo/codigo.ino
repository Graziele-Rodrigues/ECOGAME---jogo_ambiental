int aux = 0, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0, aux7 = 0;
int p1, p2, p3, p4, p5, p6, p7, p8;
# define led1 1
# define led2 3
# define led3 6
# define led4 8
# define  led5 9

void setup() {

  Serial.begin(9600);
  Serial3.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
}

void loop() {
  Serial.println(p4);
  p1 = analogRead(A0);
  p2 = analogRead(A2);
  p3 = analogRead(A5);
  p4 = analogRead(A7);
  p5 = analogRead(A8);
  p6 = analogRead(A10);
  p7 = analogRead(A12);
  p8 = analogRead(A14);
  Serial.println(p2);
  if ((p1 >= 100 && p1 <= 260) && aux != 1) { //resistor 200
    Serial.print("a");
    Serial3.print("a");
    aux = 1;
  }
  if ((p2 >= 300 && p2 <= 415) && aux1 != 1) { //resistor 510
    Serial.print("b");
    Serial3.print("b");
    aux1 = 1;
  }

  if ((p3 >= 380 && p3 <= 460) && aux2 != 1) { //resistor 620
    Serial.print("c");
    Serial3.print("c");
    aux2 = 1;
  }

  if ((p4 >= 480 && p4 < 600) && aux3 != 1) { //resistor 910
    Serial.print("d");
    Serial3.print("d");
    aux3 = 1;
  }

  if ((p5 >= 600 && p5 <= 680) && aux4 != 1) { //resistor 1.5k
    Serial.print("e");
    Serial3.print("e");
    aux4 = 1;
  }

  if ((p6 >= 700 && p6 <= 808) && aux5 != 1) { //resistor 3k
    Serial.print("f");
    Serial3.print("f");
    aux5 = 1;
  }

  if ((p7 >= 800 && p7 <= 860) && aux6 != 1) { //resistor 3.9k
    Serial.print("g");
    Serial3.print("g");
    aux6 = 1;
  }

  if ((p8 >= 820 && p8 <= 900) && aux7 != 1) { //resistor 5,1k
    Serial.print("h");
    Serial3.print("h");
    aux7 = 1;
  }

  char x;    //configurando variavel de caracter

  if (Serial3.available())    //avalia se possui dados para leitura na serial
  {
    x = Serial3.read();  //lê dado da serial
  }
  if (x == 'l') {   //condição para ligar
    digitalWrite(led1, HIGH);
  }
  else if (x == 'm') {
    digitalWrite(led2, HIGH);
  }
  else if (x == 'n') {
    digitalWrite(led3, HIGH);
  }
  else if (x == 'o') {
    digitalWrite(led4, HIGH);
  }
  else if (x == 'p') {
    digitalWrite(led5, HIGH);
  }
  else if (x == 'x') {
    aux = 0;
    aux1 = 0;
    aux2 = 0;
    aux3 = 0;
    aux4 = 0;
    aux5 = 0;
    aux6 = 0;
    aux7 = 0;
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
}
