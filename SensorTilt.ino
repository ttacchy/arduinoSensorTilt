// definir o número dos pinos
const int tiltPin = 2; // o numero do pino utilizado pelo sensor tilt
const int ledPin =  11; // o numero do pino utilizado pelo led

// variavel de mudança de inclinaçao:
int sensorState = 0; // variável para ler o status do sensor tilt

void setup() {
pinMode(ledPin, OUTPUT); // indicar o pino do led como uma saída
pinMode(tiltPin, INPUT); // indicar o pino do sensor tilt como uma entrada
}

void loop(){
sensorState = digitalRead(tiltPin); // ler o estado do valor do sensor tilt

// verificar se o sensor esta com inclinaçao para o terminal dourado.
// se sim, o estado do sensor é inclinado:
if (sensorState == HIGH) {
digitalWrite(ledPin, HIGH); // entao acende o led
}
else {
digitalWrite(ledPin, LOW); // se não, led apagado:
}
}