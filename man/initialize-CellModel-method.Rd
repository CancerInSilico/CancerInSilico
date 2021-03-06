% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/class-CellModel.R
\docType{methods}
\name{initialize,CellModel-method}
\alias{initialize,CellModel-method}
\title{Constructor for CellModel}
\usage{
\S4method{initialize}{CellModel}(.Object, initialNum, runTime, density,
  boundary = 1, syncCycles = FALSE, randSeed = 0,
  outputIncrement = 4, recordIncrement = 0.1, timeIncrement = 0.001,
  cellTypes = c(new("CellType", name = "DEFAULT")),
  cellTypeInitFreq = c(1), drugs = list(), ...)
}
\arguments{
\item{.Object}{CellModel object}

\item{initialNum}{initial number of cells}

\item{runTime}{run time of the model in hours}

\item{density}{initial density of the cell population}

\item{boundary}{impose a physical boundary on the cells}

\item{syncCycles}{synchronization all cells to the same point in the cycle}

\item{randSeed}{random seed}

\item{outputIncrement}{how often (model hours) to print simulation status}

\item{recordIncrement}{how oftern (model hours) to record cell information}

\item{timeIncrement}{internal time step (model hours) used by the model}

\item{cellTypes}{list of CellType objects}

\item{cellTypeInitFreq}{initial proportions of all cell types}

\item{drugs}{list of Drug objects}

\item{...}{model specific parameters}
}
\value{
initialized cell model object
}
\description{
Constructor for CellModel
}
