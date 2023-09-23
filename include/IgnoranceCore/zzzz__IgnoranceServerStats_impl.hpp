#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServerStats_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClientStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeersCount", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeerStats", ty: "System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats>", modifiers: "", def_value: Some("csnull") }]
constexpr IgnoranceCore::IgnoranceServerStats::IgnoranceServerStats(uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PeersCount, System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> PeerStats) noexcept : ::bs_hook::ValueTypeWrapper() {this->BytesReceived = BytesReceived;
this->BytesSent = BytesSent;
this->PacketsReceived = PacketsReceived;
this->PacketsSent = PacketsSent;
this->PeersCount = PeersCount;
this->PeerStats = PeerStats;
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_BytesReceived(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t IgnoranceCore::IgnoranceServerStats::__get_BytesReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_BytesSent(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t IgnoranceCore::IgnoranceServerStats::__get_BytesSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PacketsReceived(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t IgnoranceCore::IgnoranceServerStats::__get_PacketsReceived() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PacketsSent(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x18>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t IgnoranceCore::IgnoranceServerStats::__get_PacketsSent() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x18>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PeersCount(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t IgnoranceCore::IgnoranceServerStats::__get_PeersCount() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceServerStats::__set_PeerStats(System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats>, 0x28>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> IgnoranceCore::IgnoranceServerStats::__get_PeerStats() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats>, 0x28>(this->__instance);
}
