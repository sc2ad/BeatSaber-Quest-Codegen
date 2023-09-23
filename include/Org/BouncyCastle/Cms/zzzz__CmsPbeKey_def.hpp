#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsPbeKey;
}
// Type: Org.BouncyCastle.Cms::CmsPbeKey
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(642))
// CS Name: Org.BouncyCastle.Cms.CmsPbeKey
class CORDL_TYPE CmsPbeKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsPbeKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsPbeKey", modifiers: " const&", def_value: None }]
constexpr CmsPbeKey(CmsPbeKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsPbeKey", modifiers: "&&", def_value: None }]
constexpr CmsPbeKey(CmsPbeKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsPbeKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsPbeKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsPbeKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsPbeKey& operator=(CmsPbeKey&& o) noexcept = default;
  constexpr CmsPbeKey& operator=(CmsPbeKey const& o) noexcept = default;
                


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_password() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_salt, put=__set_salt))  salt;

constexpr void __set_salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_salt() const;

 int32_t __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(int32_t value) ;

constexpr int32_t __get_iterationCount() const;


// Properties

 ::StringW __declspec(property(get=get_Password))  Password;

 ::ArrayW<uint8_t> __declspec(property(get=get_Salt))  Salt;

 int32_t __declspec(property(get=get_IterationCount))  IterationCount;

 ::StringW __declspec(property(get=get_Algorithm))  Algorithm;

 ::StringW __declspec(property(get=get_Format))  Format;


// Methods

// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit CmsPbeKey(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x1159940 size 0x44 virtual false final false
 void _ctor(::StringW password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "keyDerivationAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit CmsPbeKey(::StringW password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x1159a78 size 0x3c virtual false final false
 void _ctor(::StringW password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

// Ctor Parameters [CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit CmsPbeKey(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0x1159984 size 0xf4 virtual false final false
 void _ctor(::ArrayW<char16_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

// Ctor Parameters [CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "keyDerivationAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit CmsPbeKey(::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method .ctor addr 0x1159ab4 size 0x210 virtual false final false
 void _ctor(::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier keyDerivationAlgorithm) ;

/// @brief Method Finalize addr 0x1159cc4 size 0xac virtual true final false
 void Finalize() ;

/// @brief Method get_Password addr 0x1159d70 size 0x10 virtual false final false
 ::StringW get_Password() ;

/// @brief Method get_Salt addr 0x1159d80 size 0x5c virtual false final false
 ::ArrayW<uint8_t> get_Salt() ;

/// @brief Method GetSalt addr 0x1159ddc size 0x4 virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_IterationCount addr 0x1159de0 size 0x8 virtual false final false
 int32_t get_IterationCount() ;

/// @brief Method get_Algorithm addr 0x1159de8 size 0x40 virtual false final false
 ::StringW get_Algorithm() ;

/// @brief Method get_Format addr 0x1159e28 size 0x40 virtual false final false
 ::StringW get_Format() ;

/// @brief Method GetEncoded addr 0x1159e68 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter GetEncoded(::StringW algorithmOid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsPbeKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsPbeKey, "Org.BouncyCastle.Cms", "CmsPbeKey");
