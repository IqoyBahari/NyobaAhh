#define trig 11
#define echo 12
float duration, cm;

void setup(){
  Serial.begin(115200);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  pinMode(echo, INPUT);
  duration = pulseIn(echo, HIGH);
  
  cm = (duration/2)  / 29.1; 
  //dibagi dua karena data yang diterima oleh echo itu dalam bentuk 2 kali jarak yang sebenarnya. 
  //Dibagi 29.1 mengubah dari microsecond menjadi cm

  Serial.print("cm : ");
  Serial.println(cm);

  delay(50);
}
  

