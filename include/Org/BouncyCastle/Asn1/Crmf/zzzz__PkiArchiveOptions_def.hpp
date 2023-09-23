#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PkiArchiveOptions
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(115))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PkiArchiveOptions
class CORDL_TYPE PkiArchiveOptions : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkiArchiveOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: " const&", def_value: None }]
constexpr PkiArchiveOptions(PkiArchiveOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: "&&", def_value: None }]
constexpr PkiArchiveOptions(PkiArchiveOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiArchiveOptions(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiArchiveOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiArchiveOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiArchiveOptions& operator=(PkiArchiveOptions&& o) noexcept = default;
  constexpr PkiArchiveOptions& operator=(PkiArchiveOptions const& o) noexcept = default;
                


// Fields

/// @brief Field encryptedPrivKey offset 0
static constexpr int32_t  encryptedPrivKey{0};

/// @brief Field keyGenParameters offset 0
static constexpr int32_t  keyGenParameters{1};

/// @brief Field archiveRemGenPrivKey offset 0
static constexpr int32_t  archiveRemGenPrivKey{2};

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_value() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method GetInstance addr 0xdf8958 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tagged", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit PkiArchiveOptions(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xdf8ae0 size 0x158 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

// Ctor Parameters [CppParam { name: "encKey", ty: "Org::BouncyCastle::Asn1::Crmf::EncryptedKey", modifiers: "", def_value: None }]
explicit PkiArchiveOptions(Org::BouncyCastle::Asn1::Crmf::EncryptedKey encKey) ;

/// @brief Method .ctor addr 0xdf8c38 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::EncryptedKey encKey) ;

// Ctor Parameters [CppParam { name: "keyGenParameters", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit PkiArchiveOptions(Org::BouncyCastle::Asn1::Asn1OctetString keyGenParameters) ;

/// @brief Method .ctor addr 0xdf8c60 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString keyGenParameters) ;

// Ctor Parameters [CppParam { name: "archiveRemGenPrivKey", ty: "bool", modifiers: "", def_value: None }]
explicit PkiArchiveOptions(bool archiveRemGenPrivKey) ;

/// @brief Method .ctor addr 0xdf8c88 size 0x78 virtual false final false
 void _ctor(bool archiveRemGenPrivKey) ;

/// @brief Method get_Type addr 0xdf8d00 size 0xc0 virtual true final false
 int32_t get_Type() ;

/// @brief Method get_Value addr 0xdf8dc0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method ToAsn1Object addr 0xdf8dc8 size 0x120 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions, "Org.BouncyCastle.Asn1.Crmf", "PkiArchiveOptions");
