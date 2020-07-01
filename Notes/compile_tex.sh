#!/bin/bash

mkdir -p out
pdflatex -output-directory out/ $1
rm out/${1%.tex}.log
rm out/texput.log
xdg-open out/${1%.tex}.pdf
