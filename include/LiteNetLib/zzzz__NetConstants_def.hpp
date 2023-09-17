#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
class NetConstants;
}
// Type: LiteNetLib::NetConstants
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14437))
// CS Name: LiteNetLib.NetConstants
class CORDL_TYPE NetConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConstants", modifiers: " const&", def_value: None }]
constexpr NetConstants(NetConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConstants", modifiers: "&&", def_value: None }]
constexpr NetConstants(NetConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetConstants& operator=(NetConstants&& o) noexcept = default;
  constexpr NetConstants& operator=(NetConstants const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultWindowSize offset 0
static constexpr int32_t  DefaultWindowSize{256};

/// @brief Field SocketBufferSize offset 0
static constexpr int32_t  SocketBufferSize{1048576};

/// @brief Field SocketTTL offset 0
static constexpr int32_t  SocketTTL{255};

/// @brief Field HeaderSize offset 0
static constexpr int32_t  HeaderSize{1};

/// @brief Field ChanneledHeaderSize offset 0
static constexpr int32_t  ChanneledHeaderSize{4};

/// @brief Field FragmentHeaderSize offset 0
static constexpr int32_t  FragmentHeaderSize{6};

/// @brief Field FragmentedHeaderTotalSize offset 0
static constexpr int32_t  FragmentedHeaderTotalSize{10};

/// @brief Field MaxSequence offset 0
static constexpr uint16_t  MaxSequence{32768u};

/// @brief Field HalfMaxSequence offset 0
static constexpr uint16_t  HalfMaxSequence{16384u};

/// @brief Field ProtocolId offset 0
static constexpr int32_t  ProtocolId{11};

/// @brief Field MaxUdpHeaderSize offset 0
static constexpr int32_t  MaxUdpHeaderSize{68};

static ::ArrayW<int32_t> __declspec(property(get=__get_PossibleMtu, put=__set_PossibleMtu))  PossibleMtu;

static void __set_PossibleMtu(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_PossibleMtu() ;

static int32_t __declspec(property(get=__get_MaxPacketSize, put=__set_MaxPacketSize))  MaxPacketSize;

static void __set_MaxPacketSize(int32_t value) ;

static int32_t __get_MaxPacketSize() ;

/// @brief Field MaxConnectionNumber offset 0
static constexpr uint8_t  MaxConnectionNumber{4u};

/// @brief Field PacketPoolSize offset 0
static constexpr int32_t  PacketPoolSize{1000};


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::NetConstants);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConstants, "LiteNetLib", "NetConstants");
