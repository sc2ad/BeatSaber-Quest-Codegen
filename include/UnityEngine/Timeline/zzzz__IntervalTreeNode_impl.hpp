#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::IntervalTreeNode::IntervalTreeNode(int64_t center, int32_t first, int32_t last, int32_t left, int32_t right) noexcept : ::bs_hook::ValueTypeWrapper() {this->center = center;
this->first = first;
this->last = last;
this->left = left;
this->right = right;
}
constexpr void ::UnityEngine::Timeline::IntervalTreeNode::__set_center(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::Timeline::IntervalTreeNode::__get_center() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::IntervalTreeNode::__set_first(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::IntervalTreeNode::__get_first() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::IntervalTreeNode::__set_last(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::IntervalTreeNode::__get_last() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::IntervalTreeNode::__set_left(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::IntervalTreeNode::__get_left() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::Timeline::IntervalTreeNode::__set_right(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::IntervalTreeNode::__get_right() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
} // end anonymous namespace
