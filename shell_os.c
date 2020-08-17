echo "hi what is your name?"

read person

echo "Hello,$person"

#this is comment line

num2="jhon c"
echo "hello! mr. $num2"
echo "Good Boy"

echo "enter the number"

read num

rem='expr $num % 2'

if [$rem -eq 0]

then 
 
    echo "$num is even"
 
else
   
   echo"$num is odd"
echo "enter the number"

read num

rem=`expr $num % 2`

if [ $rem -eq 0 ]

then 
   
  echo "$num is even"

 else
 
     echo"$num is odd"

      fi
echo "enter two number"
 
num1=10
 
num2=15

 sum=` expr $num1 + $num2 `
 
echo "the sum of numbers $num1 and $num2 = $sum"
 


echo "enter the year"
read year

rem=` expr $year % 400 `

if [ $rem -eq 0 ]

then
  
 echo "year is leap year"
 
else
   echo "year is not leap"
  
 fi
