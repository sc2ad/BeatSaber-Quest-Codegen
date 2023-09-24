#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class RespID;
}
// Type: Org.BouncyCastle.Ocsp::RespID
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1623))
// CS Name: Org.BouncyCastle.Ocsp.RespID
class CORDL_TYPE RespID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RespID() = default;

// Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: " const&", def_value: None }]
constexpr RespID(RespID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RespID", modifiers: "&&", def_value: None }]
constexpr RespID(RespID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RespID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RespID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RespID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RespID& operator=(RespID&& o) noexcept = default;
  constexpr RespID& operator=(RespID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::ResponderID __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Ocsp::ResponderID value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponderID __get_id() const;


// Methods

static Org::BouncyCastle::Ocsp::RespID New_ctor(Org::BouncyCastle::Asn1::Ocsp::ResponderID id) ;

/// @brief Method .ctor addr 0x100fd44 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::ResponderID id) ;

static Org::BouncyCastle::Ocsp::RespID New_ctor(Org::BouncyCastle::Asn1::X509::X509Name name) ;

/// @brief Method .ctor addr 0x1018bc4 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509Name name) ;

static Org::BouncyCastle::Ocsp::RespID New_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method .ctor addr 0x1011064 size 0x210 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method ToAsn1Object addr 0x1018c40 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::ResponderID ToAsn1Object() ;

/// @brief Method Equals addr 0x1018c48 size 0xb0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x1018cf8 size 0x1c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::RespID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::RespID, "Org.BouncyCastle.Ocsp", "RespID");
