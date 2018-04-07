# An_Introduction_to_GPU_Programming
Simple C++ program to add two really large arrays using GPU with CUDA

## Dependencies

* CUDA (https://developer.nvidia.com/cuda-downloads) 

## Usage

Run the following command to compile

`nvcc add.cu -o add_cuda`

This command to execute

`./add_cuda`

And this command to profile (clock) it

`nvprof ./add_cuda`