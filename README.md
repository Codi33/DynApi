# DynApi
## Single header dynamic api resolving

* Add function typedef
* initialize in initApi function

### The code is a simple concept of dynamic function resolving
### Project can be extended by community or its author

# Example
```C++
VOID(*fSleep)(DWORD); // Sleep function
...
```

```C++
void initApi()
{
    API("kernel32.dll", Sleep);
    ...
}
```

[![GitHub license](https://img.shields.io/github/license/Naereen/StrapDown.js.svg)](https://github.com/Naereen/StrapDown.js/blob/master/LICENSE)
![C++ logo](https://img.shields.io/badge/C++-Solutions-blue.svg?style=flat&logo=c%2B%2B)