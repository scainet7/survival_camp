#!/bin/bash

cd
cd T01D01
cd src
cd ai_help
sh keygen.sh
cd key
rm file{1..300}
sh unifier.sh