#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Type: Org.BouncyCastle.Asn1::DerGeneralizedTime
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(506))
// CS Name: Org.BouncyCastle.Asn1.DerGeneralizedTime
class CORDL_TYPE DerGeneralizedTime : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerGeneralizedTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralizedTime", modifiers: " const&", def_value: None }]
constexpr DerGeneralizedTime(DerGeneralizedTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralizedTime", modifiers: "&&", def_value: None }]
constexpr DerGeneralizedTime(DerGeneralizedTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerGeneralizedTime(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerGeneralizedTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerGeneralizedTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerGeneralizedTime& operator=(DerGeneralizedTime&& o) noexcept = default;
  constexpr DerGeneralizedTime& operator=(DerGeneralizedTime const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(::StringW value) ;

constexpr ::StringW __get_time() const;


// Properties

 ::StringW __declspec(property(get=get_TimeString))  TimeString;

 bool __declspec(property(get=get_HasFractionalSeconds))  HasFractionalSeconds;


// Methods

/// @brief Method GetInstance addr 0x1136568 size 0x100 virtual false final false
static Org::BouncyCastle::Asn1::DerGeneralizedTime GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x1136668 size 0x140 virtual false final false
static Org::BouncyCastle::Asn1::DerGeneralizedTime GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "time", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerGeneralizedTime(::StringW time) ;

/// @brief Method .ctor addr 0x11367a8 size 0x118 virtual false final false
 void _ctor(::StringW time) ;

// Ctor Parameters [CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit DerGeneralizedTime(System::DateTime time) ;

/// @brief Method .ctor addr 0x1136b40 size 0x6c virtual false final false
 void _ctor(System::DateTime time) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerGeneralizedTime(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x112c090 size 0x34 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method get_TimeString addr 0x1136bac size 0x8 virtual false final false
 ::StringW get_TimeString() ;

/// @brief Method GetTime addr 0x1136bb4 size 0x31c virtual false final false
 ::StringW GetTime() ;

/// @brief Method CalculateGmtOffset addr 0x1136ed0 size 0x280 virtual false final false
 ::StringW CalculateGmtOffset() ;

/// @brief Method Convert addr 0x1137150 size 0x94 virtual false final false
static ::StringW Convert(int32_t time) ;

/// @brief Method ToDateTime addr 0x11368c0 size 0x280 virtual false final false
 System::DateTime ToDateTime() ;

/// @brief Method FString addr 0x1137210 size 0x84 virtual false final false
 ::StringW FString(int32_t count) ;

/// @brief Method ParseDateString addr 0x1137294 size 0x24c virtual false final false
 System::DateTime ParseDateString(::StringW s, ::StringW format, bool makeUniversal) ;

/// @brief Method get_HasFractionalSeconds addr 0x11371e4 size 0x2c virtual false final false
 bool get_HasFractionalSeconds() ;

/// @brief Method GetOctets addr 0x11374e0 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x11374ec size 0x30 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x113751c size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x11375bc size 0x1c virtual true final false
 int32_t Asn1GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerGeneralizedTime);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGeneralizedTime, "Org.BouncyCastle.Asn1", "DerGeneralizedTime");
