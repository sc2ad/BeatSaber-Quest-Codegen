#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVector
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1671))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpUserAttributeSubpacketVector
class CORDL_TYPE PgpUserAttributeSubpacketVector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpUserAttributeSubpacketVector() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: " const&", def_value: None }]
constexpr PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: "&&", def_value: None }]
constexpr PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpUserAttributeSubpacketVector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpUserAttributeSubpacketVector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpUserAttributeSubpacketVector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpUserAttributeSubpacketVector& operator=(PgpUserAttributeSubpacketVector&& o) noexcept = default;
  constexpr PgpUserAttributeSubpacketVector& operator=(PgpUserAttributeSubpacketVector const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> __declspec(property(get=__get_packets, put=__set_packets))  packets;

constexpr void __set_packets(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> __get_packets() const;


// Methods

// Ctor Parameters [CppParam { name: "packets", ty: "::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket>", modifiers: "", def_value: None }]
explicit PgpUserAttributeSubpacketVector(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> packets) ;

/// @brief Method .ctor addr 0x10412d8 size 0x28 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> packets) ;

/// @brief Method GetSubpacket addr 0x1041300 size 0xa0 virtual false final false
 Org::BouncyCastle::Bcpg::UserAttributeSubpacket GetSubpacket(Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type) ;

/// @brief Method GetImageAttribute addr 0x10413a0 size 0x80 virtual false final false
 Org::BouncyCastle::Bcpg::Attr::ImageAttrib GetImageAttribute() ;

/// @brief Method ToSubpacketArray addr 0x1041420 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Bcpg::UserAttributeSubpacket> ToSubpacketArray() ;

/// @brief Method Equals addr 0x1041428 size 0x124 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x104154c size 0x78 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVector");
