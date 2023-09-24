#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
// Type: ::Builder
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1082))
// CS Name: Org.BouncyCastle.Crypto.Parameters.SkeinParameters::Builder
class CORDL_TYPE Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder(Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder(Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder& operator=(Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder& operator=(Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_parameters() const;


// Methods

static Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder New_ctor() ;

/// @brief Method .ctor addr 0xeac6d4 size 0x64 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder New_ctor(System::Collections::IDictionary paramsMap) ;

/// @brief Method .ctor addr 0xeac738 size 0x380 virtual false final false
 void _ctor(System::Collections::IDictionary paramsMap) ;

static Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder New_ctor(Org::BouncyCastle::Crypto::Parameters::SkeinParameters parameters) ;

/// @brief Method .ctor addr 0xeacab8 size 0x390 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Parameters::SkeinParameters parameters) ;

/// @brief Method Set addr 0xeace48 size 0x178 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder Set(int32_t type, ::ArrayW<uint8_t> value) ;

/// @brief Method SetKey addr 0xeacfc0 size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method SetPersonalisation addr 0xeacfcc size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetPersonalisation(::ArrayW<uint8_t> personalisation) ;

/// @brief Method SetPersonalisation addr 0xeacfd8 size 0x2ec virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetPersonalisation(System::DateTime date, ::StringW emailAddress, ::StringW distinguisher) ;

/// @brief Method SetPublicKey addr 0xead2c4 size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetPublicKey(::ArrayW<uint8_t> publicKey) ;

/// @brief Method SetKeyIdentifier addr 0xead2d0 size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetKeyIdentifier(::ArrayW<uint8_t> keyIdentifier) ;

/// @brief Method SetNonce addr 0xead2dc size 0xc virtual false final false
 Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder SetNonce(::ArrayW<uint8_t> nonce) ;

/// @brief Method Build addr 0xead2e8 size 0x68 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::SkeinParameters Build() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
// Type: Org.BouncyCastle.Crypto.Parameters::SkeinParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1083))
// CS Name: Org.BouncyCastle.Crypto.Parameters.SkeinParameters
class CORDL_TYPE SkeinParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Builder = Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder;

/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SkeinParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: " const&", def_value: None }]
constexpr SkeinParameters(SkeinParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: "&&", def_value: None }]
constexpr SkeinParameters(SkeinParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkeinParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SkeinParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkeinParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkeinParameters& operator=(SkeinParameters&& o) noexcept = default;
  constexpr SkeinParameters& operator=(SkeinParameters const& o) noexcept = default;
                


// Fields

/// @brief Field PARAM_TYPE_KEY offset 0
static constexpr int32_t  PARAM_TYPE_KEY{0};

/// @brief Field PARAM_TYPE_CONFIG offset 0
static constexpr int32_t  PARAM_TYPE_CONFIG{4};

/// @brief Field PARAM_TYPE_PERSONALISATION offset 0
static constexpr int32_t  PARAM_TYPE_PERSONALISATION{8};

/// @brief Field PARAM_TYPE_PUBLIC_KEY offset 0
static constexpr int32_t  PARAM_TYPE_PUBLIC_KEY{12};

/// @brief Field PARAM_TYPE_KEY_IDENTIFIER offset 0
static constexpr int32_t  PARAM_TYPE_KEY_IDENTIFIER{16};

/// @brief Field PARAM_TYPE_NONCE offset 0
static constexpr int32_t  PARAM_TYPE_NONCE{20};

/// @brief Field PARAM_TYPE_MESSAGE offset 0
static constexpr int32_t  PARAM_TYPE_MESSAGE{48};

/// @brief Field PARAM_TYPE_OUTPUT offset 0
static constexpr int32_t  PARAM_TYPE_OUTPUT{63};

 System::Collections::IDictionary __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_parameters() const;


// Methods

static Org::BouncyCastle::Crypto::Parameters::SkeinParameters New_ctor() ;

/// @brief Method .ctor addr 0xeac0d8 size 0x6c virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Parameters::SkeinParameters New_ctor(System::Collections::IDictionary parameters) ;

/// @brief Method .ctor addr 0xeac144 size 0x28 virtual false final false
 void _ctor(System::Collections::IDictionary parameters) ;

/// @brief Method GetParameters addr 0xeac16c size 0x8 virtual false final false
 System::Collections::IDictionary GetParameters() ;

/// @brief Method GetKey addr 0xeac174 size 0x110 virtual false final false
 ::ArrayW<uint8_t> GetKey() ;

/// @brief Method GetPersonalisation addr 0xeac284 size 0x114 virtual false final false
 ::ArrayW<uint8_t> GetPersonalisation() ;

/// @brief Method GetPublicKey addr 0xeac398 size 0x114 virtual false final false
 ::ArrayW<uint8_t> GetPublicKey() ;

/// @brief Method GetKeyIdentifier addr 0xeac4ac size 0x114 virtual false final false
 ::ArrayW<uint8_t> GetKeyIdentifier() ;

/// @brief Method GetNonce addr 0xeac5c0 size 0x114 virtual false final false
 ::ArrayW<uint8_t> GetNonce() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Org__BouncyCastle__Crypto__Parameters__SkeinParameters__Builder, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters/Builder");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::SkeinParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::SkeinParameters, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters");
