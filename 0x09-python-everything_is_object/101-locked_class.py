#!/usr/bin/python3

class LockedClass:
    """
         prevents the user from dynamically creating new instance attributes,
         except if the new instance attribute is called first_name

         Attributes: 
         first_name (str) : first name
    """


    __slots__ = ["first_name"]

    def __init__(self):
        """Creates new instances of Locked Class."""

        self.first_name = "first_name"
