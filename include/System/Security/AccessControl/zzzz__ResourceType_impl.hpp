#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Security/AccessControl/zzzz__ResourceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Security::AccessControl::ResourceType::ResourceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Security::AccessControl::ResourceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::AccessControl::ResourceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Unknown{0};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::FileObject{1};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Service{2};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::Printer{3};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::RegistryKey{4};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::LMShare{5};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::KernelObject{6};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::WindowObject{7};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::DSObject{8};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::DSObjectAll{9};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::ProviderDefined{10};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::WmiGuidObject{11};
constexpr System::Security::AccessControl::ResourceType  System::Security::AccessControl::ResourceType::RegistryWow6432Key{12};
