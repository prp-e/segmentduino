int a = 7; 
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;

int i = 0;

void SegmentDisplay(int a, int b, int c, int d, int e, int f, int g, int input){
  switch(input){
    case 0 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     break;
    case 1 :
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     break;
    case 2 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, HIGH);
     digitalWrite(g, LOW);
     break;
    case 3 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, HIGH);
     digitalWrite(g, LOW);
     break;
    case 4 :
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 5 :
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 6 :
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 7 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     break;
    case 8 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 9 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 10 :
     digitalWrite(a, LOW);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, HIGH); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 11 :
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 12 :
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, HIGH);
     break;
    case 13 :
     digitalWrite(a, HIGH);
     digitalWrite(b, LOW);
     digitalWrite(c, LOW);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, HIGH);
     digitalWrite(g, LOW);
     break;
    case 14 :
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, LOW); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;
    case 15 :
     digitalWrite(a, LOW);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH); 
     digitalWrite(e, LOW); 
     digitalWrite(f, LOW);
     digitalWrite(g, LOW);
     break;

    default:
     digitalWrite(1, HIGH);
     
    }
  }
  void pinMask(int a, int b, int c, int d, int e, int f, int g){
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH); 
     digitalWrite(e, HIGH); 
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
    }

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(i = 0; i < 4; i++){
  SegmentDisplay(a, b, c, d, e, f, g, i); 
  delay(1000); 
  pinMask(a, b, c, d, e, f, g); 
  delay(10);
  }
}
