#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::OperationalStatus::OperationalStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::NetworkInformation::OperationalStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::NetworkInformation::OperationalStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::Up{1};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::Down{2};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::Testing{3};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::Unknown{4};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::Dormant{5};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::NotPresent{6};
constexpr ::System::Net::NetworkInformation::OperationalStatus  ::System::Net::NetworkInformation::OperationalStatus::LowerLayerDown{7};
} // end anonymous namespace
