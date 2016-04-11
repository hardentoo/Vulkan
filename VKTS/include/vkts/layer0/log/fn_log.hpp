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

#ifndef VKTS_FN_LOG_HPP_
#define VKTS_FN_LOG_HPP_

#include <vkts/vkts.hpp>

#define VKTS_LOG_NOTHING    0
#define VKTS_LOG_ERROR      1
#define VKTS_LOG_WARNING    2
#define VKTS_LOG_INFO       3
#define VKTS_LOG_DEBUG      4
#define VKTS_LOG_SEVERE 5

namespace vkts
{

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL VkBool32 VKTS_APIENTRY logSetLevel(const int32_t verbosity);

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL int32_t VKTS_APIENTRY logGetLevel();

/**
 *
 * @ThreadSafe
 */
VKTS_APICALL void VKTS_APIENTRY logPrint(const int32_t verbosity, const char* format, ...);

}

#endif /* VKTS_FN_LOG_HPP_ */
