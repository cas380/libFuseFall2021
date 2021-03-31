#!/bin/bash
make
sudo make install
sudo umount mount
rm base/*
rm mount/*
rmdir base/*
rmdir mount/*
rm log.txt
ntapfuse mount base mount

