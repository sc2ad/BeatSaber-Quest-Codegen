#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BaseKdfBytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::BaseKdfBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(886))
// CS Name: Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
class CORDL_TYPE BaseKdfBytesGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BaseKdfBytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: " const&", def_value: None }]
constexpr BaseKdfBytesGenerator(BaseKdfBytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: "&&", def_value: None }]
constexpr BaseKdfBytesGenerator(BaseKdfBytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseKdfBytesGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseKdfBytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseKdfBytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseKdfBytesGenerator& operator=(BaseKdfBytesGenerator&& o) noexcept = default;
  constexpr BaseKdfBytesGenerator& operator=(BaseKdfBytesGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_counterStart, put=__set_counterStart))  counterStart;

constexpr void __set_counterStart(int32_t value) ;

constexpr int32_t __get_counterStart() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_shared, put=__set_shared))  shared;

constexpr void __set_shared(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_shared() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_iv() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "counterStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit BaseKdfBytesGenerator(int32_t counterStart, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe692f4 size 0x30 virtual false final false
 void _ctor(int32_t counterStart, Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0xe69324 size 0x110 virtual true final false
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters parameters) ;

/// @brief Method get_Digest addr 0xe69434 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0xe6943c size 0x534 virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, "Org.BouncyCastle.Crypto.Generators", "BaseKdfBytesGenerator");
