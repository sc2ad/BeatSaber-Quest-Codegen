#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class ArrayList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NameConstraints;
}
// Type: Org.BouncyCastle.Asn1.X509::NameConstraints
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(370))
// CS Name: Org.BouncyCastle.Asn1.X509.NameConstraints
class CORDL_TYPE NameConstraints : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NameConstraints() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: " const&", def_value: None }]
constexpr NameConstraints(NameConstraints const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameConstraints", modifiers: "&&", def_value: None }]
constexpr NameConstraints(NameConstraints&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameConstraints(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr NameConstraints& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameConstraints& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameConstraints& operator=(NameConstraints&& o) noexcept = default;
  constexpr NameConstraints& operator=(NameConstraints const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_permitted, put=__set_permitted))  permitted;

constexpr void __set_permitted(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_permitted() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_excluded, put=__set_excluded))  excluded;

constexpr void __set_excluded(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_excluded() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_PermittedSubtrees))  PermittedSubtrees;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_ExcludedSubtrees))  ExcludedSubtrees;


// Methods

/// @brief Method GetInstance addr 0x1108454 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::NameConstraints GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit NameConstraints(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x11085dc size 0x338 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "permitted", ty: "System::Collections::ArrayList", modifiers: "", def_value: None }, CppParam { name: "excluded", ty: "System::Collections::ArrayList", modifiers: "", def_value: None }]
explicit NameConstraints(System::Collections::ArrayList permitted, System::Collections::ArrayList excluded) ;

/// @brief Method .ctor addr 0x1108914 size 0x4 virtual false final false
 void _ctor(System::Collections::ArrayList permitted, System::Collections::ArrayList excluded) ;

// Ctor Parameters [CppParam { name: "permitted", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "excluded", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit NameConstraints(System::Collections::IList permitted, System::Collections::IList excluded) ;

/// @brief Method .ctor addr 0x1108918 size 0x48 virtual false final false
 void _ctor(System::Collections::IList permitted, System::Collections::IList excluded) ;

/// @brief Method CreateSequence addr 0x1108960 size 0x2b0 virtual false final false
 Org::BouncyCastle::Asn1::DerSequence CreateSequence(System::Collections::IList subtrees) ;

/// @brief Method get_PermittedSubtrees addr 0x1108c10 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_PermittedSubtrees() ;

/// @brief Method get_ExcludedSubtrees addr 0x1108c18 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_ExcludedSubtrees() ;

/// @brief Method ToAsn1Object addr 0x1108c20 size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::NameConstraints);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::NameConstraints, "Org.BouncyCastle.Asn1.X509", "NameConstraints");
