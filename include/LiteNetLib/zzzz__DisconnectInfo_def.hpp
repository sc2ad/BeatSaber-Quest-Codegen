#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace System::Net::Sockets {
struct SocketError;
}
// Forward declare root types
namespace LiteNetLib {
struct DisconnectInfo;
}
// Type: LiteNetLib::DisconnectInfo
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14413))
// CS Name: LiteNetLib.DisconnectInfo
struct CORDL_TYPE DisconnectInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Reason", ty: "LiteNetLib::DisconnectReason", modifiers: "", def_value: None }, CppParam { name: "SocketErrorCode", ty: "System::Net::Sockets::SocketError", modifiers: "", def_value: None }, CppParam { name: "AdditionalData", ty: "LiteNetLib::NetPacketReader", modifiers: "", def_value: None }]
constexpr DisconnectInfo(LiteNetLib::DisconnectReason Reason, System::Net::Sockets::SocketError SocketErrorCode, LiteNetLib::NetPacketReader AdditionalData) noexcept;


                    constexpr DisconnectInfo(DisconnectInfo const&) = default;
                    constexpr DisconnectInfo(DisconnectInfo&&) = default;
                    constexpr DisconnectInfo& operator=(DisconnectInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisconnectInfo& operator=(DisconnectInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisconnectInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LiteNetLib::DisconnectReason __declspec(property(get=__get_Reason, put=__set_Reason))  Reason;

constexpr void __set_Reason(LiteNetLib::DisconnectReason value) ;

constexpr LiteNetLib::DisconnectReason __get_Reason() const;

 System::Net::Sockets::SocketError __declspec(property(get=__get_SocketErrorCode, put=__set_SocketErrorCode))  SocketErrorCode;

constexpr void __set_SocketErrorCode(System::Net::Sockets::SocketError value) ;

constexpr System::Net::Sockets::SocketError __get_SocketErrorCode() const;

 LiteNetLib::NetPacketReader __declspec(property(get=__get_AdditionalData, put=__set_AdditionalData))  AdditionalData;

constexpr void __set_AdditionalData(LiteNetLib::NetPacketReader value) ;

constexpr LiteNetLib::NetPacketReader __get_AdditionalData() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::DisconnectInfo, "LiteNetLib", "DisconnectInfo");
