#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Smime {
class SmimeCapabilityVector;
}
// Type: Org.BouncyCastle.Asn1.Smime::SmimeCapabilityVector
namespace Org::BouncyCastle::Asn1::Smime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(296))
// CS Name: Org.BouncyCastle.Asn1.Smime.SmimeCapabilityVector
class CORDL_TYPE SmimeCapabilityVector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SmimeCapabilityVector() = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: " const&", def_value: None }]
constexpr SmimeCapabilityVector(SmimeCapabilityVector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SmimeCapabilityVector", modifiers: "&&", def_value: None }]
constexpr SmimeCapabilityVector(SmimeCapabilityVector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SmimeCapabilityVector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SmimeCapabilityVector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SmimeCapabilityVector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SmimeCapabilityVector& operator=(SmimeCapabilityVector&& o) noexcept = default;
  constexpr SmimeCapabilityVector& operator=(SmimeCapabilityVector const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_capabilities, put=__set_capabilities))  capabilities;

constexpr void __set_capabilities(::Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector __get_capabilities() const;


// Methods

/// @brief Method AddCapability addr 0xfe7944 size 0x80 virtual false final false
 void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability) ;

/// @brief Method AddCapability addr 0xfe79c4 size 0x134 virtual false final false
 void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability, int32_t value) ;

/// @brief Method AddCapability addr 0xfe7af8 size 0x108 virtual false final false
 void AddCapability(::Org::BouncyCastle::Asn1::DerObjectIdentifier capability, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method ToAsn1EncodableVector addr 0xfe7c00 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1EncodableVector ToAsn1EncodableVector() ;

// Ctor Parameters []
explicit SmimeCapabilityVector() ;

/// @brief Method .ctor addr 0xfe7c08 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Smime
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector, "Org.BouncyCastle.Asn1.Smime", "SmimeCapabilityVector");
