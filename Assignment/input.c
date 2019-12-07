--header start
~MyHeader1
~MyHeader2
--header end

$
main function
$

number method()
{
    number x,y,z,i`
    number sum`
	
    x assign 1`
    y assign 2`
	i assign 0`
	
	loop : i <= 5
		z assign x + y`
	;
	
	sum assign z`
    print(sum)`
	
	if : x==1
		print(x)`
	;
	elif : x!=1
		print(y)`
	;
	else
		print(i)`
	;
}