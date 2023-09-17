#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ServiceLocator;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::ServiceLocator
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(220))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ServiceLocator
class CORDL_TYPE ServiceLocator : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ServiceLocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceLocator", modifiers: " const&", def_value: None }]
constexpr ServiceLocator(ServiceLocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServiceLocator", modifiers: "&&", def_value: None }]
constexpr ServiceLocator(ServiceLocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServiceLocator(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ServiceLocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServiceLocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServiceLocator& operator=(ServiceLocator&& o) noexcept = default;
  constexpr ServiceLocator& operator=(ServiceLocator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_locator, put=__set_locator))  locator;

constexpr void __set_locator(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_locator() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Locator))  Locator;


// Methods

/// @brief Method GetInstance addr 0xef58e4 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef58fc size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "issuer", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }]
explicit ServiceLocator(::Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method .ctor addr 0xef5b5c size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

// Ctor Parameters [CppParam { name: "issuer", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "locator", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit ServiceLocator(::Org::BouncyCastle::Asn1::X509::X509Name issuer, ::Org::BouncyCastle::Asn1::Asn1Object locator) ;

/// @brief Method .ctor addr 0xef5b64 size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name issuer, ::Org::BouncyCastle::Asn1::Asn1Object locator) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ServiceLocator(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef5a84 size 0xd8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Issuer addr 0xef5be0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_Locator addr 0xef5be8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_Locator() ;

/// @brief Method ToAsn1Object addr 0xef5bf0 size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ServiceLocator, "Org.BouncyCastle.Asn1.Ocsp", "ServiceLocator");
