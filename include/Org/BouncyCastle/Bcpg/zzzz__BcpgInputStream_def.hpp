#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream;
}
// Type: ::PartialInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(552))
// CS Name: Org.BouncyCastle.Bcpg.BcpgInputStream::PartialInputStream
class CORDL_TYPE ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream(____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream(____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream& operator=(____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream& operator=(____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Bcpg::BcpgInputStream __declspec(property(get=__get_m_in, put=__set_m_in))  m_in;

constexpr void __set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream value) ;

constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream __get_m_in() const;

 bool __declspec(property(get=__get_partial, put=__set_partial))  partial;

constexpr void __set_partial(bool value) ;

constexpr bool __get_partial() const;

 int32_t __declspec(property(get=__get_dataLength, put=__set_dataLength))  dataLength;

constexpr void __set_dataLength(int32_t value) ;

constexpr int32_t __get_dataLength() const;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }, CppParam { name: "partial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "dataLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn, bool partial, int32_t dataLength) ;

/// @brief Method .ctor addr 0x11430cc size 0x40 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn, bool partial, int32_t dataLength) ;

/// @brief Method ReadByte addr 0x1145190 size 0xac virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x114536c size 0xe0 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadPartialDataLength addr 0x114523c size 0x130 virtual false final false
 int32_t ReadPartialDataLength() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
// Type: Org.BouncyCastle.Bcpg::BcpgInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(553))
// CS Name: Org.BouncyCastle.Bcpg.BcpgInputStream
class CORDL_TYPE BcpgInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
using PartialInputStream = ::Org::BouncyCastle::Bcpg::____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BcpgInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: " const&", def_value: None }]
constexpr BcpgInputStream(BcpgInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: "&&", def_value: None }]
constexpr BcpgInputStream(BcpgInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BcpgInputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr BcpgInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BcpgInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BcpgInputStream& operator=(BcpgInputStream&& o) noexcept = default;
  constexpr BcpgInputStream& operator=(BcpgInputStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_m_in, put=__set_m_in))  m_in;

constexpr void __set_m_in(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_m_in() const;

 bool __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(bool value) ;

constexpr bool __get_next() const;

 int32_t __declspec(property(get=__get_nextB, put=__set_nextB))  nextB;

constexpr void __set_nextB(int32_t value) ;

constexpr int32_t __get_nextB() const;


// Methods

/// @brief Method Wrap addr 0x11426cc size 0x98 virtual false final false
static ::Org::BouncyCastle::Bcpg::BcpgInputStream Wrap(::System::IO::Stream inStr) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit BcpgInputStream(::System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x1142764 size 0x2c virtual false final false
 void _ctor(::System::IO::Stream inputStream) ;

/// @brief Method ReadByte addr 0x1142790 size 0x40 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x11427d0 size 0xb4 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadAll addr 0x1142884 size 0x8 virtual false final false
 ::ArrayW<uint8_t> ReadAll() ;

/// @brief Method ReadFully addr 0x114288c size 0x5c virtual false final false
 void ReadFully(::ArrayW<uint8_t> buffer, int32_t off, int32_t len) ;

/// @brief Method ReadFully addr 0x11428e8 size 0x1c virtual false final false
 void ReadFully(::ArrayW<uint8_t> buffer) ;

/// @brief Method NextPacketTag addr 0x1142904 size 0xe0 virtual false final false
 ::Org::BouncyCastle::Bcpg::PacketTag NextPacketTag() ;

/// @brief Method ReadPacket addr 0x11429e4 size 0x6e8 virtual false final false
 ::Org::BouncyCastle::Bcpg::Packet ReadPacket() ;

/// @brief Method Close addr 0x1145128 size 0x68 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgInputStream, "Org.BouncyCastle.Bcpg", "BcpgInputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::____Org__BouncyCastle__Bcpg__BcpgInputStream__PartialInputStream, "Org.BouncyCastle.Bcpg", "BcpgInputStream/PartialInputStream");
