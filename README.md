# ANSI Shadow Generator

I like to add cute ANSI art in the top of my dot files. But I don't quite like using online services for this.

Inspired by Tsoding's recreational programming sessions I decided to make a small local tool for generating such ANSI art pieces.

### Usage: 
```
asg [option] <text>

OPTIONS

  -h, --help           Display help and exit

  -v, --version        Display version information and exit

  -c<value>, --center=<value>
                       Centers text inside the line of <value> characters and wraps it with decoration string (defaults to 120 if no value was passed, max is 240, default decoration string is '#'. You can change it with -d/--decoration option.)

  -d<value>, --decoration=<value>
                       Sets custon decoration symbol when centering text. Max length is 4.

  <text>               Any ASCII text (Unicode is not supported as of now) not longer than 32 characters

```
