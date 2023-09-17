#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Type: Org.BouncyCastle.Utilities.Date::DateTimeObject
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1791))
// CS Name: Org.BouncyCastle.Utilities.Date.DateTimeObject
class CORDL_TYPE DateTimeObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DateTimeObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: " const&", def_value: None }]
constexpr DateTimeObject(DateTimeObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: "&&", def_value: None }]
constexpr DateTimeObject(DateTimeObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeObject& operator=(DateTimeObject&& o) noexcept = default;
  constexpr DateTimeObject& operator=(DateTimeObject const& o) noexcept = default;
                


// Fields

 ::System::DateTime __declspec(property(get=__get_dt, put=__set_dt))  dt;

constexpr void __set_dt(::System::DateTime value) ;

constexpr ::System::DateTime __get_dt() const;


// Properties

 ::System::DateTime __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit DateTimeObject(::System::DateTime dt) ;

/// @brief Method .ctor addr 0x10c534c size 0x28 virtual false final false
 void _ctor(::System::DateTime dt) ;

/// @brief Method get_Value addr 0x10cf568 size 0x8 virtual false final false
 ::System::DateTime get_Value() ;

/// @brief Method ToString addr 0x10cf570 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Date
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeObject, "Org.BouncyCastle.Utilities.Date", "DateTimeObject");
