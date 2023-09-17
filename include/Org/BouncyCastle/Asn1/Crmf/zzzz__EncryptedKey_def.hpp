#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedData;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
// Type: Org.BouncyCastle.Asn1.Crmf::EncryptedKey
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(112))
// CS Name: Org.BouncyCastle.Asn1.Crmf.EncryptedKey
class CORDL_TYPE EncryptedKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EncryptedKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: " const&", def_value: None }]
constexpr EncryptedKey(EncryptedKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: "&&", def_value: None }]
constexpr EncryptedKey(EncryptedKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedKey(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedKey& operator=(EncryptedKey&& o) noexcept = default;
  constexpr EncryptedKey& operator=(EncryptedKey const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cms::EnvelopedData __declspec(property(get=__get_envelopedData, put=__set_envelopedData))  envelopedData;

constexpr void __set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedData value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData __get_envelopedData() const;

 ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue __declspec(property(get=__get_encryptedValue, put=__set_encryptedValue))  encryptedValue;

constexpr void __set_encryptedValue(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue __get_encryptedValue() const;


// Properties

 bool __declspec(property(get=get_IsEncryptedValue))  IsEncryptedValue;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method GetInstance addr 0xdf7e20 size 0x1a0 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey GetInstance(::bs_hook::Il2CppWrapperType o) ;

// Ctor Parameters [CppParam { name: "envelopedData", ty: "::Org::BouncyCastle::Asn1::Cms::EnvelopedData", modifiers: "", def_value: None }]
explicit EncryptedKey(::Org::BouncyCastle::Asn1::Cms::EnvelopedData envelopedData) ;

/// @brief Method .ctor addr 0xdf7fc0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData envelopedData) ;

// Ctor Parameters [CppParam { name: "encryptedValue", ty: "::Org::BouncyCastle::Asn1::Crmf::EncryptedValue", modifiers: "", def_value: None }]
explicit EncryptedKey(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue encryptedValue) ;

/// @brief Method .ctor addr 0xdf7fe8 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue encryptedValue) ;

/// @brief Method get_IsEncryptedValue addr 0xdf80b4 size 0x10 virtual true final false
 bool get_IsEncryptedValue() ;

/// @brief Method get_Value addr 0xdf80c4 size 0x1c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method ToAsn1Object addr 0xdf80e0 size 0x8c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, "Org.BouncyCastle.Asn1.Crmf", "EncryptedKey");
