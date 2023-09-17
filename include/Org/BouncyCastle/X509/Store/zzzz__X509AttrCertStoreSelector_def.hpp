#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509AttrCertStoreSelector;
}
// Type: Org.BouncyCastle.X509.Store::X509AttrCertStoreSelector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1846))
// CS Name: Org.BouncyCastle.X509.Store.X509AttrCertStoreSelector
class CORDL_TYPE X509AttrCertStoreSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~X509AttrCertStoreSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: " const&", def_value: None }]
constexpr X509AttrCertStoreSelector(X509AttrCertStoreSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: "&&", def_value: None }]
constexpr X509AttrCertStoreSelector(X509AttrCertStoreSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509AttrCertStoreSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509AttrCertStoreSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509AttrCertStoreSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509AttrCertStoreSelector& operator=(X509AttrCertStoreSelector&& o) noexcept = default;
  constexpr X509AttrCertStoreSelector& operator=(X509AttrCertStoreSelector const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::X509::IX509AttributeCertificate __declspec(property(get=__get_attributeCert, put=__set_attributeCert))  attributeCert;

constexpr void __set_attributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate value) ;

constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate __get_attributeCert() const;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=__get_attributeCertificateValid, put=__set_attributeCertificateValid))  attributeCertificateValid;

constexpr void __set_attributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject __get_attributeCertificateValid() const;

 ::Org::BouncyCastle::X509::AttributeCertificateHolder __declspec(property(get=__get_holder, put=__set_holder))  holder;

constexpr void __set_holder(::Org::BouncyCastle::X509::AttributeCertificateHolder value) ;

constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder __get_holder() const;

 ::Org::BouncyCastle::X509::AttributeCertificateIssuer __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer value) ;

constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer __get_issuer() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_serialNumber() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_targetNames, put=__set_targetNames))  targetNames;

constexpr void __set_targetNames(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_targetNames() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_targetGroups, put=__set_targetGroups))  targetGroups;

constexpr void __set_targetGroups(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get_targetGroups() const;


// Properties

 ::Org::BouncyCastle::X509::IX509AttributeCertificate __declspec(property(get=get_AttributeCert, put=set_AttributeCert))  AttributeCert;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_AttribueCertificateValid, put=set_AttribueCertificateValid))  AttribueCertificateValid;

 ::Org::BouncyCastle::Utilities::Date::DateTimeObject __declspec(property(get=get_AttributeCertificateValid, put=set_AttributeCertificateValid))  AttributeCertificateValid;

 ::Org::BouncyCastle::X509::AttributeCertificateHolder __declspec(property(get=get_Holder, put=set_Holder))  Holder;

 ::Org::BouncyCastle::X509::AttributeCertificateIssuer __declspec(property(get=get_Issuer, put=set_Issuer))  Issuer;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber, put=set_SerialNumber))  SerialNumber;


// Methods

// Ctor Parameters []
explicit X509AttrCertStoreSelector() ;

/// @brief Method .ctor addr 0x10e5068 size 0x84 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "o", ty: "::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector", modifiers: "", def_value: None }]
explicit X509AttrCertStoreSelector(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector o) ;

/// @brief Method .ctor addr 0x10e50ec size 0xf8 virtual false final false
 void _ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector o) ;

/// @brief Method Match addr 0x10e51e4 size 0x814 virtual true final true
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Clone addr 0x10e59f8 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_AttributeCert addr 0x10e5a58 size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::IX509AttributeCertificate get_AttributeCert() ;

/// @brief Method set_AttributeCert addr 0x10e5a60 size 0x8 virtual false final false
 void set_AttributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate value) ;

/// @brief Method get_AttribueCertificateValid addr 0x10e5a68 size 0x8 virtual false final false
 ::Org::BouncyCastle::Utilities::Date::DateTimeObject get_AttribueCertificateValid() ;

/// @brief Method set_AttribueCertificateValid addr 0x10e5a70 size 0x8 virtual false final false
 void set_AttribueCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_AttributeCertificateValid addr 0x10e5a78 size 0x8 virtual false final false
 ::Org::BouncyCastle::Utilities::Date::DateTimeObject get_AttributeCertificateValid() ;

/// @brief Method set_AttributeCertificateValid addr 0x10e5a80 size 0x8 virtual false final false
 void set_AttributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject value) ;

/// @brief Method get_Holder addr 0x10e5a88 size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::AttributeCertificateHolder get_Holder() ;

/// @brief Method set_Holder addr 0x10e5a90 size 0x8 virtual false final false
 void set_Holder(::Org::BouncyCastle::X509::AttributeCertificateHolder value) ;

/// @brief Method get_Issuer addr 0x10e5a98 size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::AttributeCertificateIssuer get_Issuer() ;

/// @brief Method set_Issuer addr 0x10e5aa0 size 0x8 virtual false final false
 void set_Issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer value) ;

/// @brief Method get_SerialNumber addr 0x10e5aa8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method set_SerialNumber addr 0x10e5ab0 size 0x8 virtual false final false
 void set_SerialNumber(::Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method AddTargetName addr 0x10e5ab8 size 0xa8 virtual false final false
 void AddTargetName(::Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method AddTargetName addr 0x10e5b60 size 0x2c virtual false final false
 void AddTargetName(::ArrayW<uint8_t> name) ;

/// @brief Method SetTargetNames addr 0x10e5b8c size 0x18 virtual false final false
 void SetTargetNames(::System::Collections::IEnumerable names) ;

/// @brief Method GetTargetNames addr 0x10e6024 size 0x68 virtual false final false
 ::System::Collections::IEnumerable GetTargetNames() ;

/// @brief Method AddTargetGroup addr 0x10e608c size 0xa8 virtual false final false
 void AddTargetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName group) ;

/// @brief Method AddTargetGroup addr 0x10e6134 size 0x2c virtual false final false
 void AddTargetGroup(::ArrayW<uint8_t> name) ;

/// @brief Method SetTargetGroups addr 0x10e6160 size 0x18 virtual false final false
 void SetTargetGroups(::System::Collections::IEnumerable names) ;

/// @brief Method GetTargetGroups addr 0x10e6178 size 0x68 virtual false final false
 ::System::Collections::IEnumerable GetTargetGroups() ;

/// @brief Method ExtractGeneralNames addr 0x10e5ba4 size 0x480 virtual false final false
 ::Org::BouncyCastle::Utilities::Collections::ISet ExtractGeneralNames(::System::Collections::IEnumerable names) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, "Org.BouncyCastle.X509.Store", "X509AttrCertStoreSelector");
