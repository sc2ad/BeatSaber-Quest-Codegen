#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
// Type: Org.BouncyCastle.Asn1.Crmf::ProofOfPossession
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(121))
// CS Name: Org.BouncyCastle.Asn1.Crmf.ProofOfPossession
class CORDL_TYPE ProofOfPossession : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProofOfPossession() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: " const&", def_value: None }]
constexpr ProofOfPossession(ProofOfPossession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossession", modifiers: "&&", def_value: None }]
constexpr ProofOfPossession(ProofOfPossession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProofOfPossession(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ProofOfPossession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProofOfPossession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProofOfPossession& operator=(ProofOfPossession&& o) noexcept = default;
  constexpr ProofOfPossession& operator=(ProofOfPossession const& o) noexcept = default;
                


// Fields

/// @brief Field TYPE_RA_VERIFIED offset 0
static constexpr int32_t  TYPE_RA_VERIFIED{0};

/// @brief Field TYPE_SIGNING_KEY offset 0
static constexpr int32_t  TYPE_SIGNING_KEY{1};

/// @brief Field TYPE_KEY_ENCIPHERMENT offset 0
static constexpr int32_t  TYPE_KEY_ENCIPHERMENT{2};

/// @brief Field TYPE_KEY_AGREEMENT offset 0
static constexpr int32_t  TYPE_KEY_AGREEMENT{3};

 int32_t __declspec(property(get=__get_tagNo, put=__set_tagNo))  tagNo;

constexpr void __set_tagNo(int32_t value) ;

constexpr int32_t __get_tagNo() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Object))  Object;


// Methods

// Ctor Parameters [CppParam { name: "tagged", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit ProofOfPossession(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xdfa588 size 0x150 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method GetInstance addr 0xdf6160 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::ProofOfPossession GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters []
explicit ProofOfPossession() ;

/// @brief Method .ctor addr 0xdfa6d8 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "Poposk", ty: "Org::BouncyCastle::Asn1::Crmf::PopoSigningKey", modifiers: "", def_value: None }]
explicit ProofOfPossession(Org::BouncyCastle::Asn1::Crmf::PopoSigningKey Poposk) ;

/// @brief Method .ctor addr 0xdfa748 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::PopoSigningKey Poposk) ;

// Ctor Parameters [CppParam { name: "type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "privkey", ty: "Org::BouncyCastle::Asn1::Crmf::PopoPrivKey", modifiers: "", def_value: None }]
explicit ProofOfPossession(int32_t type, Org::BouncyCastle::Asn1::Crmf::PopoPrivKey privkey) ;

/// @brief Method .ctor addr 0xdfa778 size 0x30 virtual false final false
 void _ctor(int32_t type, Org::BouncyCastle::Asn1::Crmf::PopoPrivKey privkey) ;

/// @brief Method get_Type addr 0xdfa7a8 size 0x8 virtual true final false
 int32_t get_Type() ;

/// @brief Method get_Object addr 0xdfa7b0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Object() ;

/// @brief Method ToAsn1Object addr 0xdfa7b8 size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::ProofOfPossession);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::ProofOfPossession, "Org.BouncyCastle.Asn1.Crmf", "ProofOfPossession");
