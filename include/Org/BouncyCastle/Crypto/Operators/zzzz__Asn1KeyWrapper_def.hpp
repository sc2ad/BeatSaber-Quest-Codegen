#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1KeyWrapper;
}
// Type: Org.BouncyCastle.Crypto.Operators::Asn1KeyWrapper
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(984))
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1KeyWrapper
class CORDL_TYPE Asn1KeyWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IKeyWrapper
constexpr operator  Org::BouncyCastle::Crypto::IKeyWrapper() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Asn1KeyWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1KeyWrapper", modifiers: " const&", def_value: None }]
constexpr Asn1KeyWrapper(Asn1KeyWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1KeyWrapper", modifiers: "&&", def_value: None }]
constexpr Asn1KeyWrapper(Asn1KeyWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1KeyWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1KeyWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1KeyWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1KeyWrapper& operator=(Asn1KeyWrapper&& o) noexcept = default;
  constexpr Asn1KeyWrapper& operator=(Asn1KeyWrapper const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 Org::BouncyCastle::Crypto::IKeyWrapper __declspec(property(get=__get_wrapper, put=__set_wrapper))  wrapper;

constexpr void __set_wrapper(Org::BouncyCastle::Crypto::IKeyWrapper value) ;

constexpr Org::BouncyCastle::Crypto::IKeyWrapper __get_wrapper() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

static Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper New_ctor(::StringW algorithm, Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method .ctor addr 0xe9b690 size 0xa4 virtual false final false
 void _ctor(::StringW algorithm, Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method get_AlgorithmDetails addr 0xe9b96c size 0xa0 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AlgorithmDetails() ;

/// @brief Method Wrap addr 0xe9ba0c size 0xac virtual true final true
 Org::BouncyCastle::Crypto::IBlockResult Wrap(::ArrayW<uint8_t> keyData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::Asn1KeyWrapper, "Org.BouncyCastle.Crypto.Operators", "Asn1KeyWrapper");
