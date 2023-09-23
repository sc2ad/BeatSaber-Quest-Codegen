#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::CertStatus
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(208))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.CertStatus
class CORDL_TYPE CertStatus : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: " const&", def_value: None }]
constexpr CertStatus(CertStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
constexpr CertStatus(CertStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertStatus(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertStatus& operator=(CertStatus&& o) noexcept = default;
  constexpr CertStatus& operator=(CertStatus const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_tagNo, put=__set_tagNo))  tagNo;

constexpr void __set_tagNo(int32_t value) ;

constexpr int32_t __get_tagNo() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_value() const;


// Properties

 int32_t __declspec(property(get=get_TagNo))  TagNo;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Status))  Status;


// Methods

// Ctor Parameters []
explicit CertStatus() ;

/// @brief Method .ctor addr 0xef1d88 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Ocsp::RevokedInfo", modifiers: "", def_value: None }]
explicit CertStatus(Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info) ;

/// @brief Method .ctor addr 0xef1df8 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::RevokedInfo info) ;

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit CertStatus(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method .ctor addr 0xef1e28 size 0x30 virtual false final false
 void _ctor(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable value) ;

// Ctor Parameters [CppParam { name: "choice", ty: "Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
explicit CertStatus(Org::BouncyCastle::Asn1::Asn1TaggedObject choice) ;

/// @brief Method .ctor addr 0xef1e58 size 0x138 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject choice) ;

/// @brief Method GetInstance addr 0xef1fa8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::CertStatus GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_TagNo addr 0xef2130 size 0x8 virtual false final false
 int32_t get_TagNo() ;

/// @brief Method get_Status addr 0xef2138 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Status() ;

/// @brief Method ToAsn1Object addr 0xef2140 size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::CertStatus, "Org.BouncyCastle.Asn1.Ocsp", "CertStatus");
