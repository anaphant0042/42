#!/bin/bash

groups $FT_USER | sed -e 's/.\+ : //' -e 's/ /,/g' | cat -e
