#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PopoPrivKey
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(118))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PopoPrivKey
class CORDL_TYPE PopoPrivKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PopoPrivKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: " const&", def_value: None }]
constexpr PopoPrivKey(PopoPrivKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoPrivKey", modifiers: "&&", def_value: None }]
constexpr PopoPrivKey(PopoPrivKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopoPrivKey(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PopoPrivKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopoPrivKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopoPrivKey& operator=(PopoPrivKey&& o) noexcept = default;
  constexpr PopoPrivKey& operator=(PopoPrivKey const& o) noexcept = default;
                


// Fields

/// @brief Field thisMessage offset 0
static constexpr int32_t  thisMessage{0};

/// @brief Field subsequentMessage offset 0
static constexpr int32_t  subsequentMessage{1};

/// @brief Field dhMAC offset 0
static constexpr int32_t  dhMAC{2};

/// @brief Field agreeMAC offset 0
static constexpr int32_t  agreeMAC{3};

/// @brief Field encryptedKey offset 0
static constexpr int32_t  encryptedKey{4};

 int32_t __declspec(property(get=__get_tagNo, put=__set_tagNo))  tagNo;

constexpr void __set_tagNo(int32_t value) ;

constexpr int32_t __get_tagNo() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit PopoPrivKey(Org::BouncyCastle::Asn1::Asn1TaggedObject obj) ;

/// @brief Method .ctor addr 0xdf9890 size 0x17c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject obj) ;

/// @brief Method GetInstance addr 0xdf9b1c size 0x80 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::PopoPrivKey GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "msg", ty: "Org::BouncyCastle::Asn1::Crmf::SubsequentMessage", modifiers: "", def_value: None }]
explicit PopoPrivKey(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg) ;

/// @brief Method .ctor addr 0xdf9b9c size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg) ;

/// @brief Method get_Type addr 0xdf9bcc size 0x8 virtual true final false
 int32_t get_Type() ;

/// @brief Method get_Value addr 0xdf9bd4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method ToAsn1Object addr 0xdf9bdc size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::PopoPrivKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::PopoPrivKey, "Org.BouncyCastle.Asn1.Crmf", "PopoPrivKey");
