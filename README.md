# Binary Search Algorithm
This C code implements a binary search algorithm to search for a specific key in an array of structures. The program reads data from a CSV file, performs a binary search on the data, and outputs the corresponding data if found.

## Getting Started
To compile and run the code, follow these steps:

1. Make sure you have a C compiler installed on your system (e.g., GCC).
2. Save the source code and the data file to the same directory.
3. Open a terminal or command prompt and navigate to the directory where the code file is located.
4. Run the following command to compile the code:

   ```bash
   gcc -o program binaryseach.c
   ```

   This command will generate an executable file named `program`.

5. Run the program:

   ```bash
   ./program
   ```

## Usage
Upon running the program, it will prompt you to input a search key. Enter the desired key and press Enter.
The program will read the data from the `data.csv` file and perform a binary search on the data array to find the key. If the key is found, the corresponding data values will be printed. Otherwise, a "Data Not Found" message will be displayed.

## Sample Data
The sample data you provided has the following format:

```
Key    Data1    Data2    Data3
-------------------------------
0      1088     2088     3088
2      1052     2052     3052
5      1033     2033     3033
12     1029     2029     3029
20     1018     2018     3018
...
```

Each line represents a single data entry, with the key value followed by three data values (Data1, Data2, and Data3) separated by tabs or spaces.
Ensure that your data file follows this format and is named `data.csv` for the program to read it correctly.

## Implementation Details
The code defines a structure named `data` with the following fields:

- `key`: An integer representing the search key.
- `data1`, `data2`, `data3`: Double values representing additional data associated with the key.

The code reads data from the `data.csv` file using the `read_data` function. The function attempts to open the file and read each line, parsing the key and data values into the array of `data` structures.
The `binary_search` function performs a binary search on the array of structures to find the specified key. It returns the index of the found key or `-1` if the key is not found.

## Limitations
- The code assumes that the data file (`data.csv`) is properly formatted with the correct number of values per line and follows the key, data1, data2, data3 order.
- The search algorithm assumes that the array of data is sorted in ascending order of the `key` field.
- The code does not handle errors or exceptions that may occur during file I/O operations.

## License
This project is licensed under the MIT License. Feel free to use and modify the code as per your requirements.
