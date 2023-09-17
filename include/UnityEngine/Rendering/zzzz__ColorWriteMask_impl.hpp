#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ColorWriteMask::ColorWriteMask(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::ColorWriteMask::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::ColorWriteMask::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::ColorWriteMask  ::UnityEngine::Rendering::ColorWriteMask::Alpha{1};
constexpr ::UnityEngine::Rendering::ColorWriteMask  ::UnityEngine::Rendering::ColorWriteMask::Blue{2};
constexpr ::UnityEngine::Rendering::ColorWriteMask  ::UnityEngine::Rendering::ColorWriteMask::Green{4};
constexpr ::UnityEngine::Rendering::ColorWriteMask  ::UnityEngine::Rendering::ColorWriteMask::Red{8};
constexpr ::UnityEngine::Rendering::ColorWriteMask  ::UnityEngine::Rendering::ColorWriteMask::All{15};
} // end anonymous namespace
