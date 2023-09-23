#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class OidTokenizer;
}
// Type: Org.BouncyCastle.Asn1::OidTokenizer
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(527))
// CS Name: Org.BouncyCastle.Asn1.OidTokenizer
class CORDL_TYPE OidTokenizer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OidTokenizer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: " const&", def_value: None }]
constexpr OidTokenizer(OidTokenizer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OidTokenizer", modifiers: "&&", def_value: None }]
constexpr OidTokenizer(OidTokenizer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OidTokenizer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OidTokenizer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OidTokenizer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OidTokenizer& operator=(OidTokenizer&& o) noexcept = default;
  constexpr OidTokenizer& operator=(OidTokenizer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_oid, put=__set_oid))  oid;

constexpr void __set_oid(::StringW value) ;

constexpr ::StringW __get_oid() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 bool __declspec(property(get=get_HasMoreTokens))  HasMoreTokens;


// Methods

// Ctor Parameters [CppParam { name: "oid", ty: "::StringW", modifiers: "", def_value: None }]
explicit OidTokenizer(::StringW oid) ;

/// @brief Method .ctor addr 0x113b914 size 0x28 virtual false final false
 void _ctor(::StringW oid) ;

/// @brief Method get_HasMoreTokens addr 0x113b93c size 0x10 virtual false final false
 bool get_HasMoreTokens() ;

/// @brief Method NextToken addr 0x113b94c size 0x88 virtual false final false
 ::StringW NextToken() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::OidTokenizer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::OidTokenizer, "Org.BouncyCastle.Asn1", "OidTokenizer");
