model Tearing1 "Example from Book Continous System Simulation by F. Cellier page 263"
   Real u0;
   Real i1(start=1),i2(start=1),i3(start=1);
   Real u1(start=1),u2(start=1),u3(start=1);
   parameter Real r1=10;
   parameter Real r2=10;
   parameter Real r3=10;
equation
   u0 = sin(time)*10;
   u1-r1*i1=0;
   u2-r2*i2=0;
   u3-r3*i3=0;
   u1+u3=u0;
   u2-u3=0;
   i1-i2-i3=0;
end Tearing1;
