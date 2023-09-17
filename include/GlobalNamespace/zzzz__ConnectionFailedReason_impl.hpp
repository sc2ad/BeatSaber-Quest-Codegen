#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectionFailedReason::ConnectionFailedReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::ConnectionFailedReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::ConnectionFailedReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::None{0};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::Unknown{1};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ConnectionCanceled{2};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ServerUnreachable{3};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ServerAlreadyExists{4};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ServerDoesNotExist{5};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ServerAtCapacity{6};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::VersionMismatch{7};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::InvalidPassword{8};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::MultiplayerApiUnreachable{9};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::AuthenticationFailed{10};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::NetworkNotConnected{11};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::CertificateValidationFailed{12};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::ServerIsTerminating{13};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::Timeout{14};
constexpr ::GlobalNamespace::ConnectionFailedReason  ::GlobalNamespace::ConnectionFailedReason::FailedToFindMatch{15};
} // end anonymous namespace
