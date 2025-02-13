# 42-get_next_line

## How to use

To clone the repository:
```
git clone git@github.com:justaPoet/42-get_next_line.git get_next_line
```
## Mandatory part

The get_next_line project at 42 is about creating a function that reads and returns a line from a file descriptor. Each successive call to `the get_next_line()` function should allow reading the entire content of a file one line at a time. The function needs to return the line that was just read, and if there's nothing left to read or if an error occurs, it should return NULL. It should work properly whether the source is a file or the standard input. An important point is that the function should return the line with a newline character `\n` at the end, unless the end of the file is reached and it doesn't end with a newline. The header file `get_next_line.h` must include at least the function prototype, and `get_next_line_utils.c` is used for any helper functions needed to implement `get_next_line()`.

## Bonus part

The bonus tasks for the `get_next_line` project involve two enhancements. First, implement get_next_line() using only one static variable. Second, modify the function to handle multiple file descriptors, allowing it to read from several FDs (e.g., 3, 4, 5) in any order without losing or mixing their content.

---

Thanks for reading, I hope you enjoy the project!  🚀
