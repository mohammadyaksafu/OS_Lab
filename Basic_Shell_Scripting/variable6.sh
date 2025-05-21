echo "Enter a file name to create "
read creat
touch  $creat
echo "What will be the next name"
read next
mv  $creat $next
echo "Previous name was $creat new name $next"
