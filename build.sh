#!/bin/sh

set -xe

gcc printself.c -o printself -Wall && ./printself > printedself.c

diff -q printself.c printedself.c
