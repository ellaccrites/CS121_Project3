# CS121_Project3

## Bubble Algorithm

```
constant MAX is max length of array 

pre-initialize functions sort, swap, and printValues 

main: 
    initialize number array as values 
    print "Before: " with new line 
    call printValues(values)     
    initialize tester integers x = 3 and y = 5 
    print x and y 
    swap(x, y) 
    print x and y 
    call sort(values) 
    print "After: " with new line 
    call printValues(values) 
    return zero 
end main 

function sort (values):       
    create integer variables i and j 
    for i from zero to MAX - 1: 
        for j from zero to MAX - 1: 
            if values[j] > values[j+1]: 
                swap(values[j], values[j+1]) 
                call printValues(values) 
        end for 
    end for 
end sort 

function swap (x, y): 
    initialize integer a as value of x 
    initialize integer b as value of y 
    address of x is now value of a 
    address of y is now value of b 
end swap 

function printValues (values): 
    create integer variable i 
    print "[ " 
    for i from zero to MAX - 1: 
        print values[i] 
    end for 
    print "]" 
end printValues
```

