#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::Globalization {
class DaylightTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
class TimeZone;
}
// Type: System::TimeZone
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2484))
// CS Name: System.TimeZone
class CORDL_TYPE TimeZone : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: " const&", def_value: None }]
constexpr TimeZone(TimeZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeZone", modifiers: "&&", def_value: None }]
constexpr TimeZone(TimeZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeZone(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeZone& operator=(TimeZone&& o) noexcept = default;
  constexpr TimeZone& operator=(TimeZone const& o) noexcept = default;
                


// Fields

static System::TimeZone __declspec(property(get=__get_currentTimeZone, put=__set_currentTimeZone))  currentTimeZone;

static void __set_currentTimeZone(System::TimeZone value) ;

static System::TimeZone __get_currentTimeZone() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

static System::TimeZone __declspec(property(get=get_CurrentTimeZone))  CurrentTimeZone;


// Methods

/// @brief Method get_InternalSyncObject addr 0x2458ae0 size 0xa0 virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

// Ctor Parameters []
explicit TimeZone() ;

/// @brief Method .ctor addr 0x2458b80 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_CurrentTimeZone addr 0x2458b88 size 0x16c virtual false final false
static System::TimeZone get_CurrentTimeZone() ;

/// @brief Method GetUtcOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TimeSpan GetUtcOffset(System::DateTime time) ;

/// @brief Method GetDaylightChanges addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Globalization::DaylightTime GetDaylightChanges(int32_t year) ;

/// @brief Method CalculateUtcOffset addr 0x2458cf4 size 0x21c virtual false final false
static System::TimeSpan CalculateUtcOffset(System::DateTime time, System::Globalization::DaylightTime daylightTimes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::TimeZone);
DEFINE_IL2CPP_ARG_TYPE(System::TimeZone, "System", "TimeZone");
