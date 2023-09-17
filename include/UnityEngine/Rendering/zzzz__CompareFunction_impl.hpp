#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CompareFunction::CompareFunction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::CompareFunction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::CompareFunction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Disabled{0};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Never{1};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Less{2};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Equal{3};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::LessEqual{4};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Greater{5};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::NotEqual{6};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::GreaterEqual{7};
constexpr ::UnityEngine::Rendering::CompareFunction  ::UnityEngine::Rendering::CompareFunction::Always{8};
} // end anonymous namespace
