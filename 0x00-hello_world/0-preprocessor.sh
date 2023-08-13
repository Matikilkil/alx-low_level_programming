#!/bin/bash

# Check if the CFILE variable is set
if [ -z "$CFILE" ]; then
    echo "Please set the CFILE variable with the name of the C file."
    exit 1
fi

# Check if the specified C file exists
if [ ! -f "$CFILE" ]; then
    echo "The specified C file '$CFILE' does not exist."
    exit 1
fi

# Run the C file through the preprocessor and save the output to 'c'
cpp "$CFILE" -o c

echo "Preprocessing completed. Result saved in 'c'."

