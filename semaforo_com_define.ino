// O "#define" é uma diretiva, uma constante
// Quando o programa é compilado, substitui o nome ledRed por 8 invés de armazenar uma variável 
// na memória e acessá-la. Fazer desse jeito economina-se a memória do Arduino.
// Pode-se usar essa instrução aqui, porque o nome de uma porta não é variável.
// A variável é boa para ser usanda quando deseja-se armazenar valores que vão variar mesmo.
#define ledRed  8
#define ledYellow 9
#define ledGreen 10

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
  delay(5000);

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(5000);

  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(2000);
}
