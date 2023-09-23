#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CertPairStoreSelector;
}
// Type: Org.BouncyCastle.X509.Store::X509CertPairStoreSelector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1847))
// CS Name: Org.BouncyCastle.X509.Store.X509CertPairStoreSelector
class CORDL_TYPE X509CertPairStoreSelector : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509CertPairStoreSelector() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertPairStoreSelector", modifiers: " const&", def_value: None }]
constexpr X509CertPairStoreSelector(X509CertPairStoreSelector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertPairStoreSelector", modifiers: "&&", def_value: None }]
constexpr X509CertPairStoreSelector(X509CertPairStoreSelector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertPairStoreSelector(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertPairStoreSelector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertPairStoreSelector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertPairStoreSelector& operator=(X509CertPairStoreSelector&& o) noexcept = default;
  constexpr X509CertPairStoreSelector& operator=(X509CertPairStoreSelector const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::X509::X509CertificatePair __declspec(property(get=__get_certPair, put=__set_certPair))  certPair;

constexpr void __set_certPair(Org::BouncyCastle::X509::X509CertificatePair value) ;

constexpr Org::BouncyCastle::X509::X509CertificatePair __get_certPair() const;

 Org::BouncyCastle::X509::Store::X509CertStoreSelector __declspec(property(get=__get_forwardSelector, put=__set_forwardSelector))  forwardSelector;

constexpr void __set_forwardSelector(Org::BouncyCastle::X509::Store::X509CertStoreSelector value) ;

constexpr Org::BouncyCastle::X509::Store::X509CertStoreSelector __get_forwardSelector() const;

 Org::BouncyCastle::X509::Store::X509CertStoreSelector __declspec(property(get=__get_reverseSelector, put=__set_reverseSelector))  reverseSelector;

constexpr void __set_reverseSelector(Org::BouncyCastle::X509::Store::X509CertStoreSelector value) ;

constexpr Org::BouncyCastle::X509::Store::X509CertStoreSelector __get_reverseSelector() const;


// Properties

 Org::BouncyCastle::X509::X509CertificatePair __declspec(property(get=get_CertPair, put=set_CertPair))  CertPair;

 Org::BouncyCastle::X509::Store::X509CertStoreSelector __declspec(property(get=get_ForwardSelector, put=set_ForwardSelector))  ForwardSelector;

 Org::BouncyCastle::X509::Store::X509CertStoreSelector __declspec(property(get=get_ReverseSelector, put=set_ReverseSelector))  ReverseSelector;


// Methods

/// @brief Method CloneSelector addr 0x10e61e0 size 0x8c virtual false final false
static Org::BouncyCastle::X509::Store::X509CertStoreSelector CloneSelector(Org::BouncyCastle::X509::Store::X509CertStoreSelector s) ;

// Ctor Parameters []
explicit X509CertPairStoreSelector() ;

/// @brief Method .ctor addr 0x10e626c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "o", ty: "Org::BouncyCastle::X509::Store::X509CertPairStoreSelector", modifiers: "", def_value: None }]
explicit X509CertPairStoreSelector(Org::BouncyCastle::X509::Store::X509CertPairStoreSelector o) ;

/// @brief Method .ctor addr 0x10e6274 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::X509::Store::X509CertPairStoreSelector o) ;

/// @brief Method get_CertPair addr 0x10e62d0 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509CertificatePair get_CertPair() ;

/// @brief Method set_CertPair addr 0x10e62d8 size 0x8 virtual false final false
 void set_CertPair(Org::BouncyCastle::X509::X509CertificatePair value) ;

/// @brief Method get_ForwardSelector addr 0x10e62c0 size 0x8 virtual false final false
 Org::BouncyCastle::X509::Store::X509CertStoreSelector get_ForwardSelector() ;

/// @brief Method set_ForwardSelector addr 0x10e62e0 size 0x1c virtual false final false
 void set_ForwardSelector(Org::BouncyCastle::X509::Store::X509CertStoreSelector value) ;

/// @brief Method get_ReverseSelector addr 0x10e62c8 size 0x8 virtual false final false
 Org::BouncyCastle::X509::Store::X509CertStoreSelector get_ReverseSelector() ;

/// @brief Method set_ReverseSelector addr 0x10e62fc size 0x1c virtual false final false
 void set_ReverseSelector(Org::BouncyCastle::X509::Store::X509CertStoreSelector value) ;

/// @brief Method Match addr 0x10e6318 size 0x12c virtual true final true
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Clone addr 0x10e6444 size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::X509CertPairStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::X509CertPairStoreSelector, "Org.BouncyCastle.X509.Store", "X509CertPairStoreSelector");
