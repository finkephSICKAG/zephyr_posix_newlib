Overview
********

The purpose of this sample is to show issues with the newlib in conjunction
with the ``CONFIG_POSIX_API`` Kconfig option enabled.

Building and Running
********************

Build the application like this:

.. code-block:: console

    west build -b <board_to_use> <path_to_sample>

Flash the application and run it. The application should build and run without any issues.

Now, change the Kconfig option ``CONFIG_POSIX_API`` to ``y`` and rebuild the application.
The compilation should succceed, but a warning like this should appear:

.. code-block:: console

    zephyr_posix_newlib/src/main.c:12:31: warning: implicit declaration of function 'isatty' [-Wimplicit-function-declaration]
        12 |         printf("isatty %d\n", isatty(0));
           |                               ^~~~~~