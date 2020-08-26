echo "enter the radius to calculate area and perimeter"

 r=5

p= `echo 3.14 \* 2 \*r | bc `
a=` echo 3.14 \*r \* r |bc `


echo "perimeter is $p and area is $a "




echo "Enter two numbers to calculated GCD"
  
read a 
read b
   
m = $a 
  
if [ $b -lt $m ] 
then 
m = $b 
fi 
  
while [ $m -ne 0 ] 
do
x = `expr $a % $m` 
y = `expr $b % $m` 
  
if [ $x -eq 0 -a $y -eq 0 ] 
then 
  
break
fi 
m = `expr $m - 1` 
  
done 