# What v e r s i o n o f CMake i s needed ?
cmake_minimum_required (VERSION 2 . 8 . 3 )

# Name o f t h i s package .
p r o j e c t ( a g i t r )

# Find t h e c a t k i n b u i l d system , and any o t h e r p a c k a g e s on
# which we depend .
f i n d _ p a c k a g e ( c a t k i n REQUIRED COMPONENTS r o s c p p )

# D e c l a r e our c a t k i n package .
c a t k i n _ p a c k a g e ( )

# S p e c i f y l o c a t i o n s o f h e a d e r f i l e s .
i n c l u d e _ d i r e c t o r i e s ( i n c l u d e $ {catkin_INCLUDE_DIRS } )

# D e c l a r e t h e e x e c u t a b l e , a l o n g with i t s s o u r c e f i l e s . I f
# t h e r e a r e m u l t i p l e e x e c u t a b l e s , u s e m u l t i p l e c o p i e s o f
# t h i s l i n e .
a d d _ e x e c u t a b l e ( h e l l o h e l l o . cpp )

# S p e c i f y l i b r a r i e s a g a i n s t which t o l i n k . Again , t h i s
# l i n e s h o u l d be c o p i e d f o r each d i s t i n c t e x e c u t a b l e i n
# t h e package .
t a r g e t _ l i n k _ l i b r a r i e s ( h e l l o $ { catkin_LIBRARIES } )
