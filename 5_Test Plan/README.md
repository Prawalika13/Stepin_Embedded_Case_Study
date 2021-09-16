| Test ID |	Description |	Input	| Output |	Status |
| :---: | :------: | :----: | :----: | :----: |
| TID_01 |	Is person seated |	push button1=1 |	push button1=1 |	PASS |
| TID_02 |	Is personseated	| Push button1=0 |	Push button1=0 |	PASS |
| TIB_03 |	Is heater ON |	Push button2=1 |	Push button2=1 |	PASS |
| TID_04 |	Is heater OFF |	push button2=0 |	push button2=0 |	PASS |
| TID_05 |	Temperature Request |	Temp=0 |	heater=Off |	PASS |
| TID_06 |	Temperature Request |	Temp=23 |	heater=23 degree generation |	PASS |
| TID_07 |	Temperature Request |	Temp=27 |	heater=27 degree generation	| PASS |
| TID_08 |	Temperature Request |	Temp=29 |	heater=29 degree generation	| PASS |
| TID_09 |	Temperature Request |	Temp=33 |	heater=33 degree generation	| PASS |
| TID_10 |	Temperature Request |	Temp=20 |	heater=20 degree generation	| PASS |
| TID_11 |	LED ON |	Button=1 && Heater=1 |	LED=1	| PASS |
| TID_12 |	LED OFF	| Button=0 && Heater=0	| LED=0	| PASS |
| TID_13 |	Display	| Temperature :20 deg Cel |	Temperature :20 deg Cel	| PASS |