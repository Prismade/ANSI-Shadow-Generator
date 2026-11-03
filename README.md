# ANSI Shadow Generator

I like to add cute ANSI art in the top of my dot files. But I don't quite like using online services for this.

Inspired by Tsoding's recreational programming sessions I decided to make a small local tool for generating such ANSI art pieces.

### Usage: 
```
asg [option] <text>

OPTIONS

  -h, --help           display help and exit

  -v, --version        display version information and exit

  -c<value>, --center=<value>
                       centers text inside the line of <value> characters (defaults to 120 if no value was passed, max is 240)

  <text>               any ASCII text (Unicode is not supported as of now) not longer than 32 characters

```
