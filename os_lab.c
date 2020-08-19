a=10

b=10


if [ $a == $b ]

then

echo " a is equal to b "

else
 
echo " a is not eqal to b "
 
fi



echo "Enter a number that you want to find factorial"
read num

fact=1

while [ $num -gt 1 ]
do
  fact=$((fact * num))  
  num=$((num - 1))
done

echo $fact



echo "Enter a number that you want to rev"
 

 num=123

 r=0

  rev=0

 while [  $num -ne 0 ]

 do
 r= ` expr $num %10 `

 rev= ` expr $r + $rev * 10  `

 num= ` expr $num /10 `

 done

 echo " reverse is$rev"





echo "Enter a number that you want fibonacci"

num=3


a=1

b=-1

c=0

while [  num -gt 0  ]

do

c= ` expr $a + $b `

done

echo " $c "

b=$c

a=$b