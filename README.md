# GPIO and Button Control
## Labeled Circuit
<img width="2515" height="1315" alt="image" src="https://github.com/user-attachments/assets/84e7d255-2c0b-4de6-981d-b85812491b6e" />

## Observation Table

| Button State | GPIO23 Reading | LED1 (Status) | LED2 (Opposite) |
|--------------|----------------|---------------|-----------------|
| Released     | HIGH           | OFF           | ON              |
| Pressed      | LOW            | ON            | OFF             |

On reset: both LEDs should immediately show the released state (LED1 off, LED2 on) since setup() sets that explicitly, and the pull-up prevents the pin from floating/reading randomly when the button isn't pressed.
