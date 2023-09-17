#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__OperatingSystemFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::OperatingSystemFamily::OperatingSystemFamily(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::OperatingSystemFamily::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::OperatingSystemFamily::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::OperatingSystemFamily  ::UnityEngine::OperatingSystemFamily::Other{0};
constexpr ::UnityEngine::OperatingSystemFamily  ::UnityEngine::OperatingSystemFamily::MacOSX{1};
constexpr ::UnityEngine::OperatingSystemFamily  ::UnityEngine::OperatingSystemFamily::Windows{2};
constexpr ::UnityEngine::OperatingSystemFamily  ::UnityEngine::OperatingSystemFamily::Linux{3};
} // end anonymous namespace
