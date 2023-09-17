#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE::RENDERING_PIPELINE(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LIV::SDK::Unity::RENDERING_PIPELINE::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::LIV::SDK::Unity::RENDERING_PIPELINE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::UNDEFINED{0u};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::FORWARD{1u};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::DEFERRED{2u};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::VERTEX_LIT{3u};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::UNIVERSAL{4u};
constexpr ::LIV::SDK::Unity::RENDERING_PIPELINE  ::LIV::SDK::Unity::RENDERING_PIPELINE::HIGH_DEFINITION{5u};
} // end anonymous namespace
