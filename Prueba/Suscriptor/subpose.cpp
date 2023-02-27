// This program s u b s c r i b e s to t u r t l e 1 /pose and shows i t s
// messages on the screen .
#i n c l u d e <r o s / r o s . h>
#i n c l u d e <t u r t l e s i m / Pose . h>
#i n c l u d e <iomanip> // f o r std : : s e t p r e c i s i o n and std : : f i x e d

// A c a l l b a c k function . Executed each time a new pose message a r r i v e s .
v o i d p o s e M e s s a g e R e c e i v e d ( c o n s t t u r t l e s i m : : Pose& msg ) 
{
  ROS_INFO_STREAM( s t d : : s e t p r e c i s i o n ( 2 ) << s t d : : f i x e d
  << " p o s i t i o n =(" << msg . x << " , " << msg . y << " ) "
  << " ␣ d i r e c t i o n=" << msg . t h e t a ) ;
}

i n t main ( i n t a r g c , c h a r ∗∗ a r g v ) 
{
  // I n i t i a l i z e the ROS system and become a node .
  r o s : : i n i t ( a r g c , argv , " s u b s c r i b e _ t o _ p o s e " ) ;
  r o s : : NodeHandle nh ;

  // Create a subscriber o b j e c t .
  r o s : : S u b s c r i b e r sub = nh . s u b s c r i b e ( " t u r t l e 1 / p o s e " , 1 0 0 0 ,
    &p o s e M e s s a g e R e c e i v e d ) ;

  // Let ROS take over .
  r o s : : s p i n ( ) ;
}
