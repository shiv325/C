# Format Specifiers

- Placeholders for variables within input and output functions
- Start with percentage sign `%`, followed by a character
- Tells the compiler what type of data being handled

Here, symbol `%` is used as prefix that indicates beginning of format specifier

## Types of Format Specifiers

### 1. Integer Types 
  1. `%d` : Signed Decimal Integer
  2. `%i` : Signed Decimal Integer
  3. `%u` : Unsigned Decimal Integer
  4. `%o` : Unsigned Octal
  5. `%x` : Unsigned Hexadecimal Integer (Lowercase)
  6. `%X` : Unsigned Hexadecimal Integer (Uppercase)

### 2. Floating Point Types
  1. `%f` : Signed Floating Point Decimals
  2. `%e` : Scientific Notation (Lowercase)
  3. `%E` : Scientific Notation (Uppercase)
  4. `%g` : Uses `%e` or `%f`, whichever is shorter
  5. `%G` : Uses `%E` or `%f`, whichever is shorter

### 3. Character Types
  1. `%c` : Single Character
  2. `%s` : String of Characters

### 4. Pointer Types
  1. `%p` : Pointer Address

### 5. Length Modifiers
  - Specify size of data type being printed or read
  - Used in combination with other format specifiers

  1. `h` : Short Integer
     - `%hd` : Signed Short Integer
     - `%hu` : Unsigned Short Integer

  2. `l` : Long Integer
     - `%ld` : Signed Long Integer
     - `%lu` : Unsigned Long Integer

  3. `ll` : Long Long Integer
     - `%lld` : Signed Long Long Integer
     - `%llu` : Unsigned Long Long Integer)

  4. `L` : Long Double
     - `%Lf` : Long Double

### 6. Additional Format Specifiers
  1. `%n` : Number of characters printed so far (stores this number in an integer variable)
