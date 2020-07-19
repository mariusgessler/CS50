### mario.c
Implement a program that prints out a double half-pyramid (in form of `#`) per a user-specified height.
```
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
``````
### credit.c
Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm.
```
Number: 378282246310005
AMEX
``````

### substitution.c
Implement a program that implements a substitution cipher, per the below.
```
plaintext:  HELLO
ciphertext: VKXXN
 ```

### readability.c
Implement a program that computes the approximate grade level needed to comprehend some text, per the below.
```
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
```

### runoff.c
Implement a program that runs a runoff election, per the below.
```
Number of voters: 5
Rank 1: Alice
Rank 2: Bob
Rank 3: Charlie

Rank 1: Alice
Rank 2: Charlie
Rank 3: Bob

Rank 1: Bob
Rank 2: Charlie
Rank 3: Alice

Rank 1: Bob
Rank 2: Alice
Rank 3: Charlie

Rank 1: Charlie
Rank 2: Alice
Rank 3: Bob

Alice
```

### filter.c

Implement a program that applies filters to BMPs, per the below.

```
$ ./filter -r image.bmp reflected.bmp
```

### recover.c

Implement a program that recovers JPEGs from a forensic image, per the below.

```
$ ./recover card.raw
```

### dictionary.c

Implement a program that spell-checks a file, a la the below, using a hash table.

```
$ ./speller texts/lalaland.txt
MISSPELLED WORDS

[...]
AHHHHHHHHHHHHHHHHHHHHHHHHHHHT
[...]
Shangri
[...]
fianc
[...]
Sebastian's
[...]

WORDS MISSPELLED:
WORDS IN DICTIONARY:
WORDS IN TEXT:
TIME IN load:
TIME IN check:
TIME IN size:
TIME IN unload:
TIME IN TOTAL:
```
### hello.py

Implement a program that prints out a simple greeting to the user, per the below.

```
$ python hello.py
What is your name?
David
hello, David
```