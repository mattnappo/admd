#!/bin/bash

export name='notes'
pdflatex $name.tex
rm $name.log
open notes.pdf

