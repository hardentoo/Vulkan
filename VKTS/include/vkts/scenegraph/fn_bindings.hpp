/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef VKTS_BINDINGS_HPP_
#define VKTS_BINDINGS_HPP_

#include <vkts/scenegraph/vkts_scenegraph.hpp>

#define VKTS_MAX_JOINTS 96

#define VKTS_MAX_JOINTS_BUFFERSIZE (VKTS_MAX_JOINTS * sizeof(float) * ((16 + 1) + (12 + 1)))

// Shader bindings.

#define VKTS_BINDING_UNIFORM_BUFFER_VIEWPROJECTION 					0
#define VKTS_BINDING_UNIFORM_BUFFER_TRANSFORM 						1

#define VKTS_BINDING_UNIFORM_BUFFER_LIGHT 							2

#define VKTS_BINDING_UNIFORM_BUFFER_BONE_TRANSFORM 					3

#define VKTS_BINDING_UNIFORM_SAMPLER_SHADOW 						4
#define VKTS_BINDING_UNIFORM_BUFFER_SHADOW			 				5

#define VKTS_BINDING_UNIFORM_SAMPLER_ENVIRONMENT 					6

#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_DISPLACEMENT 			7
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_EMISSIVE 				8
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_ALPHA 					9
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_NORMAL 					10

#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_AMBIENT 					11
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_DIFFUSE 					12
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_SPECULAR 				13
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_SPECULAR_SHININESS 		14
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_MIRROR 					15
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_MIRROR_REFLECTIVITY 		16

#define VKTS_BINDING_UNIFORM_IMAGE_VOXEL_EMISSIVE					17
#define VKTS_BINDING_UNIFORM_IMAGE_VOXEL_DIFFUSE 					18
#define VKTS_BINDING_UNIFORM_IMAGE_VOXEL_NORMAL 					19

#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_DEFERRED_DIFFUSE 			4
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_DEFERRED_SPECULAR 		5
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_DEFERRED_LUT 				6
#define VKTS_BINDING_UNIFORM_BUFFER_BSDF_DEFERRED_LIGHT				7
#define VKTS_BINDING_UNIFORM_BUFFER_BSDF_DEFERRED_INVERSE 			8

#define VKTS_BINDING_UNIFORM_BUFFER_BSDF_FORWARD_LIGHT				2
#define VKTS_BINDING_UNIFORM_BUFFER_BSDF_FORWARD_INVERSE 			6
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_FORWARD_DIFFUSE 			7
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_FORWARD_SPECULAR 			8
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_FORWARD_LUT 				9

//
//

// Amount of bindings stored in phong material.

#define VKTS_BINDING_UNIFORM_PHONG_BINDING_COUNT					10

// Amount of maximum phong bindings.

#define VKTS_BINDING_UNIFORM_PHONG_TOTAL_BINDING_COUNT 				(VKTS_BINDING_UNIFORM_PHONG_BINDING_COUNT + 7)

//
//

#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_FIRST 					VKTS_BINDING_UNIFORM_SAMPLER_PHONG_DISPLACEMENT
#define VKTS_BINDING_UNIFORM_SAMPLER_PHONG_LAST 					(VKTS_BINDING_UNIFORM_SAMPLER_PHONG_DISPLACEMENT + VKTS_BINDING_UNIFORM_PHONG_BINDING_COUNT - 1)

#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_DEFERRED_FIRST 			4
#define VKTS_BINDING_UNIFORM_SAMPLER_BSDF_FORWARD_FIRST 			10

//
//

// Amount of bindings stored in general material.

#define VKTS_BINDING_UNIFORM_TRANSFORM_BINDING_COUNT				2

#define VKTS_BINDING_UNIFORM_LIGHTING_BINDING_COUNT					1

#define VKTS_BINDING_UNIFORM_BONES_BINDING_COUNT					1

#define VKTS_BINDING_UNIFORM_SHADOW_BINDING_COUNT					2

#define VKTS_BINDING_UNIFORM_ENVIRONMENT_COUNT						1

//
//

#define VKTS_BINDING_STORAGE_IMAGE_COUNT 							3

#define VKTS_BINDING_UNIFORM_BUFFER_COUNT 							5

//
//

// Amount of bindings stored in BSDF material.

#define VKTS_BINDING_UNIFORM_BSDF_BINDING_COUNT						16

// Amount of maximum BSDF bindings.

#define VKTS_BINDING_UNIFORM_BSDF_DEFERRED_TOTAL_BINDING_COUNT 		(VKTS_BINDING_UNIFORM_BSDF_BINDING_COUNT + 7)

#define VKTS_BINDING_UNIFORM_BSDF_FORWARD_TOTAL_BINDING_COUNT 		(VKTS_BINDING_UNIFORM_BSDF_BINDING_COUNT + 11)

//
//

// Amount of maximum material bindings.

#define VKTS_BINDING_UNIFORM_MATERIAL_TOTAL_BINDING_COUNT 			VKTS_BINDING_UNIFORM_BSDF_FORWARD_TOTAL_BINDING_COUNT

#endif /* VKTS_BINDINGS_HPP_ */
