# JSInterp

## Инструкция по сборке:
* Скачать **_Complete ANTLR 4.8 tool_** с сайта  [ANTLR](https://www.antlr.org/download.html)
* Установить библиотеку _**ANTLR4-runtime**_ cогласно инструкции на [github](https://github.com/antlr/antlr4/tree/master/runtime/Cpp)
* Воспользоваться скриптом **_generate.sh_** для генерации файлов грамматики для C
++ (предварительно поменять переменную LOCATION на актуальный путь до **_Complete ANTLR 4.8 tool_**)
* Скачать классы _**BaseLexer**_ и _**BaseParser**_ в директорию _**generated**_ с 
[anltr-grammar](https://github.com/antlr/grammars-v4/tree/master/javascript/javascript/Cpp) 
и произвести модификации согласно инстукции