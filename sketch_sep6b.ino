#define pinMotor1 5
#define pinMotor2 6
#define pinMotor3 9
#define pinMotor4 10
#define pinSensorD 13 
#define pinSensorM 12
#define pinSensorE 11  
void setup() {
  pinMode(5, OUTPUT);//motor
  pinMode(6, OUTPUT);//motor
  pinMode(9, OUTPUT);//motor
  pinMode(10, OUTPUT);//motor
  pinMode(A0, OUTPUT);//sensor ultrassonico: gnd, vcc e trigger
  pinMode(A1, INPUT);//sensor ultrassonico: echo
  pinMode(11, INPUT);//sensor seguidor de linha da esquerda
  pinMode(12, INPUT);//sensor seguidor de linha do meio
  pinMode(13, INPUT);//sensor seguidor de linha da direita
  
}
void loop() {
  // Controle do movimento com base nos sensores de linha
  if (11 == HIGH && 13 == HIGH) { 
    paraFrente();
  }
  else if (11 == LOW && 13 == HIGH) { 
    paraEsquerda();
  }
  else if (11 == HIGH && 13 == LOW) {
    paraDireita();
  }
  else {
    parar();
  } 

paraFrente();
delay(100);
paraTraz();
delay(100);
paraEsquerda();
delay(100);
paraDireita();
delay(100);
}
// Movimenta o carrinho para frente
void paraFrente() {
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(100);
}

// Movimenta o carrinho para traz
void paraTraz() {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(100);
}

// Movimenta o carrinho para esquerda
void paraEsquerda() {
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(100);
}

// Movimenta o carrinho para direita
void paraDireita() {
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(100);
}

// Para o carrinho
void parar() {
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
}