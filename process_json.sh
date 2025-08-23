#!/bin/bash
JSON_PATH=$1
TARGET_PATH=keyboards/sofle/keymaps/klungs/keymap.c
TEMPLATE_PATH=keyboards/sofle/keymaps/klungs/keymap_template.c

cat $TEMPLATE_PATH > $TARGET_PATH
qmk json2c $1 | head -n -11 | tail -n +11 | expand -t 4 | cat >> $TARGET_PATH
