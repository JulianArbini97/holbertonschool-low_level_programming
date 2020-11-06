Here we learn everything about the process behind the GCC compiler. The GNU Compiler Collection.

It has 4 steps:

Pre Processor: This is the start, where the file starts to get prepared. This means that all comments are removed, and the library is interpreted. Once this is done, the file goes stright to the Compiler. The -E command is used to access to this result.

Compiler: Here all the coding gets assembled. And is ready for the next phase. The command is -c.

Assember: At this time the code alredy assembled becames an object code. The -s command to see the result.

Linker: Finally the last part of this process. In here basically the conection is made between the code that comes from all the mentioned process and the library where all the code files are. Once this is done, we have ourselves an executable file.



