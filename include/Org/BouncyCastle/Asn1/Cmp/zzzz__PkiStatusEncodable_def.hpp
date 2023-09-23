#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusEncodable;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatusEncodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(42))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiStatusEncodable
class CORDL_TYPE PkiStatusEncodable : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkiStatusEncodable() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiStatusEncodable", modifiers: " const&", def_value: None }]
constexpr PkiStatusEncodable(PkiStatusEncodable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiStatusEncodable", modifiers: "&&", def_value: None }]
constexpr PkiStatusEncodable(PkiStatusEncodable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiStatusEncodable(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiStatusEncodable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiStatusEncodable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiStatusEncodable& operator=(PkiStatusEncodable&& o) noexcept = default;
  constexpr PkiStatusEncodable& operator=(PkiStatusEncodable const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_granted, put=__set_granted))  granted;

static void __set_granted(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_granted() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_grantedWithMods, put=__set_grantedWithMods))  grantedWithMods;

static void __set_grantedWithMods(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_grantedWithMods() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_rejection, put=__set_rejection))  rejection;

static void __set_rejection(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_rejection() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_waiting, put=__set_waiting))  waiting;

static void __set_waiting(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_waiting() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_revocationWarning, put=__set_revocationWarning))  revocationWarning;

static void __set_revocationWarning(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_revocationWarning() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_revocationNotification, put=__set_revocationNotification))  revocationNotification;

static void __set_revocationNotification(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_revocationNotification() ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __declspec(property(get=__get_keyUpdateWaiting, put=__set_keyUpdateWaiting))  keyUpdateWaiting;

static void __set_keyUpdateWaiting(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable value) ;

static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable __get_keyUpdateWaiting() ;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_status() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "status", ty: "Org::BouncyCastle::Asn1::Cmp::PkiStatus", modifiers: "", def_value: None }]
explicit PkiStatusEncodable(Org::BouncyCastle::Asn1::Cmp::PkiStatus status) ;

/// @brief Method .ctor addr 0xde00f0 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiStatus status) ;

// Ctor Parameters [CppParam { name: "status", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit PkiStatusEncodable(Org::BouncyCastle::Asn1::DerInteger status) ;

/// @brief Method .ctor addr 0xde016c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger status) ;

/// @brief Method GetInstance addr 0xde0194 size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Value addr 0xde0320 size 0x1c virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Value() ;

/// @brief Method ToAsn1Object addr 0xde033c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable, "Org.BouncyCastle.Asn1.Cmp", "PkiStatusEncodable");
