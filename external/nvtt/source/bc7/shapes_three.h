﻿/*
Copyright 2007 nVidia, Inc.
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. 

You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0 

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, 
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 

See the License for the specific language governing permissions and limitations under the License.
*/

#ifndef	_AVPCL_SHAPES_THREE_H
#define _AVPCL_SHAPES_THREE_H

// shapes for 3 regions

#define NREGIONS 3
#define NSHAPES 64
#define SHAPEBITS 6

static int shapes[NSHAPES*16] = 
{
0, 0, 1, 1,   0, 0, 0, 1,   0, 0, 0, 0,   0, 2, 2, 2,   
0, 0, 1, 1,   0, 0, 1, 1,   2, 0, 0, 1,   0, 0, 2, 2,   
0, 2, 2, 1,   2, 2, 1, 1,   2, 2, 1, 1,   0, 0, 1, 1,   
2, 2, 2, 2,   2, 2, 2, 1,   2, 2, 1, 1,   0, 1, 1, 1,   

0, 0, 0, 0,   0, 0, 1, 1,   0, 0, 2, 2,   0, 0, 1, 1,   
0, 0, 0, 0,   0, 0, 1, 1,   0, 0, 2, 2,   0, 0, 1, 1,   
1, 1, 2, 2,   0, 0, 2, 2,   1, 1, 1, 1,   2, 2, 1, 1,   
1, 1, 2, 2,   0, 0, 2, 2,   1, 1, 1, 1,   2, 2, 1, 1,   

0, 0, 0, 0,   0, 0, 0, 0,   0, 0, 0, 0,   0, 0, 1, 2,   
0, 0, 0, 0,   1, 1, 1, 1,   1, 1, 1, 1,   0, 0, 1, 2,   
1, 1, 1, 1,   1, 1, 1, 1,   2, 2, 2, 2,   0, 0, 1, 2,   
2, 2, 2, 2,   2, 2, 2, 2,   2, 2, 2, 2,   0, 0, 1, 2,   

0, 1, 1, 2,   0, 1, 2, 2,   0, 0, 1, 1,   0, 0, 1, 1,   
0, 1, 1, 2,   0, 1, 2, 2,   0, 1, 1, 2,   2, 0, 0, 1,   
0, 1, 1, 2,   0, 1, 2, 2,   1, 1, 2, 2,   2, 2, 0, 0,   
0, 1, 1, 2,   0, 1, 2, 2,   1, 2, 2, 2,   2, 2, 2, 0,   

0, 0, 0, 1,   0, 1, 1, 1,   0, 0, 0, 0,   0, 0, 2, 2,   
0, 0, 1, 1,   0, 0, 1, 1,   1, 1, 2, 2,   0, 0, 2, 2,   
0, 1, 1, 2,   2, 0, 0, 1,   1, 1, 2, 2,   0, 0, 2, 2,   
1, 1, 2, 2,   2, 2, 0, 0,   1, 1, 2, 2,   1, 1, 1, 1,   

0, 1, 1, 1,   0, 0, 0, 1,   0, 0, 0, 0,   0, 0, 0, 0,   
0, 1, 1, 1,   0, 0, 0, 1,   0, 0, 1, 1,   1, 1, 0, 0,   
0, 2, 2, 2,   2, 2, 2, 1,   0, 1, 2, 2,   2, 2, 1, 0,   
0, 2, 2, 2,   2, 2, 2, 1,   0, 1, 2, 2,   2, 2, 1, 0,   

0, 1, 2, 2,   0, 0, 1, 2,   0, 1, 1, 0,   0, 0, 0, 0,   
0, 1, 2, 2,   0, 0, 1, 2,   1, 2, 2, 1,   0, 1, 1, 0,   
0, 0, 1, 1,   1, 1, 2, 2,   1, 2, 2, 1,   1, 2, 2, 1,   
0, 0, 0, 0,   2, 2, 2, 2,   0, 1, 1, 0,   1, 2, 2, 1,   

0, 0, 2, 2,   0, 1, 1, 0,   0, 0, 1, 1,   0, 0, 0, 0,   
1, 1, 0, 2,   0, 1, 1, 0,   0, 1, 2, 2,   2, 0, 0, 0,   
1, 1, 0, 2,   2, 0, 0, 2,   0, 1, 2, 2,   2, 2, 1, 1,   
0, 0, 2, 2,   2, 2, 2, 2,   0, 0, 1, 1,   2, 2, 2, 1,   

0, 0, 0, 0,   0, 2, 2, 2,   0, 0, 1, 1,   0, 1, 2, 0,   
0, 0, 0, 2,   0, 0, 2, 2,   0, 0, 1, 2,   0, 1, 2, 0,   
1, 1, 2, 2,   0, 0, 1, 2,   0, 0, 2, 2,   0, 1, 2, 0,   
1, 2, 2, 2,   0, 0, 1, 1,   0, 2, 2, 2,   0, 1, 2, 0,   

0, 0, 0, 0,   0, 1, 2, 0,   0, 1, 2, 0,   0, 0, 1, 1,   
1, 1, 1, 1,   1, 2, 0, 1,   2, 0, 1, 2,   2, 2, 0, 0,   
2, 2, 2, 2,   2, 0, 1, 2,   1, 2, 0, 1,   1, 1, 2, 2,   
0, 0, 0, 0,   0, 1, 2, 0,   0, 1, 2, 0,   0, 0, 1, 1,   

0, 0, 1, 1,   0, 1, 0, 1,   0, 0, 0, 0,   0, 0, 2, 2,   
1, 1, 2, 2,   0, 1, 0, 1,   0, 0, 0, 0,   1, 1, 2, 2,   
2, 2, 0, 0,   2, 2, 2, 2,   2, 1, 2, 1,   0, 0, 2, 2,   
0, 0, 1, 1,   2, 2, 2, 2,   2, 1, 2, 1,   1, 1, 2, 2,   

0, 0, 2, 2,   0, 2, 2, 0,   0, 1, 0, 1,   0, 0, 0, 0,   
0, 0, 1, 1,   1, 2, 2, 1,   2, 2, 2, 2,   2, 1, 2, 1,   
0, 0, 2, 2,   0, 2, 2, 0,   2, 2, 2, 2,   2, 1, 2, 1,   
0, 0, 1, 1,   1, 2, 2, 1,   0, 1, 0, 1,   2, 1, 2, 1,   

0, 1, 0, 1,   0, 2, 2, 2,   0, 0, 0, 2,   0, 0, 0, 0,   
0, 1, 0, 1,   0, 1, 1, 1,   1, 1, 1, 2,   2, 1, 1, 2,   
0, 1, 0, 1,   0, 2, 2, 2,   0, 0, 0, 2,   2, 1, 1, 2,   
2, 2, 2, 2,   0, 1, 1, 1,   1, 1, 1, 2,   2, 1, 1, 2,   

0, 2, 2, 2,   0, 0, 0, 2,   0, 1, 1, 0,   0, 0, 0, 0,   
0, 1, 1, 1,   1, 1, 1, 2,   0, 1, 1, 0,   0, 0, 0, 0,   
0, 1, 1, 1,   1, 1, 1, 2,   0, 1, 1, 0,   2, 1, 1, 2,   
0, 2, 2, 2,   0, 0, 0, 2,   2, 2, 2, 2,   2, 1, 1, 2,   

0, 1, 1, 0,   0, 0, 2, 2,   0, 0, 2, 2,   0, 0, 0, 0,   
0, 1, 1, 0,   0, 0, 1, 1,   1, 1, 2, 2,   0, 0, 0, 0,   
2, 2, 2, 2,   0, 0, 1, 1,   1, 1, 2, 2,   0, 0, 0, 0,   
2, 2, 2, 2,   0, 0, 2, 2,   0, 0, 2, 2,   2, 1, 1, 2,   

0, 0, 0, 2,   0, 2, 2, 2,   0, 1, 0, 1,   0, 1, 1, 1,   
0, 0, 0, 1,   1, 2, 2, 2,   2, 2, 2, 2,   2, 0, 1, 1,   
0, 0, 0, 2,   0, 2, 2, 2,   2, 2, 2, 2,   2, 2, 0, 1,   
0, 0, 0, 1,   1, 2, 2, 2,   2, 2, 2, 2,   2, 2, 2, 0,
};

