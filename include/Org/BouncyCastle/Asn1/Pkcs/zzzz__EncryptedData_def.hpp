#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedData;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptedData
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(233))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.EncryptedData
class CORDL_TYPE EncryptedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: " const&", def_value: None }]
constexpr EncryptedData(EncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "&&", def_value: None }]
constexpr EncryptedData(EncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedData& operator=(EncryptedData&& o) noexcept = default;
  constexpr EncryptedData& operator=(EncryptedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_data() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_EncryptionAlgorithm))  EncryptionAlgorithm;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Content))  Content;


// Methods

/// @brief Method GetInstance addr 0xef9574 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::EncryptedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncryptedData(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef96fc size 0x1e0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "contentType", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptionAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "content", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit EncryptedData(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method .ctor addr 0xef98dc size 0x184 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encryptionAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method get_ContentType addr 0xef9a60 size 0x90 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_EncryptionAlgorithm addr 0xef9af0 size 0x28 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_EncryptionAlgorithm() ;

/// @brief Method get_Content addr 0xef9b18 size 0xc8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Content() ;

/// @brief Method ToAsn1Object addr 0xef9be0 size 0x124 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::EncryptedData, "Org.BouncyCastle.Asn1.Pkcs", "EncryptedData");
