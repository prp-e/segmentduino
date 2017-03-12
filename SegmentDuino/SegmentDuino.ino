#define ANODE 1
#define CATHODE 0

int a = 7; 
int b = 8;
int c = 9;
int d = 10;
int e = 11;
int f = 12;
int g = 13;

int i = 0;

void SegmentDisplay(int a, int b, int c, int d, int e, int f, int g, int input, int type){
  int high;
  int low;
  if(type == ANODE){
    high = 1; 
    low = 0; 
    } else {
      high = 0;
      low = 1;
    }
  switch(input){
    case 0 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, high);
     break;
    case 1 :
     digitalWrite(a, high);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, high); 
     digitalWrite(e, high); 
     digitalWrite(f, high);
     digitalWrite(g, high);
     break;
    case 2 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, high);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, high);
     digitalWrite(g, low);
     break;
    case 3 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, high); 
     digitalWrite(f, high);
     digitalWrite(g, low);
     break;
    case 4 :
     digitalWrite(a, high);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, high); 
     digitalWrite(e, high); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 5 :
     digitalWrite(a, low);
     digitalWrite(b, high);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, high); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 6 :
     digitalWrite(a, low);
     digitalWrite(b, high);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 7 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, high); 
     digitalWrite(e, high); 
     digitalWrite(f, high);
     digitalWrite(g, high);
     break;
    case 8 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 9 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, high); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 10 :
     digitalWrite(a, low);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, high); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 11 :
     digitalWrite(a, high);
     digitalWrite(b, high);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 12 :
     digitalWrite(a, low);
     digitalWrite(b, high);
     digitalWrite(c, high);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, high);
     break;
    case 13 :
     digitalWrite(a, high);
     digitalWrite(b, low);
     digitalWrite(c, low);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, high);
     digitalWrite(g, low);
     break;
    case 14 :
     digitalWrite(a, low);
     digitalWrite(b, high);
     digitalWrite(c, high);
     digitalWrite(d, low); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;
    case 15 :
     digitalWrite(a, low);
     digitalWrite(b, high);
     digitalWrite(c, high);
     digitalWrite(d, high); 
     digitalWrite(e, low); 
     digitalWrite(f, low);
     digitalWrite(g, low);
     break;

    default:
     digitalWrite(1, high);
     
    }
  }

    
  void pinMask(int a, int b, int c, int d, int e, int f, int g, int type){
    int mask; 
    if(type == ANODE){
      mask = 1;
    } else {
      mask = 0;
    }
     digitalWrite(a, mask);
     digitalWrite(b, mask);
     digitalWrite(c, mask);
     digitalWrite(d, mask); 
     digitalWrite(e, mask); 
     digitalWrite(f, mask);
     digitalWrite(g, mask);
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
 for(i = 0; i < 16; i++){
  SegmentDisplay(a, b, c, d, e, f, g, i, ANODE); 
  delay(1000); 
  pinMask(a, b, c, d, e, f, g, ANODE); 
  delay(10);
  }
}
