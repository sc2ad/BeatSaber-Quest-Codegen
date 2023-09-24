#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TimeZone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class DaylightTime;
}
// Forward declare root types
namespace System {
class CurrentSystemTimeZone;
}
// Type: System::CurrentSystemTimeZone
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2366))
// CS Name: System.CurrentSystemTimeZone
class CORDL_TYPE CurrentSystemTimeZone : public System::TimeZone {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CurrentSystemTimeZone() = default;

// Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: " const&", def_value: None }]
constexpr CurrentSystemTimeZone(CurrentSystemTimeZone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CurrentSystemTimeZone", modifiers: "&&", def_value: None }]
constexpr CurrentSystemTimeZone(CurrentSystemTimeZone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CurrentSystemTimeZone(void* ptr) noexcept : System::TimeZone(ptr) {
}


  constexpr CurrentSystemTimeZone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CurrentSystemTimeZone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CurrentSystemTimeZone& operator=(CurrentSystemTimeZone&& o) noexcept = default;
  constexpr CurrentSystemTimeZone& operator=(CurrentSystemTimeZone const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_m_ticksOffset, put=__set_m_ticksOffset))  m_ticksOffset;

constexpr void __set_m_ticksOffset(int64_t value) ;

constexpr int64_t __get_m_ticksOffset() const;

 ::StringW __declspec(property(get=__get_m_standardName, put=__set_m_standardName))  m_standardName;

constexpr void __set_m_standardName(::StringW value) ;

constexpr ::StringW __get_m_standardName() const;

 ::StringW __declspec(property(get=__get_m_daylightName, put=__set_m_daylightName))  m_daylightName;

constexpr void __set_m_daylightName(::StringW value) ;

constexpr ::StringW __get_m_daylightName() const;

 System::Collections::Hashtable __declspec(property(get=__get_m_CachedDaylightChanges, put=__set_m_CachedDaylightChanges))  m_CachedDaylightChanges;

constexpr void __set_m_CachedDaylightChanges(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_m_CachedDaylightChanges() const;


// Methods

static System::CurrentSystemTimeZone New_ctor() ;

/// @brief Method .ctor addr 0x241fac4 size 0xc4 virtual false final false
 void _ctor() ;

/// @brief Method GetDaylightChanges addr 0x241fb88 size 0xd0 virtual true final false
 System::Globalization::DaylightTime GetDaylightChanges(int32_t year) ;

/// @brief Method CreateDaylightChanges addr 0x241fe44 size 0x284 virtual false final false
static System::Globalization::DaylightTime CreateDaylightChanges(int32_t year) ;

/// @brief Method GetUtcOffset addr 0x24200d0 size 0xb4 virtual true final false
 System::TimeSpan GetUtcOffset(System::DateTime time) ;

/// @brief Method GetTimeZoneData addr 0x24201ac size 0x4 virtual false final false
static bool GetTimeZoneData(int32_t year, ByRef<::ArrayW<int64_t>> data, ByRef<::ArrayW<::StringW>> names, ByRef<bool> daylight_inverted) ;

/// @brief Method GetCachedDaylightChanges addr 0x241fc58 size 0x1ec virtual false final false
 System::Globalization::DaylightTime GetCachedDaylightChanges(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::CurrentSystemTimeZone);
DEFINE_IL2CPP_ARG_TYPE(System::CurrentSystemTimeZone, "System", "CurrentSystemTimeZone");
