#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
// Type: Org.BouncyCastle.Asn1.Tsp::MessageImprint
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(315))
// CS Name: Org.BouncyCastle.Asn1.Tsp.MessageImprint
class CORDL_TYPE MessageImprint : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MessageImprint() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageImprint", modifiers: " const&", def_value: None }]
constexpr MessageImprint(MessageImprint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageImprint", modifiers: "&&", def_value: None }]
constexpr MessageImprint(MessageImprint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageImprint(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr MessageImprint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageImprint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageImprint& operator=(MessageImprint&& o) noexcept = default;
  constexpr MessageImprint& operator=(MessageImprint const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_hashedMessage, put=__set_hashedMessage))  hashedMessage;

constexpr void __set_hashedMessage(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_hashedMessage() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;


// Methods

/// @brief Method GetInstance addr 0xfebd48 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Tsp::MessageImprint GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Tsp::MessageImprint New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfebdec size 0xf8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Tsp::MessageImprint New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> hashedMessage) ;

/// @brief Method .ctor addr 0xfebee4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgorithm, ::ArrayW<uint8_t> hashedMessage) ;

/// @brief Method get_HashAlgorithm addr 0xfebf10 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method GetHashedMessage addr 0xfebf18 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetHashedMessage() ;

/// @brief Method ToAsn1Object addr 0xfebf20 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Tsp::MessageImprint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Tsp::MessageImprint, "Org.BouncyCastle.Asn1.Tsp", "MessageImprint");
