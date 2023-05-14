  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 6;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planta_P)
    ;%
      section.nData     = 50;
      section.data(50)  = dumData; %prealloc
      
	  ;% Planta_P.N_a
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.GP_a
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_P.Z_a
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_P.P_a
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_P.GN_a
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_P.PP_a
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planta_P.PN_a
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planta_P.Z_a_o
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planta_P.B_a
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planta_P.A_a
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planta_P.M_a
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planta_P.HILInitialize_analog_input_maxi
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planta_P.HILInitialize_analog_input_mini
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planta_P.HILInitialize_analog_output_max
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planta_P.HILInitialize_analog_output_min
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planta_P.N_b
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planta_P.GP_b
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planta_P.Z_b
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planta_P.P_b
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planta_P.GN_b
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planta_P.PP_b
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Planta_P.PN_b
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Planta_P.Z_b_g
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Planta_P.B_b
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Planta_P.A_b
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Planta_P.M_b
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Planta_P.N_c
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Planta_P.GP_c
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Planta_P.Z_c
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Planta_P.P_c
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Planta_P.GN_c
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Planta_P.PP_c
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Planta_P.PN_c
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Planta_P.Z_c_g
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Planta_P.B_c
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Planta_P.A_c
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Planta_P.M_c
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Planta_P.GP_d
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Planta_P.GN_d
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Planta_P.HILInitialize_final_analog_outp
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Planta_P.HILInitialize_final_pwm_outputs
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% Planta_P.HILInitialize_initial_analog_ou
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% Planta_P.HILInitialize_initial_pwm_outpu
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% Planta_P.HILInitialize_pwm_frequency
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% Planta_P.HILInitialize_set_other_outputs
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% Planta_P.HILInitialize_set_other_outpu_d
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% Planta_P.HILInitialize_set_other_outpu_p
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% Planta_P.HILInitialize_set_other_outpu_f
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% Planta_P.HILInitialize_watchdog_analog_o
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% Planta_P.HILInitialize_watchdog_pwm_outp
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Planta_P.HILInitialize_hardware_clocks
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.HILInitialize_initial_encoder_c
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_P.HILInitialize_pwm_modes
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_P.HILInitialize_watchdog_digital_
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Planta_P.HILInitialize_analog_input_chan
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.HILInitialize_analog_output_cha
	  section.data(2).logicalSrcIdx = 55;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Planta_P.HILWriteAnalog_channels
	  section.data(3).logicalSrcIdx = 56;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Planta_P.HILReadAnalog_channels
	  section.data(4).logicalSrcIdx = 57;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Planta_P.HILInitialize_encoder_channels
	  section.data(5).logicalSrcIdx = 58;
	  section.data(5).dtTransOffset = 7;
	
	  ;% Planta_P.HILInitialize_quadrature
	  section.data(6).logicalSrcIdx = 59;
	  section.data(6).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% Planta_P.HILInitialize_active
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.HILInitialize_final_digital_out
	  section.data(2).logicalSrcIdx = 61;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_P.HILInitialize_initial_digital_o
	  section.data(3).logicalSrcIdx = 62;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_P.HILInitialize_set_analog_input_
	  section.data(4).logicalSrcIdx = 63;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_P.HILInitialize_set_analog_inpu_h
	  section.data(5).logicalSrcIdx = 64;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_P.HILInitialize_set_analog_output
	  section.data(6).logicalSrcIdx = 65;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planta_P.HILInitialize_set_analog_outp_c
	  section.data(7).logicalSrcIdx = 66;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planta_P.HILInitialize_set_analog_outp_o
	  section.data(8).logicalSrcIdx = 67;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planta_P.HILInitialize_set_analog_outp_e
	  section.data(9).logicalSrcIdx = 68;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planta_P.HILInitialize_set_analog_outp_b
	  section.data(10).logicalSrcIdx = 69;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planta_P.HILInitialize_set_analog_outp_h
	  section.data(11).logicalSrcIdx = 70;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planta_P.HILInitialize_set_analog_out_bm
	  section.data(12).logicalSrcIdx = 71;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planta_P.HILInitialize_set_clock_frequen
	  section.data(13).logicalSrcIdx = 72;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planta_P.HILInitialize_set_clock_frequ_i
	  section.data(14).logicalSrcIdx = 73;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planta_P.HILInitialize_set_clock_params_
	  section.data(15).logicalSrcIdx = 74;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planta_P.HILInitialize_set_clock_param_n
	  section.data(16).logicalSrcIdx = 75;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planta_P.HILInitialize_set_digital_outpu
	  section.data(17).logicalSrcIdx = 76;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planta_P.HILInitialize_set_digital_out_l
	  section.data(18).logicalSrcIdx = 77;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planta_P.HILInitialize_set_digital_out_k
	  section.data(19).logicalSrcIdx = 78;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planta_P.HILInitialize_set_digital_out_o
	  section.data(20).logicalSrcIdx = 79;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planta_P.HILInitialize_set_digital_out_j
	  section.data(21).logicalSrcIdx = 80;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Planta_P.HILInitialize_set_digital_ou_ol
	  section.data(22).logicalSrcIdx = 81;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Planta_P.HILInitialize_set_digital_out_i
	  section.data(23).logicalSrcIdx = 82;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Planta_P.HILInitialize_set_encoder_count
	  section.data(24).logicalSrcIdx = 83;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Planta_P.HILInitialize_set_encoder_cou_e
	  section.data(25).logicalSrcIdx = 84;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Planta_P.HILInitialize_set_encoder_param
	  section.data(26).logicalSrcIdx = 85;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Planta_P.HILInitialize_set_encoder_par_a
	  section.data(27).logicalSrcIdx = 86;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Planta_P.HILInitialize_set_other_outpu_a
	  section.data(28).logicalSrcIdx = 87;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Planta_P.HILInitialize_set_pwm_outputs_a
	  section.data(29).logicalSrcIdx = 88;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Planta_P.HILInitialize_set_pwm_outputs_i
	  section.data(30).logicalSrcIdx = 89;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Planta_P.HILInitialize_set_pwm_outputs_j
	  section.data(31).logicalSrcIdx = 90;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Planta_P.HILInitialize_set_pwm_outputs_b
	  section.data(32).logicalSrcIdx = 91;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Planta_P.HILInitialize_set_pwm_outputs_o
	  section.data(33).logicalSrcIdx = 92;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Planta_P.HILInitialize_set_pwm_params_at
	  section.data(34).logicalSrcIdx = 93;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Planta_P.HILInitialize_set_pwm_params__e
	  section.data(35).logicalSrcIdx = 94;
	  section.data(35).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 83;
      section.data(83)  = dumData; %prealloc
      
	  ;% Planta_P.Switch_Threshold
	  section.data(1).logicalSrcIdx = 95;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.Out1_Y0
	  section.data(2).logicalSrcIdx = 96;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_P._Value
	  section.data(3).logicalSrcIdx = 97;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_P.Out1_Y0_p
	  section.data(4).logicalSrcIdx = 98;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_P._Value_j
	  section.data(5).logicalSrcIdx = 99;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_P.Out1_Y0_f
	  section.data(6).logicalSrcIdx = 100;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planta_P._Value_k
	  section.data(7).logicalSrcIdx = 101;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planta_P.Out1_Y0_n
	  section.data(8).logicalSrcIdx = 102;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planta_P._Value_g
	  section.data(9).logicalSrcIdx = 103;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planta_P.Out1_Y0_k
	  section.data(10).logicalSrcIdx = 104;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planta_P._Value_d
	  section.data(11).logicalSrcIdx = 105;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planta_P.Out1_Y0_j
	  section.data(12).logicalSrcIdx = 106;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planta_P._Value_l
	  section.data(13).logicalSrcIdx = 107;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planta_P.Out1_Y0_l
	  section.data(14).logicalSrcIdx = 108;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planta_P.One_Value
	  section.data(15).logicalSrcIdx = 109;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planta_P.Out1_Y0_g
	  section.data(16).logicalSrcIdx = 110;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planta_P._Value_o
	  section.data(17).logicalSrcIdx = 111;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planta_P.Out1_Y0_ks
	  section.data(18).logicalSrcIdx = 112;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planta_P._Value_c
	  section.data(19).logicalSrcIdx = 113;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planta_P.Out1_Y0_m
	  section.data(20).logicalSrcIdx = 114;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planta_P._Value_ov
	  section.data(21).logicalSrcIdx = 115;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Planta_P.Out1_Y0_o
	  section.data(22).logicalSrcIdx = 116;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Planta_P._Value_b
	  section.data(23).logicalSrcIdx = 117;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Planta_P.Out1_Y0_k4
	  section.data(24).logicalSrcIdx = 118;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Planta_P._Value_n
	  section.data(25).logicalSrcIdx = 119;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Planta_P.Out1_Y0_ok
	  section.data(26).logicalSrcIdx = 120;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Planta_P._Value_i
	  section.data(27).logicalSrcIdx = 121;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Planta_P.Out1_Y0_pp
	  section.data(28).logicalSrcIdx = 122;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Planta_P._Value_h
	  section.data(29).logicalSrcIdx = 123;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Planta_P.Out1_Y0_gq
	  section.data(30).logicalSrcIdx = 124;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Planta_P._Value_a
	  section.data(31).logicalSrcIdx = 125;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Planta_P.Out1_Y0_fa
	  section.data(32).logicalSrcIdx = 126;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Planta_P._Value_dk
	  section.data(33).logicalSrcIdx = 127;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Planta_P.Out1_Y0_d
	  section.data(34).logicalSrcIdx = 128;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Planta_P._Value_lc
	  section.data(35).logicalSrcIdx = 129;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Planta_P.Out1_Y0_fz
	  section.data(36).logicalSrcIdx = 130;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Planta_P._Value_ck
	  section.data(37).logicalSrcIdx = 131;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Planta_P.Out1_Y0_ju
	  section.data(38).logicalSrcIdx = 132;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Planta_P._Value_cks
	  section.data(39).logicalSrcIdx = 133;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Planta_P.Out1_Y0_b
	  section.data(40).logicalSrcIdx = 134;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Planta_P._Value_p
	  section.data(41).logicalSrcIdx = 135;
	  section.data(41).dtTransOffset = 40;
	
	  ;% Planta_P.Out1_Y0_ms
	  section.data(42).logicalSrcIdx = 136;
	  section.data(42).dtTransOffset = 41;
	
	  ;% Planta_P._Value_m
	  section.data(43).logicalSrcIdx = 137;
	  section.data(43).dtTransOffset = 42;
	
	  ;% Planta_P.Out1_Y0_c
	  section.data(44).logicalSrcIdx = 138;
	  section.data(44).dtTransOffset = 43;
	
	  ;% Planta_P._Value_p5
	  section.data(45).logicalSrcIdx = 139;
	  section.data(45).dtTransOffset = 44;
	
	  ;% Planta_P.Out1_Y0_oq
	  section.data(46).logicalSrcIdx = 140;
	  section.data(46).dtTransOffset = 45;
	
	  ;% Planta_P._Value_ko
	  section.data(47).logicalSrcIdx = 141;
	  section.data(47).dtTransOffset = 46;
	
	  ;% Planta_P.Constant_Value
	  section.data(48).logicalSrcIdx = 142;
	  section.data(48).dtTransOffset = 47;
	
	  ;% Planta_P.TransferFcn_A
	  section.data(49).logicalSrcIdx = 143;
	  section.data(49).dtTransOffset = 48;
	
	  ;% Planta_P.TransferFcn_C
	  section.data(50).logicalSrcIdx = 144;
	  section.data(50).dtTransOffset = 49;
	
	  ;% Planta_P.Weight_Value
	  section.data(51).logicalSrcIdx = 145;
	  section.data(51).dtTransOffset = 50;
	
	  ;% Planta_P.OperatingLevel_Value
	  section.data(52).logicalSrcIdx = 146;
	  section.data(52).dtTransOffset = 51;
	
	  ;% Planta_P.TransferFcn1_A
	  section.data(53).logicalSrcIdx = 147;
	  section.data(53).dtTransOffset = 52;
	
	  ;% Planta_P.TransferFcn1_C
	  section.data(54).logicalSrcIdx = 148;
	  section.data(54).dtTransOffset = 53;
	
	  ;% Planta_P.PNConstant_Value
	  section.data(55).logicalSrcIdx = 149;
	  section.data(55).dtTransOffset = 54;
	
	  ;% Planta_P.Weight_Value_o
	  section.data(56).logicalSrcIdx = 150;
	  section.data(56).dtTransOffset = 55;
	
	  ;% Planta_P.Weight_Value_a
	  section.data(57).logicalSrcIdx = 151;
	  section.data(57).dtTransOffset = 56;
	
	  ;% Planta_P.GNConstant_Value
	  section.data(58).logicalSrcIdx = 152;
	  section.data(58).dtTransOffset = 57;
	
	  ;% Planta_P.Weight_Value_l
	  section.data(59).logicalSrcIdx = 153;
	  section.data(59).dtTransOffset = 58;
	
	  ;% Planta_P.GPConstant_Value
	  section.data(60).logicalSrcIdx = 154;
	  section.data(60).dtTransOffset = 59;
	
	  ;% Planta_P.Weight_Value_j
	  section.data(61).logicalSrcIdx = 155;
	  section.data(61).dtTransOffset = 60;
	
	  ;% Planta_P.Weight_Value_le
	  section.data(62).logicalSrcIdx = 156;
	  section.data(62).dtTransOffset = 61;
	
	  ;% Planta_P.Weight_Value_g
	  section.data(63).logicalSrcIdx = 157;
	  section.data(63).dtTransOffset = 62;
	
	  ;% Planta_P.Weight_Value_jk
	  section.data(64).logicalSrcIdx = 158;
	  section.data(64).dtTransOffset = 63;
	
	  ;% Planta_P.Weight_Value_h
	  section.data(65).logicalSrcIdx = 159;
	  section.data(65).dtTransOffset = 64;
	
	  ;% Planta_P.Weight_Value_i
	  section.data(66).logicalSrcIdx = 160;
	  section.data(66).dtTransOffset = 65;
	
	  ;% Planta_P.PPConstant_Value
	  section.data(67).logicalSrcIdx = 161;
	  section.data(67).dtTransOffset = 66;
	
	  ;% Planta_P.Weight_Value_k
	  section.data(68).logicalSrcIdx = 162;
	  section.data(68).dtTransOffset = 67;
	
	  ;% Planta_P.Weight_Value_m
	  section.data(69).logicalSrcIdx = 163;
	  section.data(69).dtTransOffset = 68;
	
	  ;% Planta_P.Weight_Value_c
	  section.data(70).logicalSrcIdx = 164;
	  section.data(70).dtTransOffset = 69;
	
	  ;% Planta_P.Z1Constant_Value
	  section.data(71).logicalSrcIdx = 165;
	  section.data(71).dtTransOffset = 70;
	
	  ;% Planta_P.Weight_Value_n
	  section.data(72).logicalSrcIdx = 166;
	  section.data(72).dtTransOffset = 71;
	
	  ;% Planta_P.Z2Constant_Value
	  section.data(73).logicalSrcIdx = 167;
	  section.data(73).dtTransOffset = 72;
	
	  ;% Planta_P.Weight_Value_ix
	  section.data(74).logicalSrcIdx = 168;
	  section.data(74).dtTransOffset = 73;
	
	  ;% Planta_P.ZConstant_Value
	  section.data(75).logicalSrcIdx = 169;
	  section.data(75).dtTransOffset = 74;
	
	  ;% Planta_P.Zero_Value
	  section.data(76).logicalSrcIdx = 170;
	  section.data(76).dtTransOffset = 75;
	
	  ;% Planta_P.MidRange_Value
	  section.data(77).logicalSrcIdx = 171;
	  section.data(77).dtTransOffset = 76;
	
	  ;% Planta_P.Switch_Threshold_c
	  section.data(78).logicalSrcIdx = 172;
	  section.data(78).dtTransOffset = 77;
	
	  ;% Planta_P.Saturation_UpperSat
	  section.data(79).logicalSrcIdx = 173;
	  section.data(79).dtTransOffset = 78;
	
	  ;% Planta_P.Saturation_LowerSat
	  section.data(80).logicalSrcIdx = 174;
	  section.data(80).dtTransOffset = 79;
	
	  ;% Planta_P.AmplifierGain_Gain
	  section.data(81).logicalSrcIdx = 175;
	  section.data(81).dtTransOffset = 80;
	
	  ;% Planta_P.VoltstocmTank1_Gain
	  section.data(82).logicalSrcIdx = 176;
	  section.data(82).dtTransOffset = 81;
	
	  ;% Planta_P.VoltstocmTank2_Gain
	  section.data(83).logicalSrcIdx = 177;
	  section.data(83).dtTransOffset = 82;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Planta_P.HILWriteAnalog_Active
	  section.data(1).logicalSrcIdx = 178;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_P.HILReadAnalog_Active
	  section.data(2).logicalSrcIdx = 179;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planta_B)
    ;%
      section.nData     = 21;
      section.data(21)  = dumData; %prealloc
      
	  ;% Planta_B.TransferFcn
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_B.OperatingLevel
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_B.TransferFcn1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_B.Sum
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_B.Derivative
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_B.Merge
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planta_B.Merge_h
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planta_B.Merge_o
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planta_B.Merge_b
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planta_B.Merge_e
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planta_B.Merge_oi
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planta_B.Merge_f
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planta_B.Merge_p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planta_B.Merge_l
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planta_B.Merge_ox
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planta_B.Merge_oxl
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planta_B.Merge_c
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planta_B.Saturation
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planta_B.AmplifierGain
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planta_B.VoltstocmTank1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planta_B.VoltstocmTank2
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 27;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Planta_DW)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% Planta_DW.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_DW.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Planta_DW.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Planta_DW.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Planta_DW.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Planta_DW.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% Planta_DW.TimeStampA
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% Planta_DW.LastUAtTimeA
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% Planta_DW.TimeStampB
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% Planta_DW.LastUAtTimeB
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% Planta_DW.HILReadAnalog_Buffer
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Planta_DW.HILWriteAnalog_PWORK
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_DW.MotorVoltageV_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_DW.Tank1Levelcm_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_DW.Tank2Levelcm_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_DW.HILReadAnalog_PWORK
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_DW.Scope_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Planta_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_DW.HILInitialize_QuadratureModes
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_DW.HILInitialize_InitialEICounts
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 36;
      section.data(36)  = dumData; %prealloc
      
	  ;% Planta_DW.If_ActiveSubsystem
	  section.data(1).logicalSrcIdx = 21;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC
	  section.data(2).logicalSrcIdx = 22;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanBC
	  section.data(3).logicalSrcIdx = 23;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Planta_DW.If_ActiveSubsystem_l
	  section.data(4).logicalSrcIdx = 24;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_o
	  section.data(5).logicalSrcIdx = 25;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Planta_DW.IfActionSubsystem2_SubsysRanBC
	  section.data(6).logicalSrcIdx = 26;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Planta_DW.If_ActiveSubsystem_f
	  section.data(7).logicalSrcIdx = 27;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_n
	  section.data(8).logicalSrcIdx = 28;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_h
	  section.data(9).logicalSrcIdx = 29;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Planta_DW.If_ActiveSubsystem_e
	  section.data(10).logicalSrcIdx = 30;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_h
	  section.data(11).logicalSrcIdx = 31;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_o
	  section.data(12).logicalSrcIdx = 32;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Planta_DW.If_ActiveSubsystem_j
	  section.data(13).logicalSrcIdx = 33;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_f
	  section.data(14).logicalSrcIdx = 34;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Planta_DW.IfActionSubsystem2_SubsysRanB_g
	  section.data(15).logicalSrcIdx = 35;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Planta_DW.If_ActiveSubsystem_a
	  section.data(16).logicalSrcIdx = 36;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_a
	  section.data(17).logicalSrcIdx = 37;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_k
	  section.data(18).logicalSrcIdx = 38;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Planta_DW.If_ActiveSubsystem_i
	  section.data(19).logicalSrcIdx = 39;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanB_aa
	  section.data(20).logicalSrcIdx = 40;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_f
	  section.data(21).logicalSrcIdx = 41;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Planta_DW.If_ActiveSubsystem_b
	  section.data(22).logicalSrcIdx = 42;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_m
	  section.data(23).logicalSrcIdx = 43;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_m
	  section.data(24).logicalSrcIdx = 44;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Planta_DW.If_ActiveSubsystem_k
	  section.data(25).logicalSrcIdx = 45;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_l
	  section.data(26).logicalSrcIdx = 46;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_g
	  section.data(27).logicalSrcIdx = 47;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Planta_DW.If_ActiveSubsystem_m
	  section.data(28).logicalSrcIdx = 48;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanB_nr
	  section.data(29).logicalSrcIdx = 49;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRan_hc
	  section.data(30).logicalSrcIdx = 50;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Planta_DW.If_ActiveSubsystem_g
	  section.data(31).logicalSrcIdx = 51;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Planta_DW.IfActionSubsystem_SubsysRanBC_j
	  section.data(32).logicalSrcIdx = 52;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Planta_DW.IfActionSubsystem1_SubsysRanB_b
	  section.data(33).logicalSrcIdx = 53;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Planta_DW.If_ActiveSubsystem_k2
	  section.data(34).logicalSrcIdx = 54;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Planta_DW.ActionOne_SubsysRanBC
	  section.data(35).logicalSrcIdx = 55;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Planta_DW.Actionu1_SubsysRanBC
	  section.data(36).logicalSrcIdx = 56;
	  section.data(36).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_dw.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 57;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_ol.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_h.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 59;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_b.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_m.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_f.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_n.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_o.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_k.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 65;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_a.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_j.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_i.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 68;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_p.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 69;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem1_a.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_c.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem1_i.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_e.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_m.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2_g.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 75;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(24) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3_e.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 76;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(25) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem2.IfActionSubsystem2_SubsysRanBC
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(26) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Planta_DW.IfActionSubsystem3.IfActionSubsystem3_SubsysRanBC
	  section.data(1).logicalSrcIdx = 78;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(27) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3966864910;
  targMap.checksum1 = 698207570;
  targMap.checksum2 = 3538001449;
  targMap.checksum3 = 1720607687;

