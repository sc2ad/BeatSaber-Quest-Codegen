#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class X448PrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class X448Agreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::X448Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(744))
// CS Name: Org.BouncyCastle.Crypto.Agreement.X448Agreement
class CORDL_TYPE X448Agreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IRawAgreement
constexpr operator  Org::BouncyCastle::Crypto::IRawAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X448Agreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "X448Agreement", modifiers: " const&", def_value: None }]
constexpr X448Agreement(X448Agreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X448Agreement", modifiers: "&&", def_value: None }]
constexpr X448Agreement(X448Agreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X448Agreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X448Agreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X448Agreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X448Agreement& operator=(X448Agreement&& o) noexcept = default;
  constexpr X448Agreement& operator=(X448Agreement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters __get_privateKey() const;


// Properties

 int32_t __declspec(property(get=get_AgreementSize))  AgreementSize;


// Methods

/// @brief Method Init addr 0x119219c size 0x74 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AgreementSize addr 0x1192210 size 0x58 virtual true final true
 int32_t get_AgreementSize() ;

/// @brief Method CalculateAgreement addr 0x1192268 size 0x8c virtual true final true
 void CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters publicKey, ::ArrayW<uint8_t> buf, int32_t off) ;

static Org::BouncyCastle::Crypto::Agreement::X448Agreement New_ctor() ;

/// @brief Method .ctor addr 0x11922f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::X448Agreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::X448Agreement, "Org.BouncyCastle.Crypto.Agreement", "X448Agreement");
