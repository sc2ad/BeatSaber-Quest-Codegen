#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Configuration/Assemblies/zzzz__AssemblyVersionCompatibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Configuration::Assemblies::AssemblyVersionCompatibility::AssemblyVersionCompatibility(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Configuration::Assemblies::AssemblyVersionCompatibility::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Configuration::Assemblies::AssemblyVersionCompatibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameMachine{1};
constexpr System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameProcess{2};
constexpr System::Configuration::Assemblies::AssemblyVersionCompatibility  System::Configuration::Assemblies::AssemblyVersionCompatibility::SameDomain{3};
