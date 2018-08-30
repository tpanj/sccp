# sccp
Simple C Config Parser is simple to use generic reader of key value combinations

# Features
* Minimal dependency and minimalistic.
* C89 compatible, cross platform to compile and use configs.
* Capable of parsing .conf file and return struct of value and key.
* Can parse even simple [TOML](https://en.wikipedia.org/wiki/TOML) (.ini) files and bash environment variables file. 
* Comment aware
* If multiple keys are in file returns first occurrence found with value.

# Compiling
gcc main.c simple_config.c -std=c89 -pedantic -Wall

Tested also with Visual Studio from 2008 up to 2017