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

#ifndef VKTS_JSONARRAY_HPP_
#define VKTS_JSONARRAY_HPP_

#include <vkts/core/vkts_core.hpp>

namespace vkts
{

class JSONarray : public JSONvalue
{

private:

	SmartPointerVector<JSONvalueSP> allValues;

public:

	JSONarray();
	virtual ~JSONarray();

	void addValue(const JSONvalueSP& value);

	JSONvalueSP getValueAt(int32_t index) const;

	const SmartPointerVector<JSONvalueSP>& getAllValues() const;

	uint32_t size() const;


	virtual VkBool32 encode(std::string& jsonText, int32_t& spaces) const;

	virtual void visit(JsonVisitor& jsonVisitor);

};

typedef std::shared_ptr<JSONarray> JSONarraySP;

}

#endif /* VKTS_JSONARRAY_HPP_ */
