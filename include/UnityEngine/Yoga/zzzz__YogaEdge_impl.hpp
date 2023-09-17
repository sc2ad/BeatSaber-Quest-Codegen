#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Yoga/zzzz__YogaEdge_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaEdge::YogaEdge(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Yoga::YogaEdge::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Yoga::YogaEdge::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Left{0};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Top{1};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Right{2};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Bottom{3};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Start{4};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::End{5};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Horizontal{6};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::Vertical{7};
constexpr ::UnityEngine::Yoga::YogaEdge  ::UnityEngine::Yoga::YogaEdge::All{8};
} // end anonymous namespace
