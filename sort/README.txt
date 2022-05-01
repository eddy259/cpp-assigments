list of mistakes:

1:29
Had assumed the question prompt was regarding sorting strings relative to
other strings alphabetically by first letter, but realize prompt can be
asking instead to sort a single string one million times, so copying code
into a new file named sortstring.cpp to edit

3:44
got qsort for a c-style string, had to write a comparator which compared
characters instead of strings


difficulties:
Trying to use qsort with standard strings was difficult due to a lack of
knowledge of the pointer information regarding standard strings, which seems
to be abstracted away. In addition, using standard sort with regular c-style
strings seemed difficult as well due to a lack of iterators over c-style
arrays. Using q-sort seemed to make sense with c-style strings though.



Listed findings:

C-style strings seem to be faster than standard strings in general due to
having less overhead. However, working with standard strings was far more
convenient than working with q-sort using C-style strings.
