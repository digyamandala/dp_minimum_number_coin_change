# dp_minimum_number_coin_change
To count minimum number of coins needed to change 'x'

<img src="https://latex.codecogs.com/gif.latex?f(0)&space;=&space;0" title="f(0) = 0" />

<img src="https://latex.codecogs.com/gif.latex?f(x)&space;=&space;min(f(x-coin_1)&plus;1,&space;f(x-coin_2)&plus;1,&space;...,&space;f(x-coin_n)&plus;1)" title="f(x) = min(f(x-coin_1)+1, f(x-coin_2)+1, ..., f(x-coin_n)+1)" />

where
<img src="https://latex.codecogs.com/gif.latex?(x-coin_n)&space;\geq&space;0" title="(x-coin_n) \geq 0" />

<img src="https://latex.codecogs.com/gif.latex?Time&space;Complexity:&space;O(NK)" title="Time Complexity: O(NK)" />
where N is the value needed to be changed<br>
and K is the number of coins in store.
