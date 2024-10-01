| Category          | Badge                                                                                                                                                                                                                                                                                                                                                              |
| ----------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **License**       | [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://github.com/niuniular/MDDC/blob/main/LICENSE.md)                                                                                                                                                                                                                                       |
| **CI/CD**         | [![R](https://github.com/niuniular/MDDC/actions/workflows/r.yml/badge.svg)](https://github.com/niuniular/MDDC/actions/workflows/r.yml)                                                           |
| **Code Coverage** | [![codecov](https://codecov.io/gh/niuniular/MDDC/graph/badge.svg?token=YLQNKH2AI6)](https://codecov.io/gh/niuniular/MDDC)                                                                                                                                                                                                                             |
| **Code Quality**  | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/c71ad2e3c52546e7a99ee8fea57d6142)](https://app.codacy.com/gh/niuniular/MDDC/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade) [![CodeFactor](https://www.codefactor.io/repository/github/niuniular/mddc/badge)](https://www.codefactor.io/repository/github/niuniular/mddc) |


# Introduction

* In this package, we present the Modified Detecting Deviating Cells (MDDC) algorithm for adverse event identification.
* For a certain time period, the spontaneous reports can be extracted from the safety database and depicted as an $I \times J$ contingency table, where:
  * $I$ denotes the total number of AEs
  * $J$ denotes the total number of drugs
  * With cell counts $n\_{ij}$ the total number of reported cases corresponding to the $j$-th drug and $i$-th AE
* We are interested in which (AE, drug) pairs are signals. The signals refer to potential adverse events that may be caused by a drug.
* In the contingency table setting, the signals refer to the cells with $n\_{ij}$ abnormally higher than the expected values.
* [**Rousseeuw and Bossche (2018)**](https://wis.kuleuven.be/stat/robust/papers/publications-2018/rousseeuwvandenbossche-ddc-technometrics-2018.pdf) proposed the Detecting Deviating Cells (DDC) algorithm for outlier identification in a multivariate dataset.
* The original DDC algorithm assumes multivariate normality of the data and selects cutoff values based on this assumption. We modify the DDC algorithm to better suit the discrete nature of adverse event data in pharmacovigilance that clearly do not follow a multivariate normal distribution.
* Our Modified Detecting Deviating Cells (MDDC) algorithm has the following characteristics:
  1. It is easy to compute.
  2. It considers AE relationships.
  3. It depends on data-driven cutoffs.
  4. It is independent of the use of ontologies.
* The MDDC algorithm has five steps, with the first two steps identifying univariate outliers via cutoffs, and the next three steps evaluating the signals via the use of AE correlations. The algorithm can be found at **[MDDC algorithm](https://mddc.readthedocs.io/en/latest/user_guide/mddc_algorithm.html)**.

## Authors

* **Anran Liu**
  Email: <anranliu@buffalo.edu>

* **Raktim Mukhopadhyay**
  Email: <raktimmu@buffalo.edu>

* **Marianthi Markatou**
  Email: <markatou@buffalo.edu>

## Maintainers

* **Anran Liu** Email: <anranliu@buffalo.edu>

* **Raktim Mukhopadhyay** Email: <raktimmu@buffalo.edu>

## Documentation

The documentation is hosted at - https://niuniular.github.io/MDDC/index.html

## Funding Information

The work has been supported by Food and Drug Administration, and Kaleida Health Foundation.

## References

Rousseeuw, P. J., & Bossche, W. V. D. (2018). Detecting deviating data cells. Technometrics, 60(2), 135-145.
