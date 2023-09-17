#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Targets;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class TargetInformation;
}
// Type: Org.BouncyCastle.Asn1.X509::TargetInformation
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(387))
// CS Name: Org.BouncyCastle.Asn1.X509.TargetInformation
class CORDL_TYPE TargetInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TargetInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetInformation", modifiers: " const&", def_value: None }]
constexpr TargetInformation(TargetInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TargetInformation", modifiers: "&&", def_value: None }]
constexpr TargetInformation(TargetInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TargetInformation(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TargetInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TargetInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TargetInformation& operator=(TargetInformation&& o) noexcept = default;
  constexpr TargetInformation& operator=(TargetInformation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_targets, put=__set_targets))  targets;

constexpr void __set_targets(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_targets() const;


// Methods

/// @brief Method GetInstance addr 0x110dce0 size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::X509::TargetInformation GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "targets", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit TargetInformation(::Org::BouncyCastle::Asn1::Asn1Sequence targets) ;

/// @brief Method .ctor addr 0x110de6c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence targets) ;

/// @brief Method GetTargetsObjects addr 0x110de94 size 0x110 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::Targets> GetTargetsObjects() ;

// Ctor Parameters [CppParam { name: "targets", ty: "::Org::BouncyCastle::Asn1::X509::Targets", modifiers: "", def_value: None }]
explicit TargetInformation(::Org::BouncyCastle::Asn1::X509::Targets targets) ;

/// @brief Method .ctor addr 0x110e130 size 0x7c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::Targets targets) ;

// Ctor Parameters [CppParam { name: "targets", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::Target>", modifiers: "", def_value: None }]
explicit TargetInformation(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target> targets) ;

/// @brief Method .ctor addr 0x110e1ac size 0x70 virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target> targets) ;

/// @brief Method ToAsn1Object addr 0x110e298 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::TargetInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::TargetInformation, "Org.BouncyCastle.Asn1.X509", "TargetInformation");
