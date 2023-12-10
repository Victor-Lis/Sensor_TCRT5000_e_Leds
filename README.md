
# Sensor-TCRT5000 e Leds

Esse com certeza foi o sensor mais emblemático para mim. 

Fiz até aqui uma série de posts de sensores, que de uma forma ou outra utilizei para detectar movimentação.

Todos eles fizeram parte de uma "pesquisa" que eu fiz para ver qual sensor seria o mais rápido para tal função, pois precisarei disso em um projeto maior que está por vir.

E esse sensor foi o de longe mais rápido, outros sensores tiverem cerca de 0.5s a 2s de delay, já esse sensor foi basicamente instantâneo. 

Sendo assim será o sensor ideal para minha necessidade.
## Desafios

Acredito que meus principais desafios nesse projeto foram:
- Utilizar a voltagem ideal para o sensor.
- Entender como o sensor funciona, para utiliza-lo da maneira correta.
- Entender a distância máxima de detecção do sensor.
## Aprendizados

Por final aprendi algumas coisas interessantes como: 
### Iniciando o código 
```c++
int pinLedRed = 11; 
int pinLedGreen = 12;
int pinSensor = 4; 
```

### Configuração Inicial
```c++
void setup(){ 
  pinMode(pinSensor, INPUT); 
  pinMode(pinLedGreen, OUTPUT);
  pinMode(pinLedRed, OUTPUT);
  digitalWrite(pinLedGreen, LOW);
  digitalWrite(pinLedRed, LOW);
  Serial.begin(9600);
}  
```

### Loop
Acho que a única coisa entre muitas aspas "trabalhosa" ao mexer com esse sensor é que ele funciona de maneira inversa aos outros que já mexi, sendo assim o *NÃO* ter movimento é *HIGH* e o *TER* movimento é *LOW*.

#### Por que esse sensor funciona de maneira diferente?

R: Pois ele envia um sinal em infravermelho e o lê de volta. 

#### Então:

Se existir algo obstruindo esse retorno do infravermelho o valor é LOW (Pois ele não leu de volta).

Se não existir algo obstruindo esse retorno significa que o retorno do infravermelho é bem sucessido logo o valor é HIGH (Pois leu de volta).

Por conta disso além de ser encontrado como "Sensor-TCRT5000", pode ser encontrado como "Sensor Óptico Reflexivo".

```c++
void loop(){
  if (digitalRead(pinSensor) == HIGH){ 
        digitalWrite(pinLedGreen, HIGH);
        digitalWrite(pinLedRed, LOW);
        Serial.println("---------");
  }else{ 
        digitalWrite(pinLedGreen, LOW);
        digitalWrite(pinLedRed, HIGH);
        Serial.println("Movimento");
  }    
}
```

## Resultado

[Ver vídeo do projeto funcionando!](https://youtube.com/shorts/og_KhTfBuMM?feature=share)
## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)
- [@Márcio-Yuji](https://www.linkedin.com/in/marcio-yuji-tokunaga-3aba8016/)
