#!/bin/bash

echo -e "Content-type: text/html\n\n"

echo "<h>Pi's Alive</h>"
echo "<pre>$(./rpistatus)</pre>"
