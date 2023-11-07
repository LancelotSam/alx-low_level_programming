#!/usr/bin/python3
"""Defines an inherited list class MyList."""


class MYList(list):
    """Inherits from built-in list class and implements a sorted printing"""

    def print_sorted(self):
        """Print a list sorted in ascending order."""
        print(sorted(self))
