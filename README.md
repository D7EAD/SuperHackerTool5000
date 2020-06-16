# SuperHackerTool5000
<br>
A stupid program meant to seem like it is doing things it clearly isn't. Inspired by the nerds on r/masterhacker.

## Compilation Instructions
### Linux

* Goto the src directory (`cd $(git rev-parse --show-toplevel)/SuperHackerTool5000`)
* Create a build directory and go to it (`mkdir build && cd build`)
* Generate Makefile (`cmake -DCMAKE_BUILD_TYPE=[Release or Debug] ..`)
* Compile the SuperHackerTool5000 (`make`)
* Now you can run it with (`./SuperHackerTool5000`) if you are in the build directory.
* Install *optional* (`make install`)
* Now you can run it with (`SuperHackerTool5000`) from everywhere
* To uninstall go to the build directory and enter (`xargs rm < install_manifest.txt`)

<!-- ### Windows -->
<!-- Somebody else gotta to this -->
