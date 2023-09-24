#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security {
class ASN1;
}
// Forward declare root types
namespace Mono::Security::X509 {
class SafeBag;
}
// Type: Mono.Security.X509::SafeBag
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13956))
// CS Name: Mono.Security.X509.SafeBag
class CORDL_TYPE SafeBag : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeBag() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: " const&", def_value: None }]
constexpr SafeBag(SafeBag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "&&", def_value: None }]
constexpr SafeBag(SafeBag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeBag(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SafeBag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeBag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeBag& operator=(SafeBag&& o) noexcept = default;
  constexpr SafeBag& operator=(SafeBag const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__bagOID, put=__set__bagOID))  _bagOID;

constexpr void __set__bagOID(::StringW value) ;

constexpr ::StringW __get__bagOID() const;

 Mono::Security::ASN1 __declspec(property(get=__get__asn1, put=__set__asn1))  _asn1;

constexpr void __set__asn1(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get__asn1() const;


// Properties

 ::StringW __declspec(property(get=get_BagOID))  BagOID;

 Mono::Security::ASN1 __declspec(property(get=get_ASN1))  ASN1;


// Methods

static Mono::Security::X509::SafeBag New_ctor(::StringW bagOID, Mono::Security::ASN1 asn1) ;

/// @brief Method .ctor addr 0x2282f28 size 0x2c virtual false final false
 void _ctor(::StringW bagOID, Mono::Security::ASN1 asn1) ;

/// @brief Method get_BagOID addr 0x2282f54 size 0x8 virtual false final false
 ::StringW get_BagOID() ;

/// @brief Method get_ASN1 addr 0x2282f5c size 0x8 virtual false final false
 Mono::Security::ASN1 get_ASN1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::SafeBag, "Mono.Security.X509", "SafeBag");
