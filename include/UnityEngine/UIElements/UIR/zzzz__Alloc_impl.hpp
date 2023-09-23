#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
// Ctor Parameters [CppParam { name: "start", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shortLived", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::Alloc::Alloc(uint32_t start, uint32_t size, ::bs_hook::Il2CppWrapperType handle, bool shortLived) noexcept : ::bs_hook::ValueTypeWrapper() {this->start = start;
this->size = size;
this->handle = handle;
this->shortLived = shortLived;
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_start(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::Alloc::__get_start() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_size(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::Alloc::__get_size() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_handle(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::UIElements::UIR::Alloc::__get_handle() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::Alloc::__set_shortLived(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::Alloc::__get_shortLived() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
