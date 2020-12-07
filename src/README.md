Project 1: Tokenizer
====================
# Instructions:

You should document your tokenizer in this file.

This file is written in the refreshingly simple `markdown` text
formatting language.

To learn about text formatting using markdown, we encourage you to examine 
 - [../README.md](../README.md)
 - the online [Markdown Guide](https://www.markdownguide.org/).

## Description of Lab 1
Lab 1 consists in a program which tokenises a sentence entered and make into tokens. The tokens are then stored into a history which can be accessed to revise previously entered the tokens.     

File                  | Description
--------------------- | -----------
history.c	      | List of method which creates and helps modify the linked list called history.
tester.c	      | Program to test the functionality of the tokenizer and history programs.
tokenizer.c	      |	List of methods which eventually creates the tokenizer which divides the sentences in words and puts them in tokens.
UI.c		      |	User Interface which allows the user to tokenize, check history, or exit and end the program.

## How to Run

The Makefile will create all the files and to make the UI work we use **make
all** which will run up all the programs and the UI will start. 
