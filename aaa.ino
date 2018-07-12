
/*HERE IS A TABLE DETERIMING THE LIGHTS TO BE LIT UP 

 A | B | C | D | U1 | U2
 0   0   0   0   0    0    A-D are input data pins and U1 and U2 are data pin enable and disable 
 0   0   0   1   0    0
 0   0   1   0   0    0
 0   0   1   1   0    0
 0   1   0   0   0    0
 0   1   0   1   0    0 
 0   1   1   0   0    0
 0   1   1   1   0    0
 1   0   0   0   0    0
 1   0   0   1   0    0  
 1   0   1   0   0    0
 1   0   1   1   0    0 
 1   1   0   0   0    0
 1   1   0   1   0    0
 1   1   1   0   0    0 
 1   1   1   1   0    0 

 WHERE U1 AND U2 ARE ENABLE PIN AND DETERMINES IC NAMED 74154 TO BE ENABLED OR DISABLED BT SENDING 0 1 SIGNAL BY THE USER*/ 
                       
/*FOR TRAFFIC LIGHT
#define TOP_RED B0000000);
#define TOP_YELLOW B0001000);
#define TOP_GREEN B0010000);
#define LEFT_RED B0011000);
#define LEFT_YELLOW B0100000);
#define LEFT_GREEN B0101000);
#define RIGHT_RED B0110000);
#define RIGHT_YELLOW B0111000);
#define RIGHT_GREEN B1000000);
#define DOWN_RED B1001000);
#define D0WN_YELLOW B1010000);
#define DOWN_GREEN B1011000);
//FOR PEDESTRAINS LIGHT
#define TOPPED1_RED B1100000);
#define DOWNPED1_RED B1101000);
#define LEFTPED1_GREEN B1110000);
#define RIGHTPED1_GREEN B1111000);
#define TOPPED2_RED B0001000);
#define DOWNPED2_RED B1010000);
#define LEFTPED2_GREEN B0011000);                                                       
#define RIGHTPED2_GREEN B0110000);
#define TOPPED3_GREEN B0000000);
#define DOWNPED3_GREEN B1001000);
#define LEFTPED3_RED B0100000);
#define RIGHTPED_RED B0111000);
#define TOPPED4_GREEN B0000000);
#define DOWNPED4_GREEN B1001000);
#define LEFTPED4_RED B0101000);                                                       
#define RIGHTPED4_RED B1000000); */

int A=2; 
int B=3; 
int C=4;
int D=5;
int d1=5000;
int d2=5000;
int d3=5000;
int d4=5000;

void setup() {
  // put your setup code here, to run once:
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);
}

void loop() 
{
//FIRST FIG
//for TOP GREEN and DOWN GREEN
digitalWrite(A,LOW);       //TOP GREEN AND DOWN GREEN LIGHTS UP 0000
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d1);

//for LEFT RED AND RIGHT RED
digitalWrite(A,LOW);          //LEFT RED AND RIGHT RED OO00
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d1);

//forTOPPED1_RED AND DOWNPED1_RED 
/*digitalWrite(A,LOW);//CHANGE
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//forDOWNPED1_RED 
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
//forLEFTPED1_RED 
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
//forRIGHTPED1_RED 
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);//CHANGE
delay(9000);
*/
//SECOND FIG:
//FOR TOP GREEN AND DOWN GREEN SINCE THEY NEED TO BE IN OFF STATE INSTEAD OF THEM YELLOW LIGHT IS TO BE LIT UP
digitalWrite(A,LOW);
digitalWrite(B,LOW); //LEFT RED AND RIGHT RED
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//forLEFT RED AND RIGHT RED
digitalWrite(A,HIGH);
digitalWrite(B,LOW); //LEFT RED AND RIGHT RED 0001
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d2);

//for TOP YELLOW AND DOWN YELLOW IS TO BE GLOW SO
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d2);

/*//for TOPPED2_RED
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
//for DOWNPED2_RED 
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
//for LEFTPED2_RED 
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
//for RIGHTPED2_RED 
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,LOW);
delay(9000);
 */

 //THIRD FIG:
  //for LEFT RED AND RIGHT RED THEY NEED TO BE OFF STATE SO 0000 VOLT SUPPLIED
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);

//for top yellow and down yellow has to be in off state so 
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);

/*//for TOPPED2_RED green
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for DOWNPED2_RED green
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for LEFTPED2_RED green
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for RIGHTPED2_RED green
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW); */
//for LEFT YELLOW AND RIGHT YELLOW HAS TO BE LIT UP SO 0011 IS SENT 
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d3);
//for TOP RED and down red has to be lit up so 0011 is sent
digitalWrite(A,HIGH);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
delay(d3);
/*//for TOPPED3_RED 
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for DOWNPED3 RED green
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
//for LEFTPED3_RED 
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for RIGHTPED3 RED green
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(9000);
*/


//from fig4 
  //for LEFT YELLOW and right yellow has to be turned off so; 
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);

//for TOP RED AND DOWN RED WE HAVE TO LIGHT UP SO
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(d4);
//for LEFT GREEN and right green
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(d4);
}
/*//for TOPPED4_RED 
digitalWrite(A,LOW);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for DOWNPED4 RED green
digitalWrite(A,HIGH);
digitalWrite(B,LOW);
digitalWrite(C,LOW);
digitalWrite(D,HIGH);
//for LEFTPED4_RED 
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,LOW);
digitalWrite(D,LOW);
//for RIGHTPED4 RED green
digitalWrite(A,LOW);
digitalWrite(B,HIGH);
digitalWrite(C,HIGH);
digitalWrite(D,HIGH);
delay(9000);
}*/


