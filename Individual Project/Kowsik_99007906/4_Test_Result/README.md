

# Test plan and output

### Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | LOCK | USER BUTTON PRESS ONCE  | Shall LOCK the car | Shall LOCK the car  | 
| 02 | UNLOCK | USER BUTTON PRESS TWICE | Shall UNLOCK the car |  Shall UNLOCK the car | 
| 03 | ALARM ACTIVATE / DEACTIVATE | USER BUTTON PRESS THREE TIMES | Shall ACTIVATE / DEACTIVATE ALARM  | Shall ACTIVATE / DEACTIVATE ALARM |
| 04 | APPROACH LIGHT | USER BUTTON PRESS FOUR TIMES | Shall turn On approach light | Shall turn On approach light |
| 05 |  ENCRYPTION | 1 OR 2 0R 3 0R 4 | encrypted data for 1/2/3/4 | encrypted data for 1/2/3/4 |


## LOW LEVEL TEST PLAN

| Test ID (for LOCK)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LOCK | USER BUTTON PRESS ONCE  | Shall ON all LED's as per ENCRYPTION | Shall ON all LED's as per ENCRYPTION | ✅ |
| 02 | Check for UNLOCK | USER BUTTON PRESS TWICE  | Shall OFF all LED's as per ENCRYPTION | Shall OFF all LED's as per ENCRYPTION | ✅ |
| 03 | Check for ALARM ACTIVATE/DEACTIVATE | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise as per ENCRYPTION |  Shall ON LED's ONCE clockwise as per ENCRYPTION | ✅ |
| 04 | Check for APPROACH LIGHT | USER BUTTON PRESS FOUR TIMES | Shall ON LED's once anti-clockwise as per ENCRYPTION |  Shall ON LED's once anti-clockwise as per ENCRYPTION | ✅ |
| 05 | Check for ENCRYPTION | 1/2/3/4  | 1244/1843/6789/5478 | 1244/1843/6789/5478 | ✅ |
| 06 | Check for btn_press() | counts no of button press  | 1/2/3/4 | 1/2/3/4 | ✅ |


