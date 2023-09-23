#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ConcatenationKdfGenerator;
}
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::ConcatenationKdfGenerator
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(722))
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.ConcatenationKdfGenerator
class CORDL_TYPE ConcatenationKdfGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcatenationKdfGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: " const&", def_value: None }]
constexpr ConcatenationKdfGenerator(ConcatenationKdfGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: "&&", def_value: None }]
constexpr ConcatenationKdfGenerator(ConcatenationKdfGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcatenationKdfGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConcatenationKdfGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcatenationKdfGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcatenationKdfGenerator& operator=(ConcatenationKdfGenerator&& o) noexcept = default;
  constexpr ConcatenationKdfGenerator& operator=(ConcatenationKdfGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mShared, put=__set_mShared))  mShared;

constexpr void __set_mShared(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mShared() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mOtherInfo, put=__set_mOtherInfo))  mOtherInfo;

constexpr void __set_mOtherInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mOtherInfo() const;

 int32_t __declspec(property(get=__get_mHLen, put=__set_mHLen))  mHLen;

constexpr void __set_mHLen(int32_t value) ;

constexpr int32_t __get_mHLen() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit ConcatenationKdfGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0x118b43c size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0x118b4f8 size 0xcc virtual true final false
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters param) ;

/// @brief Method get_Digest addr 0x118b5c4 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0x118b5cc size 0x5d8 virtual true final false
 int32_t GenerateBytes(::ArrayW<uint8_t> outBytes, int32_t outOff, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ConcatenationKdfGenerator");
