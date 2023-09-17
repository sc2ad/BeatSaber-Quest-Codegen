#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Type: Org.BouncyCastle.Asn1.X509::GeneralNames
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(362))
// CS Name: Org.BouncyCastle.Asn1.X509.GeneralNames
class CORDL_TYPE GeneralNames : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GeneralNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: " const&", def_value: None }]
constexpr GeneralNames(GeneralNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralNames", modifiers: "&&", def_value: None }]
constexpr GeneralNames(GeneralNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralNames(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr GeneralNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralNames& operator=(GeneralNames&& o) noexcept = default;
  constexpr GeneralNames& operator=(GeneralNames const& o) noexcept = default;
                


// Fields

 ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> __declspec(property(get=__get_names, put=__set_names))  names;

constexpr void __set_names(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> value) ;

constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> __get_names() const;


// Methods

/// @brief Method Copy addr 0x1104f68 size 0x78 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> Copy(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> names) ;

/// @brief Method GetInstance addr 0x1104fe0 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralNames GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x1101e9c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralNames GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method FromExtensions addr 0x11051a8 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::GeneralNames FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions, ::Org::BouncyCastle::Asn1::DerObjectIdentifier extOid) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit GeneralNames(::Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method .ctor addr 0x1105220 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName name) ;

// Ctor Parameters [CppParam { name: "names", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName>", modifiers: "", def_value: None }]
explicit GeneralNames(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> names) ;

/// @brief Method .ctor addr 0x11052c8 size 0x30 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> names) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit GeneralNames(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1105084 size 0x124 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetNames addr 0x11052f8 size 0x8 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName> GetNames() ;

/// @brief Method ToAsn1Object addr 0x1105300 size 0x68 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x1105368 size 0x15c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::GeneralNames);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::GeneralNames, "Org.BouncyCastle.Asn1.X509", "GeneralNames");
