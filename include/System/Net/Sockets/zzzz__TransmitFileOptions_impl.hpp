#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::TransmitFileOptions::TransmitFileOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::TransmitFileOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::TransmitFileOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseDefaultWorkerThread{0};
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::Disconnect{1};
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::ReuseSocket{2};
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::WriteBehind{4};
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseSystemThread{16};
constexpr System::Net::Sockets::TransmitFileOptions  System::Net::Sockets::TransmitFileOptions::UseKernelApc{32};
