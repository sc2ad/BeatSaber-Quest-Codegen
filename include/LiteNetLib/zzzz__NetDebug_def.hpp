#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace LiteNetLib {
struct NetLogLevel;
}
namespace LiteNetLib {
class INetLogger;
}
// Forward declare root types
namespace LiteNetLib {
class NetDebug;
}
// Type: LiteNetLib::NetDebug
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14440))
// CS Name: LiteNetLib.NetDebug
class CORDL_TYPE NetDebug : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetDebug() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: " const&", def_value: None }]
constexpr NetDebug(NetDebug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDebug", modifiers: "&&", def_value: None }]
constexpr NetDebug(NetDebug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetDebug(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetDebug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetDebug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetDebug& operator=(NetDebug&& o) noexcept = default;
  constexpr NetDebug& operator=(NetDebug const& o) noexcept = default;
                


// Fields

static LiteNetLib::INetLogger __declspec(property(get=__get_Logger, put=__set_Logger))  Logger;

static void __set_Logger(LiteNetLib::INetLogger value) ;

static LiteNetLib::INetLogger __get_Logger() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DebugLogLock, put=__set_DebugLogLock))  DebugLogLock;

static void __set_DebugLogLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_DebugLogLock() ;


// Methods

/// @brief Method WriteLogic addr 0x2088748 size 0x220 virtual false final false
static void WriteLogic(LiteNetLib::NetLogLevel logLevel, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Write addr 0x2088968 size 0x68 virtual false final false
static void Write(::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Write addr 0x20889d0 size 0x6c virtual false final false
static void Write(LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WriteForce addr 0x2088a3c size 0x68 virtual false final false
static void WriteForce(::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WriteForce addr 0x2088aa4 size 0x6c virtual false final false
static void WriteForce(LiteNetLib::NetLogLevel level, ::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WriteError addr 0x2084d38 size 0x68 virtual false final false
static void WriteError(::StringW str, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetDebug);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetDebug, "LiteNetLib", "NetDebug");
