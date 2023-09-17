#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Time;
}
// Type: Org.BouncyCastle.Asn1.Cms::Time
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(97))
// CS Name: Org.BouncyCastle.Asn1.Cms.Time
class CORDL_TYPE Time : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Time() = default;

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: " const&", def_value: None }]
constexpr Time(Time const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Time", modifiers: "&&", def_value: None }]
constexpr Time(Time&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Time(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Time& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Time& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Time& operator=(Time&& o) noexcept = default;
  constexpr Time& operator=(Time const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_time() const;


// Properties

 ::StringW __declspec(property(get=get_TimeString))  TimeString;

 ::System::DateTime __declspec(property(get=get_Date))  Date;


// Methods

/// @brief Method GetInstance addr 0xdf37b0 size 0x1c virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::Time GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters [CppParam { name: "time", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit Time(::Org::BouncyCastle::Asn1::Asn1Object time) ;

/// @brief Method .ctor addr 0xdf398c size 0x140 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Object time) ;

// Ctor Parameters [CppParam { name: "date", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit Time(::System::DateTime date) ;

/// @brief Method .ctor addr 0xdf3acc size 0x168 virtual false final false
 void _ctor(::System::DateTime date) ;

/// @brief Method GetInstance addr 0xdf37cc size 0x1c0 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::Time GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_TimeString addr 0xdf3c34 size 0xf0 virtual false final false
 ::StringW get_TimeString() ;

/// @brief Method get_Date addr 0xdf3d24 size 0x1e4 virtual false final false
 ::System::DateTime get_Date() ;

/// @brief Method ToAsn1Object addr 0xdf3f08 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::Time);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::Time, "Org.BouncyCastle.Asn1.Cms", "Time");
