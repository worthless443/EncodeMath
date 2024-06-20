![picture](media/sigma.png)

A tiny and simple text encoder and decoder based on math functions and constant parameters in the function. It makes the key for the encoding and decoding a mathematical function. Wheres the `charset` variable can be changed to contain any ASCII charecters.

## Example uses 

```
$ git clone  <clone_uri>
$ cc encode.c -o encode
$ ./encode < README.md

lsphzpwlspnqvlvilvpxowvmzpwwv
xowvmyzlvwoppzltvkpxlsoplzpwxopl
lzplnzmzpvlvmlspltvvkpxlsoplpz
rvlltvrvhvomltvvpxowspuzpwwvxow
spuzpzltvpzlsxzqvkpxlsopHtvmvllt
v{xtzmlvl{jzmszyqvxzpyvxtzpuvwlo
xoplzspzphxtzmvxlvmliz
pnqvklvl{{{uslxqopvxqopv|km
sxxwvxowvxowvxowvwvxowv
pw{{{

```

_..._

_[Decoder has not been built yet]_

## Tuning and options 

The chars generated are only dependent on the math function defined in `config.h`. More info in [config.h](config.h)
