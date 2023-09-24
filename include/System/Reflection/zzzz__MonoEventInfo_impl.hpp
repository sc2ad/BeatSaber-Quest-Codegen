#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Reflection/zzzz__MonoEventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__EventAttributes_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "declaring_type", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "reflected_type", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "add_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "remove_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "raise_method", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "attrs", ty: "System::Reflection::EventAttributes", modifiers: "", def_value: Some("{}") }, CppParam { name: "other_methods", ty: "::ArrayW<System::Reflection::MethodInfo>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Reflection::MonoEventInfo::MonoEventInfo(System::Type declaring_type, System::Type reflected_type, ::StringW name, System::Reflection::MethodInfo add_method, System::Reflection::MethodInfo remove_method, System::Reflection::MethodInfo raise_method, System::Reflection::EventAttributes attrs, ::ArrayW<System::Reflection::MethodInfo> other_methods) noexcept : ::bs_hook::ValueTypeWrapper() {this->declaring_type = declaring_type;
this->reflected_type = reflected_type;
this->name = name;
this->add_method = add_method;
this->remove_method = remove_method;
this->raise_method = raise_method;
this->attrs = attrs;
this->other_methods = other_methods;
}
constexpr void System::Reflection::MonoEventInfo::__set_declaring_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x0>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::MonoEventInfo::__get_declaring_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x0>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_reflected_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x8>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Reflection::MonoEventInfo::__get_reflected_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x8>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Reflection::MonoEventInfo::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_add_method(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x18>(this->__instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo System::Reflection::MonoEventInfo::__get_add_method() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x18>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_remove_method(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x20>(this->__instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo System::Reflection::MonoEventInfo::__get_remove_method() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x20>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_raise_method(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x28>(this->__instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo System::Reflection::MonoEventInfo::__get_raise_method() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x28>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_attrs(System::Reflection::EventAttributes value)  {
::cordl_internals::setInstanceField<System::Reflection::EventAttributes, 0x30>(this->__instance, std::forward<System::Reflection::EventAttributes>(value));
}
constexpr System::Reflection::EventAttributes System::Reflection::MonoEventInfo::__get_attrs() const {
return ::cordl_internals::getInstanceField<System::Reflection::EventAttributes, 0x30>(this->__instance);
}
constexpr void System::Reflection::MonoEventInfo::__set_other_methods(::ArrayW<System::Reflection::MethodInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Reflection::MethodInfo>, 0x38>(this->__instance, std::forward<::ArrayW<System::Reflection::MethodInfo>>(value));
}
constexpr ::ArrayW<System::Reflection::MethodInfo> System::Reflection::MonoEventInfo::__get_other_methods() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Reflection::MethodInfo>, 0x38>(this->__instance);
}
