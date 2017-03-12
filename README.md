# Arduino Hexadecimal Display Driver

I just write this project for fun :P. Actually, this is a simple project to drive a seven segment display and show decimal/hexadecimal digits on 
that. First, it was only working with common anode seven segment, but now, it also works with common cathode seven segment display.

## The Hardware you need 

1. Arduino (I used Uno R3) 
2. Common Anode/Cathode Seven Segment

## How to use? 

### Common Anode 

You need to define seven *digital* pins of your Arduino as the inputs of the segments. Then, you need to call the function like this : 

```c 
SegmentDisplay(a, b, c, d, e, f, g, input , ANODE); 
``` 

and for masking pins (turning all pins off), you need to call the `pinMask` function like this : 

```c 
 pinMask(a, b, c, ,d, e, f, g, ANODE); 
```

### Common Cathode 

Like the common anode, you need to do this : 

```c 
SegmentDisplay(a, b, c, d, e, f, g, input , CATHODE); 
``` 

and for masking pins (turning all pins off), you need to call the `pinMask` function like this : 

```c 
 pinMask(a, b, c, ,d, e, f, g, CATHODE); 
```