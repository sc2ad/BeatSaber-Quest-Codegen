#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NetworkStatisticsDelta_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkStatisticsDelta._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkStatisticsDelta::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t)>(&::GlobalNamespace::NetworkStatisticsDelta::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdbff80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsDelta>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "packetsSentDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesSentDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytesReceivedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsLostDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentEncryptedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentPlaintextDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsSentRejectedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedEncryptedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedPlaintextDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packetsReceivedRejectedDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "encryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "decryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkStatisticsDelta::NetworkStatisticsDelta(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) noexcept : ::bs_hook::ValueTypeWrapper() {this->packetsSentDelta = packetsSentDelta;
this->packetsReceivedDelta = packetsReceivedDelta;
this->bytesSentDelta = bytesSentDelta;
this->bytesReceivedDelta = bytesReceivedDelta;
this->packetsLostDelta = packetsLostDelta;
this->packetsSentEncryptedDelta = packetsSentEncryptedDelta;
this->packetsSentPlaintextDelta = packetsSentPlaintextDelta;
this->packetsSentRejectedDelta = packetsSentRejectedDelta;
this->packetsReceivedEncryptedDelta = packetsReceivedEncryptedDelta;
this->packetsReceivedPlaintextDelta = packetsReceivedPlaintextDelta;
this->packetsReceivedRejectedDelta = packetsReceivedRejectedDelta;
this->encryptionProcessingTimeDelta = encryptionProcessingTimeDelta;
this->decryptionProcessingTimeDelta = decryptionProcessingTimeDelta;
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsSentDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsSentDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsReceivedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsReceivedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_bytesSentDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_bytesSentDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_bytesReceivedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_bytesReceivedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsLostDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsLostDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsSentEncryptedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsSentEncryptedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsSentPlaintextDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsSentPlaintextDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsSentRejectedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsSentRejectedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsReceivedEncryptedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsReceivedEncryptedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsReceivedPlaintextDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsReceivedPlaintextDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_packetsReceivedRejectedDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_packetsReceivedRejectedDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_encryptionProcessingTimeDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_encryptionProcessingTimeDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this->__instance);
}
constexpr void ::GlobalNamespace::NetworkStatisticsDelta::__set_decryptionProcessingTimeDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::GlobalNamespace::NetworkStatisticsDelta::__get_decryptionProcessingTimeDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this->__instance);
}
 void ::GlobalNamespace::NetworkStatisticsDelta::_ctor(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkStatisticsDelta>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, packetsSentDelta, packetsReceivedDelta, bytesSentDelta, bytesReceivedDelta, packetsLostDelta, packetsSentEncryptedDelta, packetsSentPlaintextDelta, packetsSentRejectedDelta, packetsReceivedEncryptedDelta, packetsReceivedPlaintextDelta, packetsReceivedRejectedDelta, encryptionProcessingTimeDelta, decryptionProcessingTimeDelta);
}
} // end anonymous namespace
