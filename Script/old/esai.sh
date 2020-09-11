#!/bin/bash

read -p "entre un mot" mot

fin=${#mot}-2
echo ${mot:0:fin}