#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
// Type: Org.BouncyCastle.Asn1::DerUtcTime
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(519))
// CS Name: Org.BouncyCastle.Asn1.DerUtcTime
class CORDL_TYPE DerUtcTime : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerUtcTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerUtcTime", modifiers: " const&", def_value: None }]
constexpr DerUtcTime(DerUtcTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerUtcTime", modifiers: "&&", def_value: None }]
constexpr DerUtcTime(DerUtcTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerUtcTime(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerUtcTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerUtcTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerUtcTime& operator=(DerUtcTime&& o) noexcept = default;
  constexpr DerUtcTime& operator=(DerUtcTime const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(::StringW value) ;

constexpr ::StringW __get_time() const;


// Properties

 ::StringW __declspec(property(get=get_TimeString))  TimeString;

 ::StringW __declspec(property(get=get_AdjustedTime))  AdjustedTime;

 ::StringW __declspec(property(get=get_AdjustedTimeString))  AdjustedTimeString;


// Methods

/// @brief Method GetInstance addr 0x11398d8 size 0xf0 virtual false final false
static ::Org::BouncyCastle::Asn1::DerUtcTime GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x11399c8 size 0x140 virtual false final false
static ::Org::BouncyCastle::Asn1::DerUtcTime GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "time", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerUtcTime(::StringW time) ;

/// @brief Method .ctor addr 0x1139b08 size 0x168 virtual false final false
 void _ctor(::StringW time) ;

// Ctor Parameters [CppParam { name: "time", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit DerUtcTime(::System::DateTime time) ;

/// @brief Method .ctor addr 0x1139cc0 size 0xbc virtual false final false
 void _ctor(::System::DateTime time) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerUtcTime(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x112c24c size 0x34 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method ToDateTime addr 0x1139c70 size 0x50 virtual false final false
 ::System::DateTime ToDateTime() ;

/// @brief Method ToAdjustedDateTime addr 0x113a208 size 0x50 virtual false final false
 ::System::DateTime ToAdjustedDateTime() ;

/// @brief Method ParseDateString addr 0x113a150 size 0xb8 virtual false final false
 ::System::DateTime ParseDateString(::StringW dateStr, ::StringW formatStr) ;

/// @brief Method get_TimeString addr 0x1139d7c size 0x3d4 virtual false final false
 ::StringW get_TimeString() ;

/// @brief Method get_AdjustedTime addr 0x113a2e4 size 0x4 virtual false final false
 ::StringW get_AdjustedTime() ;

/// @brief Method get_AdjustedTimeString addr 0x113a258 size 0x8c virtual false final false
 ::StringW get_AdjustedTimeString() ;

/// @brief Method GetOctets addr 0x113a2e8 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x113a2f4 size 0x30 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x113a324 size 0xa0 virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x113a3c4 size 0x1c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method ToString addr 0x113a3e0 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUtcTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUtcTime, "Org.BouncyCastle.Asn1", "DerUtcTime");
