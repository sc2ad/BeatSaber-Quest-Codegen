#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/zzzz__RuntimeStructs_def.hpp"
// Ctor Parameters [CppParam { name: "default_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xdomain_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "proxy_class", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "proxy_class_name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::____Mono__RuntimeStructs__RemoteClass::____Mono__RuntimeStructs__RemoteClass(::cordl_internals::intptr_t default_vtable, ::cordl_internals::intptr_t xdomain_vtable, void* proxy_class, ::cordl_internals::intptr_t proxy_class_name, uint32_t interface_count) noexcept : ::bs_hook::ValueTypeWrapper() {this->default_vtable = default_vtable;
this->xdomain_vtable = xdomain_vtable;
this->proxy_class = proxy_class;
this->proxy_class_name = proxy_class_name;
this->interface_count = interface_count;
}
constexpr void ::Mono::____Mono__RuntimeStructs__RemoteClass::__set_default_vtable(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Mono::____Mono__RuntimeStructs__RemoteClass::__get_default_vtable() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__RemoteClass::__set_xdomain_vtable(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Mono::____Mono__RuntimeStructs__RemoteClass::__get_xdomain_vtable() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__RemoteClass::__set_proxy_class(void* value)  {
::cordl_internals::setInstanceField<void*, 0x10>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::Mono::____Mono__RuntimeStructs__RemoteClass::__get_proxy_class() const {
return ::cordl_internals::getInstanceField<void*, 0x10>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__RemoteClass::__set_proxy_class_name(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Mono::____Mono__RuntimeStructs__RemoteClass::__get_proxy_class_name() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__RemoteClass::__set_interface_count(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Mono::____Mono__RuntimeStructs__RemoteClass::__get_interface_count() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
// Ctor Parameters [CppParam { name: "pklass", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "constraints", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::____Mono__RuntimeStructs__GenericParamInfo::____Mono__RuntimeStructs__GenericParamInfo(void* pklass, ::cordl_internals::intptr_t name, uint16_t flags, uint32_t token, void* constraints) noexcept : ::bs_hook::ValueTypeWrapper() {this->pklass = pklass;
this->name = name;
this->flags = flags;
this->token = token;
this->constraints = constraints;
}
constexpr void ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__set_pklass(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__get_pklass() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__set_name(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__set_flags(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x10>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__get_flags() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__set_token(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__get_token() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__set_constraints(void* value)  {
::cordl_internals::setInstanceField<void*, 0x18>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::Mono::____Mono__RuntimeStructs__GenericParamInfo::__get_constraints() const {
return ::cordl_internals::getInstanceField<void*, 0x18>(this->__instance);
}
// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::____Mono__RuntimeStructs__GPtrArray::____Mono__RuntimeStructs__GPtrArray(void* data, int32_t len) noexcept : ::bs_hook::ValueTypeWrapper() {this->data = data;
this->len = len;
}
constexpr void ::Mono::____Mono__RuntimeStructs__GPtrArray::__set_data(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::Mono::____Mono__RuntimeStructs__GPtrArray::__get_data() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void ::Mono::____Mono__RuntimeStructs__GPtrArray::__set_len(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Mono::____Mono__RuntimeStructs__GPtrArray::__get_len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
} // end anonymous namespace
