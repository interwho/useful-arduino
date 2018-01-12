int seg_a=22;
int seg_b=23;
int seg_c=24;
int seg_d=25;
int seg_e=26;
int seg_f=27;
int seg_g=28;


int d1=41;
int d2=42;
int d3=43;
int d4=44;

int time = 0;
int clock = 50;

void clearSeg() {
  digitalWrite (d1,LOW);
  digitalWrite (d2,LOW);
  digitalWrite (d3,LOW);
  digitalWrite (d4,LOW);
  digitalWrite (seg_a,HIGH);
  digitalWrite (seg_b,HIGH);
  digitalWrite (seg_c,HIGH);
  digitalWrite (seg_d,HIGH);
  digitalWrite (seg_e,HIGH);
  digitalWrite (seg_f,HIGH);
  digitalWrite (seg_g,HIGH);
}
void numberZero (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_d,LOW);
  digitalWrite (seg_e,LOW);
  digitalWrite (seg_f,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberOne (int x) {
  clearSeg() ;
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_c,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberTwo (int x) {
  clearSeg();
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_g,LOW);
  digitalWrite (seg_e,LOW);
  digitalWrite (seg_d,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberThree (int x) {
  clearSeg();
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_g,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_d,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}


void numberFour (int x) {
  clearSeg();
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_g,LOW);
  digitalWrite (seg_f,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}



void numberFive (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_d,LOW);
  digitalWrite (seg_f,LOW);
  digitalWrite (seg_g,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}    

void numberSix (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_f,LOW);
  digitalWrite (seg_d,LOW);
  digitalWrite (seg_e,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_g,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberSeven (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_c,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberEight (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW);
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_d,LOW);
  digitalWrite (seg_e,LOW);
  digitalWrite (seg_f,LOW);
  digitalWrite (seg_g,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}

void numberNine (int x) {
  clearSeg() ;
  digitalWrite (seg_a,LOW);
  digitalWrite (seg_b,LOW); 
  digitalWrite (seg_c,LOW);
  digitalWrite (seg_d,LOW);
  digitalWrite (seg_g,LOW);
  digitalWrite (seg_f,LOW);
  if(x == 1) {
    digitalWrite (d1,HIGH);
  }
  if(x == 2) {
    digitalWrite (d2,HIGH);
  }
  if(x == 3) {
    digitalWrite (d3,HIGH);
  }
  if(x == 4) {
    digitalWrite (d4,HIGH);
  }
}


void setup() {
  pinMode (seg_a,OUTPUT);
  pinMode (seg_b,OUTPUT);
  pinMode (seg_c,OUTPUT);
  pinMode (seg_d,OUTPUT);
  pinMode (seg_e,OUTPUT);
  pinMode (seg_f,OUTPUT);
  pinMode (seg_g,OUTPUT);
  pinMode (d1,OUTPUT);
  pinMode (d2,OUTPUT);
  pinMode (d3,OUTPUT);
  pinMode (d4,OUTPUT);
}



void loop() {
  writeTime(time);
  clock = clock-1;
  if(clock == 0) {
    clock = 50;
    time = time++;
  }
}

void writeTime(int x) {
  int m = x;
  
  int p1 = x / 1000;
  int o = p1*1000;
  x = x-o;
  int p2 = x / 100;
  o = p2*100;
  x = x-o;
  int p3 = x / 10;
  o = p3*10;
  x = x-o;
  int p4 = x;

  if(m > 999) {
    writeDigit(p1,1);
    delayMicroseconds(10);
  }
  if(m > 99) {
    writeDigit(p2,2);
    delayMicroseconds(10);
  }
  if(m > 9) {
    writeDigit(p3,3);
    delayMicroseconds(10);
  }
  writeDigit(p4,4);
  delayMicroseconds(10);
}

void writeDigit(int y, int x) {
  clearSeg();
  if(y == 0) {
    numberZero(x);
  }
  if(y == 1) {
    numberOne(x);
  }
  if(y == 2) {
    numberTwo(x);
  }
  if(y == 3) {
    numberThree(x);
  }
  if(y == 4) {
    numberFour(x);
  }
  if(y == 5) {
    numberFive(x);
  }
  if(y == 6) {
    numberSix(x);
  }
  if(y == 7) {
    numberSeven(x);
  }
  if(y == 8) {
    numberEight(x);
  }
  if(y == 9) {
    numberNine(x);
  }
}

