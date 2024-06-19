# Intelligent HVAC System for Energy Efficiency and Occupant Comfort

## Overview

In modern society, where we spend 80-90% of our time indoors, HVAC (Heating, Ventilation, and Air Conditioning) systems play a crucial role in maintaining optimal environmental conditions in various indoor spaces, including residential buildings, commercial offices, educational institutions, hospitals, and industrial facilities. Despite significant investments in the development of HVAC systems, they still suffer from energy inefficiency.

Consider a scenario where a thermostat is set to a specific temperature and the space is vacated. The system continues to run until the room reaches the set temperature, leading to unnecessary energy consumption. 

While motion sensors can help detect occupancy, they often fail to account for stationary occupants. This results in discomforting situations like lights and heating switching off unexpectedly in an occupied room — a common frustration in student accommodations.

## Project objective

This project aims to develop an advanced HVAC management system that intelligently considers multiple factors to accurately determine room occupancy. By leveraging this information, the system seeks to enhance energy efficiency and occupant comfort simultaneously.

## Overview of this project
- **Section 1**: Using an Arduino and sensors, gather real time data on air quality factors (temperature, humidity, and CO<sub>2</sub>), and how they vary with the number of occupants in a room.
- **Section 2**: Using provided datasets, train and test a machine learning classification model to predict the occupancy of a room based on environmental conditions.

## Project structure

- **section-1-data-collection.md**: Guide for collecting data using various sensors for occupancy detection.
- **section-2-occupancy-prediction.ipynb**: Jupyter Notebook containing the data analysis and machine learning part of the project.
- **/data**: Directory containing the datsets for training and testing the model.

## Opening the Notebook in Binder

To open and interact with the Jupyter Notebook in Binder, simply click on the "Launch Binder" button below:
[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/ZahinMai/HVAC-Occupancy-Detection.git/HEAD?labpath=section-2-occupancy-prediction.ipynb)


## Contribution

Please fork the repository and submit pull requests with detailed descriptions of your changes.


## Acknowledgments

We acknowledge the contributions of the open-source community and the support of our users in helping us develop a more efficient and comfortable indoor environment management system.
