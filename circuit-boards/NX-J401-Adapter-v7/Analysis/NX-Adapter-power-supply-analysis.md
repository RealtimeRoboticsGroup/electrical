# NX Adapter Power Supply Analysis

## Design Requirements

| DESIGN PARAMETER    | VALUE       |
| ------------------- | ----------- |
| Input Voltage Rane  | 5 - 35V     |
| Output Voltage      | 15V         |
| Output Current      | 3A          |
| Switching Frequency | 589kHz      |
| Mode                | CCM, Hiccup |

Following design procedure listed in LM5176 datasheet section 8.2.2

#### Switching Frequency

$R_T = \frac{\frac{1}{F_{SW}} - \text{190 ns}}{\text{116 pF}}$

$R_T = \text{13.0 k}$

#### Vout

$R_{FB1}= \text{20.0 k}$

$R_{FB2} = \left( \frac{V_{OUT}-\text{0.8V}}{\text{0.8V}} \right) \times R_{FB1}$

$R_{FB2} = \text{357 k}$

#### Inductor Selection

Determine inductance while in buck mode:

$L_{BUCK}=\frac{\left(V_{IN(MAX)}-V_{OUT}\right) \times V_{OUT}}{\text{0.4} \times I_{OUT(MAX)} \times F_{SW} \times V_{IN(MAX)}} $

$L_{BUCK} = \text{12.1 } \mu H$

Next determine the inductance in boost mode

$L_{BOOST} = \frac{V_{IN(MIN)}^2 \times (V_{OUT}-V_{IN(MIN)})}{0.3 \times I_{OUT(MAX)} \times F_{SW} \times V_{OUT}}$

$L_{BOOST} = \text{2.1 } \mu H$

$2.2\mu H$ inductor selected.  The ripple current at Vin of 20V and 35V is:







$I_{L(MAX)} = \frac{V_{OUT} \times I_{OUT(MAX)}}{0.9 \times V_{IN(MIN)}}$

$I_{L(MAX)} = \text{10 A} $

$I_{L(PEAK)} = I_{L(MAX)} + \frac{V_{IN(MIN)}\times (V_{OUT} - V_{IN(MAX)}}{2 \times L1 \times F_{SW} \times V_{OUT}}$

$I_{L(PEAK)} = \text{11.3 A}$






