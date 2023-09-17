#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PopoSigningKey
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(119))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoSigningKey
class CORDL_TYPE PopoSigningKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PopoSigningKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: " const&", def_value: None }]
constexpr PopoSigningKey(PopoSigningKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKey", modifiers: "&&", def_value: None }]
constexpr PopoSigningKey(PopoSigningKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopoSigningKey(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PopoSigningKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopoSigningKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopoSigningKey& operator=(PopoSigningKey&& o) noexcept = default;
  constexpr PopoSigningKey& operator=(PopoSigningKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput __declspec(property(get=__get_poposkInput, put=__set_poposkInput))  poposkInput;

constexpr void __set_poposkInput(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput __get_poposkInput() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algorithmIdentifier, put=__set_algorithmIdentifier))  algorithmIdentifier;

constexpr void __set_algorithmIdentifier(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algorithmIdentifier() const;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString __get_signature() const;


// Properties

 ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput __declspec(property(get=get_PoposkInput))  PoposkInput;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmIdentifier))  AlgorithmIdentifier;

 ::Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Signature))  Signature;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PopoSigningKey(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf9c50 size 0x208 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf9fe0 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdfa168 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "poposkIn", ty: "::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput", modifiers: "", def_value: None }, CppParam { name: "aid", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit PopoSigningKey(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier aid, ::Org::BouncyCastle::Asn1::DerBitString signature) ;

/// @brief Method .ctor addr 0xdfa180 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput poposkIn, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier aid, ::Org::BouncyCastle::Asn1::DerBitString signature) ;

/// @brief Method get_PoposkInput addr 0xdfa1bc size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput get_PoposkInput() ;

/// @brief Method get_AlgorithmIdentifier addr 0xdfa1c4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmIdentifier() ;

/// @brief Method get_Signature addr 0xdfa1cc size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerBitString get_Signature() ;

/// @brief Method ToAsn1Object addr 0xdfa1d4 size 0xc8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKey, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKey");
