#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__RenderHints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::RenderHints::RenderHints(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::RenderHints::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::RenderHints::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::None{0};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::GroupTransform{1};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::BoneTransform{2};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::ClipWithScissors{4};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::MaskContainer{8};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DynamicColor{16};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyOffset{5};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyGroupTransform{32};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyBoneTransform{64};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyClipWithScissors{128};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyMaskContainer{256};
constexpr ::UnityEngine::UIElements::RenderHints  ::UnityEngine::UIElements::RenderHints::DirtyAll{480};
} // end anonymous namespace
