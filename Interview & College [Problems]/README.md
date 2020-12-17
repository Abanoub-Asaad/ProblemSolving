<a href="https://www.linkedin.com/in/abanoub-asaad"><img src="https://www.dennyzhang.com/wp-content/uploads/sns/linkedin.png" alt="linkedin" /></a> 

# Interview and College [Problems] 
interview-and-college-problems

 Problem | Related Topics  | Solution | Difficulty | Notes
  -- | -- | -- | -- | ---
[347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | Hash Table or Heap | [C++](https://github.com/Abanoub-Asaad/ProblemSolving/blob/master/Interview%20%26%20College%20%5BProblems%5D/Solutions/347.%20Top%20K%20Frequent%20Elements.cpp) | Meduim | [Notes is below ⬇](https://github.com/Abanoub-Asaad/ProblemSolving/tree/master/Interview%20%26%20College%20%5BProblems%5D#347-top-k-frequent-elements)
[240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii)| BS and D&C | [C++](https://github.com/Abanoub-Asaad/ProblemSolving/blob/master/Interview%20%26%20College%20%5BProblems%5D/Solutions/240.%20Search%20a%202D%20Matrix%20II.cpp) | Medium | Bruteforce approach : O(n*m) <br> After optimization : O(n+m).
[215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)| D&C and Heap | [C++](https://github.com/Abanoub-Asaad/ProblemSolving/blob/master/Interview%20%26%20College%20%5BProblems%5D/Solutions/215.%20Kth%20Largest%20Element%20in%20an%20Array.cpp) | Meduim | built-in SORT function in C++ takes O(n*log(n)) --> "log base 2"
[136. Single Number](https://leetcode.com/problems/single-number/)| Hashing or Bit manipulation | [C++](https://github.com/Abanoub-Asaad/ProblemSolving/blob/master/Interview%20%26%20College%20%5BProblems%5D/Solutions/136.%20Single%20Number.cpp) | Easy | a⊕0=a <br> a⊕a=0 <br> a⊕b⊕a = b
[1525. Number of Good Ways to Split a String](https://leetcode.com/problems/number-of-good-ways-to-split-a-string/)| Hashing | [C++](https://github.com/Abanoub-Asaad/ProblemSolving/blob/master/Interview%20%26%20College%20%5BProblems%5D/Solutions/1525.%20Number%20of%20Good%20Ways%20to%20Split%20a%20String.cpp) | Meduim | O(N) Solution <br>  Hash Table complexity is O(1) for insertion, deletion and search

### Follow Up Notes:

#### 347. Top K Frequent Elements 
* To sort map or unordered_map "hash table" by value:
	* First, Put the keys and values of the map in vector of pairs 
	* Second, Sort the vector by the way:
```
//v is a vector
sort(v.begin(), v.end(), cmp); 
```
```
//comparator lampda-function to sort pairs according to second value
static bool cmp(pair<int, int>& a, pair<int, int>& b) 
{ 
	return a.second < b.second; 
}
```
#### LeetCode profile [Abanoub-Asaad](https://leetcode.com/abanoub-asaad/)
