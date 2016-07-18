git status
echo "\n \n \n \n"
echo "Push recent work or nah"

read response
if (( "$response" == "y" )); then
	echo "It works"
else 
	echo "Exiting"
fi

