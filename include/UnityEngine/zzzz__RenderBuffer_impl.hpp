#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "m_RenderTextureInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BufferPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RenderBuffer::RenderBuffer(int32_t m_RenderTextureInstanceID, ::cordl_internals::intptr_t m_BufferPtr) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_RenderTextureInstanceID = m_RenderTextureInstanceID;
this->m_BufferPtr = m_BufferPtr;
}
constexpr void ::UnityEngine::RenderBuffer::__set_m_RenderTextureInstanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::RenderBuffer::__get_m_RenderTextureInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::RenderBuffer::__set_m_BufferPtr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::RenderBuffer::__get_m_BufferPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
} // end anonymous namespace
