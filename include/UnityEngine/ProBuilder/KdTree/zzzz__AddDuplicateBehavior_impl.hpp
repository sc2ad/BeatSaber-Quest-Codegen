#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/KdTree/zzzz__AddDuplicateBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::AddDuplicateBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::Skip{0};
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::Error{1};
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::Update{2};
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior  ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior::Collect{3};
} // end anonymous namespace