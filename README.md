# Intelligent HVAC System for Energy Efficiency and Occupant Comfort

[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/ZahinMai/HVAC-Occupancy-Detection/HEAD)

## Overview

In modern society, where we spend 80-90% of our time indoors, HVAC (Heating, Ventilation, and Air Conditioning) systems play a crucial role in maintaining optimal environmental conditions in various indoor spaces, including residential buildings, commercial offices, educational institutions, hospitals, and industrial facilities. Despite significant investments in the development of HVAC systems, they still suffer from energy inefficiency.

Consider a scenario where a thermostat is set to a specific temperature and the space is vacated. The system continues to run until the room reaches the set temperature, leading to unnecessary energy consumption. 

While motion sensors can help detect occupancy, they often fail to account for stationary occupants. This results in discomforting situations like lights and heating switching off unexpectedly in an occupied room — a common frustration in student accommodations.

## Project Objective

This project aims to develop an advanced HVAC management system that intelligently considers multiple factors to accurately determine room occupancy. By leveraging this information, the system seeks to enhance energy efficiency and occupant comfort simultaneously.

## Key Features

- **Data Collection Using Arduino Uno**: Utilising a combination of sensors to collect data on temperature, humidity, gas levels and light intensity.
- **Machine Learning Integration**: Traininig a machine learning algorithm to predict occupancy using provided datasets containing similar data to that collected.

## Project Structure

- **data-collection.ino**: Code for collecting data using various sensors for occupancy detection.
- **occupancy-prediction.ipynb**: Jupyter Notebook containing the data analysis and machine learning part of the project.
- **/data**: Directory containing the datsets for training and testing the model.

## Opening the Notebook in Binder

To open and interact with the Jupyter Notebook in Binder, simply click on the "Launch Binder" button below:
[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/ZahinMai/HVAC-Occupancy-Detection/24e011426a0db1759d9913ed93d94f7eca4a7b78?urlpath=lab%2Ftree%2Foccupancy-prediction.ipynb)


## Contribution

Please fork the repository and submit pull requests with detailed descriptions of your changes.


## Acknowledgments

We acknowledge the contributions of the open-source community and the support of our users in helping us develop a more efficient and comfortable indoor environment management system.
