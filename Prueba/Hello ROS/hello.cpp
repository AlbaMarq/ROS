// This i s a ROS version of the standard " h e l l o , world" program .

// This header defines the standard ROS c l a s s e s .
#i n c l u d e <r o s / r o s . h>

i n t main ( i n t a r g c , c h a r ∗∗ a r g v ) {
  // I n i t i a l i z e the ROS system .
  r o s : : i n i t ( a r g c , argv , " h e l l o _ r o s " ) ;

  // E s t a b l i s h t h i s program as a ROS node .
  r o s : : NodeHandle nh ;

  // Send some output as a l o g message .
  ROS_INFO_STREAM( " H e l l o , ␣ROS ! " ) ;
}
