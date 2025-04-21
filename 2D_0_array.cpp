// Internally in memory 2D array is a 1D array.


// Memory Layout:

// A 2D array arr[m][n] is stored as a flat 1D array with size m * n.
// The elements are stored in row-major order, meaning all elements of the first row are stored first, then the elements of the second row, and so on.
// eg - arr[3][4] = {
//   {1, 2, 3, 4},  // Row 0
//   {5, 6, 7, 8},  // Row 1
//   {9, 10, 11, 12} // Row 2
// }

// In above example 2D array is stored in memory like this in 1D array. 
// arr[3*4]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }



// Accessing Elements:

// When you access an element arr[i][j], internally, the compiler calculates the memory address as:
// Address = base_address + Index * sizeof(element_type);
// Index = (i * total_col + j);
// eg - arr[1][2] which is 7.
// how this happens in memory find Index in 1D array => Index = (1*4+2) = 6 which means arr[1][2] is at 6th index of internal memory 1D array where this 2D array is stored.



