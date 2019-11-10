----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:58:19 06/23/2014 
-- Design Name: 
-- Module Name:    final_project - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity final_project is
    Port ( sec : inout  integer := 20;
           min : inout   integer := 5;
	    reset : inout std_logic  ;
		   clk : in std_logic  ;
  start_stop : in std_logic  ;
			
           sec_out : out   integer;
           min_out : out   integer;
       finish : out std_logic );
		 
		 
end final_project;

architecture Behavioral of final_project is

signal x : integer := sec  ;
signal y : integer := min ;

begin


process (clk,reset)
begin
--reset code 
if reset = '1' then
x <= 0 ;
y <= 0 ;
-- start stop code
elsif start_stop = '1' then
x <= x ;
y <= y ; 

-- main code
elsif clk'event and clk = '1' then
-- next state of seconds
if x = 0 then
x <= 59 ; else
x <= x -1 ;
end if ;

-- next state of minutes
if x= 0 then
y <= y-1 ; else
y <= y ;
end if ;

end if ;
-- output
sec_out <= x ;
min_out <= y ;

-- finish code
if x = 0 and y = 0 then
finish <= '1' ;
x <= 0;
y <= 0;
end if;


end process ;
end Behavioral;


