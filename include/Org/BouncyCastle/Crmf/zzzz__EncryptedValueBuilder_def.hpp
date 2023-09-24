#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class EncryptedValueBuilder;
}
// Type: Org.BouncyCastle.Crmf::EncryptedValueBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(701))
// CS Name: Org.BouncyCastle.Crmf.EncryptedValueBuilder
class CORDL_TYPE EncryptedValueBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EncryptedValueBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: " const&", def_value: None }]
constexpr EncryptedValueBuilder(EncryptedValueBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: "&&", def_value: None }]
constexpr EncryptedValueBuilder(EncryptedValueBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedValueBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncryptedValueBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedValueBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedValueBuilder& operator=(EncryptedValueBuilder&& o) noexcept = default;
  constexpr EncryptedValueBuilder& operator=(EncryptedValueBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IKeyWrapper __declspec(property(get=__get_wrapper, put=__set_wrapper))  wrapper;

constexpr void __set_wrapper(Org::BouncyCastle::Crypto::IKeyWrapper value) ;

constexpr Org::BouncyCastle::Crypto::IKeyWrapper __get_wrapper() const;

 Org::BouncyCastle::Crypto::ICipherBuilderWithKey __declspec(property(get=__get_encryptor, put=__set_encryptor))  encryptor;

constexpr void __set_encryptor(Org::BouncyCastle::Crypto::ICipherBuilderWithKey value) ;

constexpr Org::BouncyCastle::Crypto::ICipherBuilderWithKey __get_encryptor() const;

 Org::BouncyCastle::Crmf::IEncryptedValuePadder __declspec(property(get=__get_padder, put=__set_padder))  padder;

constexpr void __set_padder(Org::BouncyCastle::Crmf::IEncryptedValuePadder value) ;

constexpr Org::BouncyCastle::Crmf::IEncryptedValuePadder __get_padder() const;


// Methods

static Org::BouncyCastle::Crmf::EncryptedValueBuilder New_ctor(Org::BouncyCastle::Crypto::IKeyWrapper wrapper, Org::BouncyCastle::Crypto::ICipherBuilderWithKey encryptor) ;

/// @brief Method .ctor addr 0x11856a0 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IKeyWrapper wrapper, Org::BouncyCastle::Crypto::ICipherBuilderWithKey encryptor) ;

static Org::BouncyCastle::Crmf::EncryptedValueBuilder New_ctor(Org::BouncyCastle::Crypto::IKeyWrapper wrapper, Org::BouncyCastle::Crypto::ICipherBuilderWithKey encryptor, Org::BouncyCastle::Crmf::IEncryptedValuePadder padder) ;

/// @brief Method .ctor addr 0x11856d0 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IKeyWrapper wrapper, Org::BouncyCastle::Crypto::ICipherBuilderWithKey encryptor, Org::BouncyCastle::Crmf::IEncryptedValuePadder padder) ;

/// @brief Method Build addr 0x118570c size 0x30 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::EncryptedValue Build(::ArrayW<char16_t> revocationPassphrase) ;

/// @brief Method Build addr 0x1185f24 size 0x144 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::EncryptedValue Build(Org::BouncyCastle::X509::X509Certificate holder) ;

/// @brief Method Build addr 0x1186068 size 0x5b4 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::EncryptedValue Build(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privateKeyInfo) ;

/// @brief Method EncryptData addr 0x11857f0 size 0x734 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::EncryptedValue EncryptData(::ArrayW<uint8_t> data) ;

/// @brief Method PadData addr 0x118573c size 0xb4 virtual false final false
 ::ArrayW<uint8_t> PadData(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::EncryptedValueBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::EncryptedValueBuilder, "Org.BouncyCastle.Crmf", "EncryptedValueBuilder");
