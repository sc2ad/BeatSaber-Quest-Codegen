#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class Target;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class Targets;
}
// Type: Org.BouncyCastle.Asn1.X509::Targets
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(388))
// CS Name: Org.BouncyCastle.Asn1.X509.Targets
class CORDL_TYPE Targets : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Targets() = default;

// Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: " const&", def_value: None }]
constexpr Targets(Targets const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Targets", modifiers: "&&", def_value: None }]
constexpr Targets(Targets&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Targets(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Targets& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Targets& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Targets& operator=(Targets&& o) noexcept = default;
  constexpr Targets& operator=(Targets const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_targets, put=__set_targets))  targets;

constexpr void __set_targets(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_targets() const;


// Methods

/// @brief Method GetInstance addr 0x110dfa4 size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::X509::Targets GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "targets", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Targets(::Org::BouncyCastle::Asn1::Asn1Sequence targets) ;

/// @brief Method .ctor addr 0x110e2a0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence targets) ;

// Ctor Parameters [CppParam { name: "targets", ty: "::ArrayW<::Org::BouncyCastle::Asn1::X509::Target>", modifiers: "", def_value: None }]
explicit Targets(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target> targets) ;

/// @brief Method .ctor addr 0x110e21c size 0x7c virtual false final false
 void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::Target> targets) ;

/// @brief Method GetTargets addr 0x110e2c8 size 0x110 virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::Target> GetTargets() ;

/// @brief Method ToAsn1Object addr 0x110e3d8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Targets);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Targets, "Org.BouncyCastle.Asn1.X509", "Targets");
