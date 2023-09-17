#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Restriction;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::Restriction
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(191))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.Restriction
class CORDL_TYPE Restriction : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Restriction() = default;

// Ctor Parameters [CppParam { name: "", ty: "Restriction", modifiers: " const&", def_value: None }]
constexpr Restriction(Restriction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Restriction", modifiers: "&&", def_value: None }]
constexpr Restriction(Restriction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Restriction(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Restriction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Restriction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Restriction& operator=(Restriction&& o) noexcept = default;
  constexpr Restriction& operator=(Restriction const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_restriction, put=__set_restriction))  restriction;

constexpr void __set_restriction(::Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString __get_restriction() const;


// Properties

 ::Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_RestrictionString))  RestrictionString;


// Methods

/// @brief Method GetInstance addr 0xeed008 size 0x158 virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "restriction", ty: "::Org::BouncyCastle::Asn1::X500::DirectoryString", modifiers: "", def_value: None }]
explicit Restriction(::Org::BouncyCastle::Asn1::X500::DirectoryString restriction) ;

/// @brief Method .ctor addr 0xeed160 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString restriction) ;

// Ctor Parameters [CppParam { name: "restriction", ty: "::StringW", modifiers: "", def_value: None }]
explicit Restriction(::StringW restriction) ;

/// @brief Method .ctor addr 0xeed188 size 0x7c virtual false final false
 void _ctor(::StringW restriction) ;

/// @brief Method get_RestrictionString addr 0xeed204 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X500::DirectoryString get_RestrictionString() ;

/// @brief Method ToAsn1Object addr 0xeed20c size 0x20 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Restriction, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Restriction");
