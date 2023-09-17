#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__GfxUpdateBufferRange_def.hpp"
// Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "source", ty: "::cordl_internals::uintptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::GfxUpdateBufferRange(uint32_t offsetFromWriteStart, uint32_t size, ::cordl_internals::uintptr_t source) noexcept : ::bs_hook::ValueTypeWrapper() {this->offsetFromWriteStart = offsetFromWriteStart;
this->size = size;
this->source = source;
}
constexpr void ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__set_offsetFromWriteStart(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__get_offsetFromWriteStart() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__set_size(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__get_size() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__set_source(::cordl_internals::uintptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::uintptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::uintptr_t>(value));
}
constexpr ::cordl_internals::uintptr_t ::UnityEngine::UIElements::UIR::GfxUpdateBufferRange::__get_source() const {
return ::cordl_internals::getInstanceField<::cordl_internals::uintptr_t, 0x8>(this->__instance);
}
} // end anonymous namespace
