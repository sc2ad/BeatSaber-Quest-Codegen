#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Parameters {
class Srp6GroupParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsSrpGroupVerifier;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsSrpGroupVerifier
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1217))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsSrpGroupVerifier
class CORDL_TYPE DefaultTlsSrpGroupVerifier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultTlsSrpGroupVerifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: " const&", def_value: None }]
constexpr DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsSrpGroupVerifier", modifiers: "&&", def_value: None }]
constexpr DefaultTlsSrpGroupVerifier(DefaultTlsSrpGroupVerifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsSrpGroupVerifier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultTlsSrpGroupVerifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsSrpGroupVerifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsSrpGroupVerifier& operator=(DefaultTlsSrpGroupVerifier&& o) noexcept = default;
  constexpr DefaultTlsSrpGroupVerifier& operator=(DefaultTlsSrpGroupVerifier const& o) noexcept = default;
                


// Fields

static ::System::Collections::IList __declspec(property(get=__get_DefaultGroups, put=__set_DefaultGroups))  DefaultGroups;

static void __set_DefaultGroups(::System::Collections::IList value) ;

static ::System::Collections::IList __get_DefaultGroups() ;

 ::System::Collections::IList __declspec(property(get=__get_mGroups, put=__set_mGroups))  mGroups;

constexpr void __set_mGroups(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mGroups() const;


// Methods

// Ctor Parameters []
explicit DefaultTlsSrpGroupVerifier() ;

/// @brief Method .ctor addr 0xed7358 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "groups", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
explicit DefaultTlsSrpGroupVerifier(::System::Collections::IList groups) ;

/// @brief Method .ctor addr 0xed73c4 size 0x28 virtual false final false
 void _ctor(::System::Collections::IList groups) ;

/// @brief Method Accept addr 0xed73ec size 0x358 virtual true final false
 bool Accept(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters group) ;

/// @brief Method AreGroupsEqual addr 0xed7744 size 0x78 virtual true final false
 bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters a, ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters b) ;

/// @brief Method AreParametersEqual addr 0xed77bc size 0x3c virtual true final false
 bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger a, ::Org::BouncyCastle::Math::BigInteger b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsSrpGroupVerifier, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsSrpGroupVerifier");
