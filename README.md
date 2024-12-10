# Substitution Cipher
A command-line substitution cipher program developed for CS50 that encrypts messages by replacing each letter with a corresponding letter from a provided 26-character key, preserving case and non-alphabetic characters.

# Description
This program implements a substitution cipher that encrypts messages by mapping each letter of the alphabet to a different letter according to a key provided by the user. The key must be 26 characters long and contain each letter of the alphabet exactly once. The program preserves the case of letters and leaves non-alphabetic characters unchanged.

# Requirements
- The key must be provided as a command-line argument
- The key must contain exactly 26 characters
- The key must contain each letter exactly once (case-insensitive)
- Only alphabetic characters are allowed in the key

# Error Messages
The program will return an error (exit code 1) if:
- No command-line argument is provided
- More than one command-line argument is provided
- The key is not exactly 26 characters long
- The key contains non-alphabetic characters
- The key contains duplicate letters

# Building
Compile the program using:

```
make substitution
```

Run the program using:

```
./substitution <add the 26 character key>
```

# Examples
Valid usage
```
$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
plaintext: Hello!
ciphertext: Ehbbq!
```

Invalid key length
```
$ ./substitution ABC
Key must contain 26 characters.
```

Missing key
```
$ ./substitution
Usage: ./substitution key
```

Invalid key
```
$ ./substitution AAAA
Key must contain each letter exactly once.
```
