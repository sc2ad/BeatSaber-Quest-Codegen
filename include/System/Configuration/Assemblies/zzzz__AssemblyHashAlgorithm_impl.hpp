#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Configuration/Assemblies/zzzz__AssemblyHashAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm::AssemblyHashAlgorithm(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Configuration::Assemblies::AssemblyHashAlgorithm::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Configuration::Assemblies::AssemblyHashAlgorithm::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::None{0};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::MD5{32771};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA1{32772};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA256{32780};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA384{32781};
constexpr ::System::Configuration::Assemblies::AssemblyHashAlgorithm  ::System::Configuration::Assemblies::AssemblyHashAlgorithm::SHA512{32782};
} // end anonymous namespace
