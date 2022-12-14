/*
	Copyright 2022 ECOLE POLYTECHNIQUE FEDERALE DE LAUSANNE,
	Miniature Mobile Robots group, Switzerland
	Author: Yves Piguet

	Licensed under the 3-Clause BSD License;
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at
	https://opensource.org/licenses/BSD-3-Clause
*/

#include "vm/natives.h"
#include "common/productids.h"

// native functions

AsebaNativeFunctionDescription NNNativeDescription_nngeterror = {
	"nn.geterror",
	"Get last error when calling an nn function (0=ok, 1=out-of-mem, 2=no nn, 3=index out of range, 4=unsuitable for hebbian rule)",
	{
		{1, "error"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnreseterror = {
	"nn.reseterror",
	"Reset last error",
	{
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nninit = {
	"nn.init",
	"Initialize neural network",
	{
		{1, "nn number of inputs"},
		{-1, "number of outputs for each layer"},
		{-1, "activation function for each layer (0=identity, 1=tanh, 2=sigmoid)"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnfree = {
	"nn.free",
	"Free memory allocated for neural network (optional)",
	{
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnreset = {
	"nn.reset",
	"Reset neural network weights (random) and offsets (zero)",
	{
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnclear = {
	"nn.clear",
	"Set neural network weights and offsets to zero",
	{
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetweight = {
	"nn.getweight",
	"Get weight",
	{
		{1, "layerindex"},
		{1, "inputindex"},
		{1, "outputindex"},
		{1, "valuenum"},
		{1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetweight = {
	"nn.setweight",
	"Set weight",
	{
		{1, "layerindex"},
		{1, "inputindex"},
		{1, "outputindex"},
		{1, "valuenum"},
		{1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetweights = {
	"nn.getweights",
	"Get weight",
	{
		{1, "layerindex"},
		{-1, "valuenum"},
		{-1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetweights = {
	"nn.setweights",
	"Set weight",
	{
		{1, "layerindex"},
		{-1, "valuenum"},
		{-1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetoffset = {
	"nn.setoffset",
	"Set offset",
	{
		{1, "layerindex"},
		{1, "index"},
		{1, "valuenum"},
		{1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetoffset = {
	"nn.getoffset",
	"Get offset",
	{
		{1, "layerindex"},
		{1, "index"},
		{1, "valuenum"},
		{1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetoffsets = {
	"nn.getoffsets",
	"Get offsets",
	{
		{1, "layerindex"},
		{-1, "valuenum"},
		{-1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetoffsets = {
	"nn.setoffsets",
	"Set offsets",
	{
		{1, "layerindex"},
		{-1, "valuenum"},
		{-1, "valueden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetinputs = {
	"nn.getinputs",
	"Get inputs of neural network",
	{
		{-1, "inputs"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetinputs = {
	"nn.setinputs",
	"Set inputs of neural network",
	{
		{-1, "inputs"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nngetoutputs = {
	"nn.getoutputs",
	"Get outputs of neural network",
	{
		{-1, "outputs"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnsetoutputs = {
	"nn.setoutputs",
	"Set outputs of neural network",
	{
		{-1, "outputs"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nneval = {
	"nn.eval",
	"Evaluate neural network (calculate outputs from inputs)",
	{
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnhebbianrule = {
	"nn.reinforce",
	"Apply reinforcement learning based on inputs/outputs with Hebbian rule",
	{
		{1, "alphanum"},
		{1, "alphaden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnbackprop = {
	"nn.backprop",
	"Apply back-propagation learning based on inputs/outputs",
	{
		{1, "etanum"},
		{1, "etaden"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nndatasetinit = {
	"nn.dataset.init",
	"Initialize dataset for current neural network size",
	{
		{1, "maximum number of observations"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nndatasetadd = {
	"nn.dataset.add",
	"Add an observation to the dataset",
	{
		{-1, "input"},
		{-2, "output"},
		{0, NULL}
	}
};

AsebaNativeFunctionDescription NNNativeDescription_nnbackpropdataset = {
	"nn.backprop.dataset",
	"Use dataset to learn with back-propagation",
	{
		{1, "etanum"},
		{1, "etaden"},
		{1, "number of iterations over the whole dataset"},
		{0, NULL}
	}
};
