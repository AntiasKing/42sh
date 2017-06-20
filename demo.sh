#!./42sh

set it=0

while ([ $it -ne 43 ]) then
      set a=$($it%2)
      if ([ $a -eq 0 ]) echo $it is even
      if ([ $a -ne 0 ]) echo $it is odd
      set it=$($it+1)
end

if ([ $it -eq 43 ]) then
   echo "scripting work !"
else if ([ $it -eq 44 ]) then
   echo "scripting work half"
else
   echo "scripting doesn't work..."
endif
