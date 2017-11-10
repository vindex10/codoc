How to run
==========

Prepare environment
-------------------

* Install Doxygen
* Install Python3
* Clone the project and `cd` into it
* Initialize virtual environment:
    ```
        python3 -m venv .env
    ```
* Activate environment:
    ```
        source .env/bin/activate
    ```
* Install Sphinx and Breathe:
    ```
        pip install Sphinx breathe
    ```

Run
---

To compile project and build docs:
```
    make all
```

Then, open `docs/sphinx/build/index.html` in your browser to see built tutorial.

