#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__RefreshMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::RefreshMask::RefreshMask(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::RefreshMask::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::RefreshMask::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::UV{1};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::Colors{2};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::Normals{4};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::Tangents{8};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::Collisions{16};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::Bounds{22};
constexpr ::UnityEngine::ProBuilder::RefreshMask  ::UnityEngine::ProBuilder::RefreshMask::All{31};
} // end anonymous namespace
