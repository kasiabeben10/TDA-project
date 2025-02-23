# TDA-project
Topological Analysis of Dependencies Between Krakow's High Schools

Project realized as part of Computer Mathematics Course (2021/2022) at at the Jagiellonian University in Krakow (additional classes during education at the Bartłomiej Nowodworski High School in Krakow) by:
- [Katarzyna Bęben](https://github.com/kasiabeben10)
- [Jagoda Kurosad](https://github.com/jagodakurosad)

## Problem Description
This project investigates the relationship between the topology of Krakow's high schools and their ranking position on [www.waszaedukacja.pl](https://www.waszaedukacja.pl). We aimed to determine how measurable human-dependent characteristics influence the success of educational institutions.

To achieve this, we applied tools from Topological Data Analysis (TDA).

## Data Description
### Source:
[www.naszeszkoly.krakow.pl](https://www.naszeszkoly.krakow.pl)

### Considered Parameters:
- Number of students in the school
- Percentage of female students
- Average number of students per class
- Number of teachers
- Percentage of certified teachers
- Percentage of trainee teachers
- Progress in mathematics potential (difference in the percentage of students with high potential at graduation vs. enrollment, based on exam results)
- Progress in Polish language potential (similar methodology as for mathematics)

These parameters formed the coordinates of point clouds, analyzed over ten years (2012-2021).

## Initial Hypothesis
The ranking position of Krakow's high schools depends on their topology.

## Filtration Procedure
1. We extracted data from the provided website and structured it into files.
2. Data normalization was performed using our custom C program (`program.c`), scaling values to the range <0,1>.
3. Barcode diagrams were generated using [Ripser Live](https://live.ripser.org), employing Vietoris-Rips filtration.

## Results
- The barcode of the top-ranking high school displayed slight asymmetry, with a narrow base and two persistent 1-dimensional holes.
- Other schools' barcodes did not show clear patterns correlating with ranking position.
- No evident similarities in barcodes were observed among schools with similar rankings.

## Extended Analysis
### Additional Problem Statement
We further analyzed whether the same TDA methodology could differentiate between Krakow's best **high schools (licea)** and **technical schools (technika).**

### Hypothesis
TDA can distinguish between high schools and technical schools based on their topological characteristics.

### Data, Tools, and Procedure
- The same dataset and TDA tools were used.
- Point clouds were generated with the same feature set.
- Vietoris-Rips complexes were used for filtration.
- **Bottleneck Distance** was computed, after generating persistence diagrams with **Perseus**.

### Results
- The barcodes of high schools tended to resemble **rectangles**.
- The barcodes of technical schools exhibited a shape resembling **acute triangles or stair-like structures**.

## Conclusion
Topological Data Analysis provided **some insights** into school rankings and classification. However, the correlation between topological features and rankings remained **weak**, while distinguishing school types showed **slightly more promising results**.

Further research could involve:
- Expanding the dataset with additional features.
- Experimenting with different filtrations.
- Exploring more advanced topological invariants.

---
For any questions or improvements, feel free to contact us!

