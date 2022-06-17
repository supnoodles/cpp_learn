/*
1.volatile qualifier prevents compiler from applying any optimisations on objects/data types.
  This is used when values can be changed by code outside scope of current code at any time.
2. System always reads current value of a volatile object from memory location, 
   rather than keeping it's value in a temporary register at the point it's requested.

*/ 