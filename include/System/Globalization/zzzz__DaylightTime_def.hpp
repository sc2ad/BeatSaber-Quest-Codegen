#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
class DaylightTime;
}
// Type: System.Globalization::DaylightTime
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3656))
// CS Name: System.Globalization.DaylightTime
class CORDL_TYPE DaylightTime : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DaylightTime() = default;

// Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: " const&", def_value: None }]
constexpr DaylightTime(DaylightTime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DaylightTime", modifiers: "&&", def_value: None }]
constexpr DaylightTime(DaylightTime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DaylightTime(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DaylightTime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DaylightTime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DaylightTime& operator=(DaylightTime&& o) noexcept = default;
  constexpr DaylightTime& operator=(DaylightTime const& o) noexcept = default;
                


// Fields

 System::DateTime __declspec(property(get=__get__start, put=__set__start))  _start;

constexpr void __set__start(System::DateTime value) ;

constexpr System::DateTime __get__start() const;

 System::DateTime __declspec(property(get=__get__end, put=__set__end))  _end;

constexpr void __set__end(System::DateTime value) ;

constexpr System::DateTime __get__end() const;

 System::TimeSpan __declspec(property(get=__get__delta, put=__set__delta))  _delta;

constexpr void __set__delta(System::TimeSpan value) ;

constexpr System::TimeSpan __get__delta() const;


// Properties

 System::DateTime __declspec(property(get=get_Start))  Start;

 System::DateTime __declspec(property(get=get_End))  End;

 System::TimeSpan __declspec(property(get=get_Delta))  Delta;


// Methods

static System::Globalization::DaylightTime New_ctor(System::DateTime start, System::DateTime end, System::TimeSpan delta) ;

/// @brief Method .ctor addr 0x23e51a4 size 0x3c virtual false final false
 void _ctor(System::DateTime start, System::DateTime end, System::TimeSpan delta) ;

/// @brief Method get_Start addr 0x23e51e0 size 0x8 virtual false final false
 System::DateTime get_Start() ;

/// @brief Method get_End addr 0x23e51e8 size 0x8 virtual false final false
 System::DateTime get_End() ;

/// @brief Method get_Delta addr 0x23e51f0 size 0x8 virtual false final false
 System::TimeSpan get_Delta() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::DaylightTime);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DaylightTime, "System.Globalization", "DaylightTime");
