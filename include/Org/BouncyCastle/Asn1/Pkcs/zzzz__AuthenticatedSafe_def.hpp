#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class AuthenticatedSafe;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::AuthenticatedSafe
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(227))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.AuthenticatedSafe
class CORDL_TYPE AuthenticatedSafe : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AuthenticatedSafe() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: " const&", def_value: None }]
constexpr AuthenticatedSafe(AuthenticatedSafe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedSafe", modifiers: "&&", def_value: None }]
constexpr AuthenticatedSafe(AuthenticatedSafe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticatedSafe(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AuthenticatedSafe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticatedSafe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticatedSafe& operator=(AuthenticatedSafe&& o) noexcept = default;
  constexpr AuthenticatedSafe& operator=(AuthenticatedSafe const& o) noexcept = default;
                


// Fields

 ::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> value) ;

constexpr ::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> __get_info() const;

 bool __declspec(property(get=__get_isBer, put=__set_isBer))  isBer;

constexpr void __set_isBer(bool value) ;

constexpr bool __get_isBer() const;


// Methods

/// @brief Method Copy addr 0xef7828 size 0x78 virtual false final false
static ::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> Copy(::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> info) ;

/// @brief Method GetInstance addr 0xef78a0 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AuthenticatedSafe(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef7944 size 0x158 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "info", ty: "::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo>", modifiers: "", def_value: None }]
explicit AuthenticatedSafe(::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> info) ;

/// @brief Method .ctor addr 0xef7b40 size 0x38 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> info) ;

/// @brief Method GetContentInfo addr 0xef7b78 size 0x8 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Pkcs::ContentInfo> GetContentInfo() ;

/// @brief Method ToAsn1Object addr 0xef7b80 size 0xa4 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::AuthenticatedSafe, "Org.BouncyCastle.Asn1.Pkcs", "AuthenticatedSafe");