#define	REGION(x,y,si)	shapes[((si)&3)*4+((si)>>2)*64+(x)+(y)*16]

static int shapeindex_to_compressed_indices[NSHAPES*3] = 
{
	0, 3,15,  0, 3, 8,  0,15, 8,  0,15, 3,
	0, 8,15,  0, 3,15,  0,15, 3,  0,15, 8,
	0, 8,15,  0, 8,15,  0, 6,15,  0, 6,15,
	0, 6,15,  0, 5,15,  0, 3,15,  0, 3, 8,

	0, 3,15,  0, 3, 8,  0, 8,15,  0,15, 3,
	0, 3,15,  0, 3, 8,  0, 6,15,  0,10, 8,
	0, 5, 3,  0, 8,15,  0, 8, 6,  0, 6,10,
	0, 8,15,  0, 5,15,  0,15,10,  0,15, 8,

	0, 8,15,  0,15, 3,  0, 3,15,  0, 5,10,
	0, 6,10,  0,10, 8,  0, 8, 9,  0,15,10,
	0,15, 6,  0, 3,15,  0,15, 8,  0, 5,15,
	0,15, 3,  0,15, 6,  0,15, 6,  0,15, 8,

	0, 3,15,  0,15, 3,  0, 5,15,  0, 5,15,
	0, 5,15,  0, 8,15,  0, 5,15,  0,10,15,
	0, 5,15,  0,10,15,  0, 8,15,  0,13,15,
	0,15, 3,  0,12,15,  0, 3,15,  0, 3, 8

};
#define SHAPEINDEX_TO_COMPRESSED_INDICES(si,region)  shapeindex_to_compressed_indices[(si)*3+(region)]

#endif
