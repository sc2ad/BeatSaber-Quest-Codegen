#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Diagnostics {
class Stopwatch;
}
// Type: System.Diagnostics::Stopwatch
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7812))
// CS Name: System.Diagnostics.Stopwatch
class CORDL_TYPE Stopwatch : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Stopwatch() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: " const&", def_value: None }]
constexpr Stopwatch(Stopwatch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stopwatch", modifiers: "&&", def_value: None }]
constexpr Stopwatch(Stopwatch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stopwatch(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stopwatch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stopwatch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stopwatch& operator=(Stopwatch&& o) noexcept = default;
  constexpr Stopwatch& operator=(Stopwatch const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_Frequency, put=__set_Frequency))  Frequency;

static void __set_Frequency(int64_t value) ;

static int64_t __get_Frequency() ;

static bool __declspec(property(get=__get_IsHighResolution, put=__set_IsHighResolution))  IsHighResolution;

static void __set_IsHighResolution(bool value) ;

static bool __get_IsHighResolution() ;

 int64_t __declspec(property(get=__get_elapsed, put=__set_elapsed))  elapsed;

constexpr void __set_elapsed(int64_t value) ;

constexpr int64_t __get_elapsed() const;

 int64_t __declspec(property(get=__get_started, put=__set_started))  started;

constexpr void __set_started(int64_t value) ;

constexpr int64_t __get_started() const;

 bool __declspec(property(get=__get_is_running, put=__set_is_running))  is_running;

constexpr void __set_is_running(bool value) ;

constexpr bool __get_is_running() const;


// Properties

 System::TimeSpan __declspec(property(get=get_Elapsed))  Elapsed;

 int64_t __declspec(property(get=get_ElapsedMilliseconds))  ElapsedMilliseconds;

 int64_t __declspec(property(get=get_ElapsedTicks))  ElapsedTicks;

 bool __declspec(property(get=get_IsRunning))  IsRunning;


// Methods

/// @brief Method GetTimestamp addr 0x27da9cc size 0x4 virtual false final false
static int64_t GetTimestamp() ;

/// @brief Method StartNew addr 0x27e1770 size 0x64 virtual false final false
static System::Diagnostics::Stopwatch StartNew() ;

// Ctor Parameters []
explicit Stopwatch() ;

/// @brief Method .ctor addr 0x27e17d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Elapsed addr 0x27e1844 size 0xf8 virtual false final false
 System::TimeSpan get_Elapsed() ;

/// @brief Method get_ElapsedMilliseconds addr 0x27e19ac size 0x11c virtual false final false
 int64_t get_ElapsedMilliseconds() ;

/// @brief Method get_ElapsedTicks addr 0x27e193c size 0x70 virtual false final false
 int64_t get_ElapsedTicks() ;

/// @brief Method get_IsRunning addr 0x27e1ac8 size 0x8 virtual false final false
 bool get_IsRunning() ;

/// @brief Method Reset addr 0x27e1ad0 size 0xc virtual false final false
 void Reset() ;

/// @brief Method Start addr 0x27e17dc size 0x68 virtual false final false
 void Start() ;

/// @brief Method Stop addr 0x27e1adc size 0x78 virtual false final false
 void Stop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::Stopwatch);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Stopwatch, "System.Diagnostics", "Stopwatch");
