# ansi_colors
Single-header macro-based library for terminal color codes

## Screenshot

This is a showcase of all supported formatting at the moment (the colors may look different depending on your terminal configuration):

![](https://i.imgur.com/2h4bHRP.png)

## Usage

Copy the header file somewhere in your project. Then, you can include it whenever needed.

```c
#include "ansi_colors.h"
```

The color codes can then be used with `puts`, `printf` or really any I/O function that outputs to an ANSI terminal. For example:

```c
#include <stdio.h>
#include "ansi_colors.h"

int main(int argc, char** argv) {
  printf("Hello world! " BOLD " This text is written in bold!" RESET " this is not!" );
  return 0;
}
```
