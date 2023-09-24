#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatusInfo
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(43))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiStatusInfo
class CORDL_TYPE PkiStatusInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PkiStatusInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: " const&", def_value: None }]
constexpr PkiStatusInfo(PkiStatusInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: "&&", def_value: None }]
constexpr PkiStatusInfo(PkiStatusInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiStatusInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiStatusInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiStatusInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiStatusInfo& operator=(PkiStatusInfo&& o) noexcept = default;
  constexpr PkiStatusInfo& operator=(PkiStatusInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_status() const;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=__get_statusString, put=__set_statusString))  statusString;

constexpr void __set_statusString(Org::BouncyCastle::Asn1::Cmp::PkiFreeText value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiFreeText __get_statusString() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_failInfo, put=__set_failInfo))  failInfo;

constexpr void __set_failInfo(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_failInfo() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Status))  Status;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=get_StatusString))  StatusString;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_FailInfo))  FailInfo;


// Methods

/// @brief Method GetInstance addr 0xde046c size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0xdd8800 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde0484 size 0x178 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo New_ctor(int32_t status) ;

/// @brief Method .ctor addr 0xde05fc size 0x7c virtual false final false
 void _ctor(int32_t status) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo New_ctor(int32_t status, Org::BouncyCastle::Asn1::Cmp::PkiFreeText statusString) ;

/// @brief Method .ctor addr 0xde0678 size 0x80 virtual false final false
 void _ctor(int32_t status, Org::BouncyCastle::Asn1::Cmp::PkiFreeText statusString) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo New_ctor(int32_t status, Org::BouncyCastle::Asn1::Cmp::PkiFreeText statusString, Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo failInfo) ;

/// @brief Method .ctor addr 0xde06f8 size 0x90 virtual false final false
 void _ctor(int32_t status, Org::BouncyCastle::Asn1::Cmp::PkiFreeText statusString, Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo failInfo) ;

/// @brief Method get_Status addr 0xde0788 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Status() ;

/// @brief Method get_StatusString addr 0xde07a4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::PkiFreeText get_StatusString() ;

/// @brief Method get_FailInfo addr 0xde07ac size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_FailInfo() ;

/// @brief Method ToAsn1Object addr 0xde07b4 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, "Org.BouncyCastle.Asn1.Cmp", "PkiStatusInfo");
