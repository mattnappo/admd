#!/bin/bash

mkdir -p out
pdflatex -output-directory out/ $1 && xdg-open out/${1%.tex}.pdf
rm out/${1%.tex}.log
