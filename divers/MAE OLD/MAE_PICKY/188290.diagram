format 76

statecanvas 128002 state_ref 157570 // chope du stand sur la route
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 114 98 2000 947 975
end
statecanvas 128258 state_ref 224258 // BF droite
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 200 390 2005 433 187
end
statecanvas 128386 state_ref 224386 // ouverture de pince
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 136 207 2005 327 159
end
statecanvas 128514 state_ref 224514 // chope
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 420 653 2005 569 187
end
pseudostatecanvas 128642 pseudostate_ref 216450 // initial
   xyz 242 154 2005
end
pseudostatecanvas 129282 pseudostate_ref 243586 // exit_point
   xyz 955 547 3005 label_xy 936 566
end
transitioncanvas 129666 transition_ref 294914 // <transition>
  
  from ref 128386 z 2006 label "pince_ouverte" xyz 316 369 2006 to ref 128258
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129794 transition_ref 295042 // <transition>
  
  from ref 128258 z 2006 label "assFini" xyz 542 607 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130818 transition_ref 350466 // <transition>
  
  from ref 128642 z 2006 to ref 128386
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130946 transition_ref 350594 // <transition>
  
  from ref 128514 z 3006 label "pince_stand_by" xyz 852 597 3006 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
end
