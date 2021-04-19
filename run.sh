#!/bin/bash
sudo make install
make clean
fusermount -u mount -l

rm -r base/*
rm -r mount/*
rm log.txt
rm database.csv

ntapfuse mount base mount

