# Nibble

A C header file for reading and writing sub-byte sized data.


## Introduction

Very often, C programs require an ability to read and write data which aren't byte aligned or which take up less than a single byte. This is particularly common in video/image codecs and network protocols. Nibble is a small, self-contained library which simplifies the process of manipulating such data. It works by defining a number of `struct` types with bit-fields of various sizes. For instance `u1`, `u2` and `u3` take up one, two and three bits respecitvely. 


## Usage

Constructing sub-byte arrays is dead simple. Just declare the array as having type `uX` where `X` is an integer from 1-16.

```c
#include "nibble.h"

// Create an array of unsigned 2-bit integers.

u2 array[4] = {
  0b00,
  0b01,
  0b00,
  0b11,
};

// Read the third value.

printf("%d\n", array[2].value);
```

If binary literals are not supported use decimal or hexadecimal notation instead.

You can also easily read sub-byte values from an existing array via in-line casting.

```c
#include "nibble.h"

char array[4] = "cool";

print("%d\n", (u2 *)
```


## Types

