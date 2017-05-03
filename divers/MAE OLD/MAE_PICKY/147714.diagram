format 76

statecanvas 128002 state_ref 142850 // mission pillage distrib
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 10.2705 336.407 2000 1610 993
end
pseudostatecanvas 128130 pseudostate_ref 147970 // initial
   xyz 737.519 420.129 2005
end
statecanvas 128514 state_ref 150146 // capture de gobelet escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 27.547 888.874 2005 281 75
end
pseudostatecanvas 128770 pseudostate_ref 148226 // exit_point
   xyz 292.264 949.878 3005 label_xy 249 969
end
statecanvas 128898 state_ref 150658 // capture stands cote escalier
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1292.41 585.925 2005 261 159
end
statecanvas 129026 state_ref 150786 // capture stand bordure
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1285.83 791.183 2005 263 145
end
statecanvas 129154 state_ref 150914 // vidage distributeur
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 1283.84 1007.08 2005 267 89
end
statecanvas 129282 state_ref 172546 // rejoindre le point de depart mission
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 547.979 459.077 2010 400 100
end
pseudostatecanvas 129922 pseudostate_ref 174722 // choice
   xyz 735.979 638.955 2005
end
pseudostatecanvas 130690 pseudostate_ref 174850 // exit_point
   xyz 484.147 1132.32 3005 label_xy 391 1136
end
statecanvas 130946 state_ref 172674 // sortie zone
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 661.494 975.267 2005 553 173
end
pseudostatecanvas 131202 pseudostate_ref 174978 // choice
   xyz 848.284 735.618 2005
end
pseudostatecanvas 132098 pseudostate_ref 195842 // choice
   xyz 228.684 635.31 2005
end
pseudostatecanvas 133890 pseudostate_ref 202498 // exit_point
   xyz 739.92 549.886 3005 label_xy 735 568
end
pseudostatecanvas 134274 pseudostate_ref 209282 // exit_point
   xyz 1509.24 726.56 3005 label_xy 1462 759
end
pseudostatecanvas 134530 pseudostate_ref 209538 // exit_point
   xyz 1492.6 923.6 3005 label_xy 1478 958
end
pseudostatecanvas 135042 pseudostate_ref 209794 // exit_point
   xyz 1312 1086 3005 label_xy 1285 1105
end
transitioncanvas 129410 transition_ref 200834 // <transition>
  
  from ref 128130 z 2011 to ref 129282
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130306 transition_ref 201346 // <transition>
  
  from ref 129922 z 2006 label "[master->get_gestionnaire_mission()->get_mission_distrib()->is_capture_gobelet_done()]" xyz 811 652 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131330 transition_ref 201986 // <transition>
  
  from ref 128770 z 3006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131458 transition_ref 202114 // <transition>
  
  from ref 131202 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_distrib()->is_netoyage_zone_done() ]" xyz 820 712 2006 to ref 128898
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 131970 transition_ref 202498 // <transition>
  decenter_begin 888
  
  from ref 130946 z 3006 to ref 130690
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132226 transition_ref 227330 // <transition>
  decenter_end 405
  
  from ref 129922 z 2006 label "[!master->get_gestionnaire_mission()->get_mission_distrib()->is_capture_gobelet_done() ]" xyz 277 631 2006 to ref 132098
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 132482 transition_ref 227586 // <transition>
  decenter_begin 458
  
  from ref 132098 z 2006 label "[!master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()]" xyz 121 801 2006 to ref 128514
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 133250 transition_ref 227970 // <transition>
  
  from ref 131202 z 2006 label "[master->get_gestionnaire_mission()->get_mission_distrib()->is_netoyage_zone_done() ]" xyz 674 865 2006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134018 transition_ref 242434 // <transition>
  
  from ref 133890 z 3006 to ref 129922
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134146 transition_ref 255874 // <transition>
  
  from ref 132098 z 2006 label "[master->get_gestionnaire_mission()->get_element_robot()->gobelet_present()]" xyz 363 703 2006 to ref 131202
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134402 transition_ref 257410 // <transition>
  
  from ref 134274 z 3006 to ref 129026
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 134658 transition_ref 258434 // <transition>
  
  from ref 134530 z 3006 to ref 129154
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 135170 transition_ref 381442 // <transition>
  
  from ref 135042 z 3006 to ref 130946
  write_horizontally default show_definition default drawing_language default
end
end
