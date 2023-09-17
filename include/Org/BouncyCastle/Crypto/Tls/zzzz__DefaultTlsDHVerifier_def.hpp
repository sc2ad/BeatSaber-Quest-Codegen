#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsDHVerifier;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsDHVerifier
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1212))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsDHVerifier
class CORDL_TYPE DefaultTlsDHVerifier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DefaultTlsDHVerifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: " const&", def_value: None }]
constexpr DefaultTlsDHVerifier(DefaultTlsDHVerifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsDHVerifier", modifiers: "&&", def_value: None }]
constexpr DefaultTlsDHVerifier(DefaultTlsDHVerifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsDHVerifier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultTlsDHVerifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsDHVerifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsDHVerifier& operator=(DefaultTlsDHVerifier&& o) noexcept = default;
  constexpr DefaultTlsDHVerifier& operator=(DefaultTlsDHVerifier const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_DefaultMinimumPrimeBits, put=__set_DefaultMinimumPrimeBits))  DefaultMinimumPrimeBits;

static void __set_DefaultMinimumPrimeBits(int32_t value) ;

static int32_t __get_DefaultMinimumPrimeBits() ;

static ::System::Collections::IList __declspec(property(get=__get_DefaultGroups, put=__set_DefaultGroups))  DefaultGroups;

static void __set_DefaultGroups(::System::Collections::IList value) ;

static ::System::Collections::IList __get_DefaultGroups() ;

 ::System::Collections::IList __declspec(property(get=__get_mGroups, put=__set_mGroups))  mGroups;

constexpr void __set_mGroups(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_mGroups() const;

 int32_t __declspec(property(get=__get_mMinimumPrimeBits, put=__set_mMinimumPrimeBits))  mMinimumPrimeBits;

constexpr void __set_mMinimumPrimeBits(int32_t value) ;

constexpr int32_t __get_mMinimumPrimeBits() const;


// Properties

 int32_t __declspec(property(get=get_MinimumPrimeBits))  MinimumPrimeBits;


// Methods

/// @brief Method AddDefaultGroup addr 0xed5744 size 0xd4 virtual false final false
static void AddDefaultGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

// Ctor Parameters []
explicit DefaultTlsDHVerifier() ;

/// @brief Method .ctor addr 0xed5290 size 0x60 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "minimumPrimeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit DefaultTlsDHVerifier(int32_t minimumPrimeBits) ;

/// @brief Method .ctor addr 0xed596c size 0x7c virtual false final false
 void _ctor(int32_t minimumPrimeBits) ;

// Ctor Parameters [CppParam { name: "groups", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "minimumPrimeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit DefaultTlsDHVerifier(::System::Collections::IList groups, int32_t minimumPrimeBits) ;

/// @brief Method .ctor addr 0xed59e8 size 0x30 virtual false final false
 void _ctor(::System::Collections::IList groups, int32_t minimumPrimeBits) ;

/// @brief Method Accept addr 0xed5a18 size 0x4c virtual true final false
 bool Accept(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method get_MinimumPrimeBits addr 0xed5a64 size 0x8 virtual true final false
 int32_t get_MinimumPrimeBits() ;

/// @brief Method AreGroupsEqual addr 0xed5a6c size 0x78 virtual true final false
 bool AreGroupsEqual(::Org::BouncyCastle::Crypto::Parameters::DHParameters a, ::Org::BouncyCastle::Crypto::Parameters::DHParameters b) ;

/// @brief Method AreParametersEqual addr 0xed5ae4 size 0x3c virtual true final false
 bool AreParametersEqual(::Org::BouncyCastle::Math::BigInteger a, ::Org::BouncyCastle::Math::BigInteger b) ;

/// @brief Method CheckGroup addr 0xed5b20 size 0x374 virtual true final false
 bool CheckGroup(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method CheckMinimumPrimeBits addr 0xed5e94 size 0x4c virtual true final false
 bool CheckMinimumPrimeBits(::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsDHVerifier, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsDHVerifier");
