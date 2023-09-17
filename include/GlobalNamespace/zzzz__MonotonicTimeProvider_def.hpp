#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Diagnostics {
class Stopwatch;
}
// Forward declare root types
namespace GlobalNamespace {
class MonotonicTimeProvider;
}
// Type: ::MonotonicTimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12816))
// CS Name: MonotonicTimeProvider
class CORDL_TYPE MonotonicTimeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::BGNet::Core::ITimeProvider
constexpr operator  ::BGNet::Core::ITimeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MonotonicTimeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonotonicTimeProvider", modifiers: " const&", def_value: None }]
constexpr MonotonicTimeProvider(MonotonicTimeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonotonicTimeProvider", modifiers: "&&", def_value: None }]
constexpr MonotonicTimeProvider(MonotonicTimeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonotonicTimeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonotonicTimeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonotonicTimeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonotonicTimeProvider& operator=(MonotonicTimeProvider&& o) noexcept = default;
  constexpr MonotonicTimeProvider& operator=(MonotonicTimeProvider const& o) noexcept = default;
                


// Fields

 double_t __declspec(property(get=__get__timeSpanTicksPerStopwatchTick, put=__set__timeSpanTicksPerStopwatchTick))  _timeSpanTicksPerStopwatchTick;

constexpr void __set__timeSpanTicksPerStopwatchTick(double_t value) ;

constexpr double_t __get__timeSpanTicksPerStopwatchTick() const;

 int64_t __declspec(property(get=__get__startTicks, put=__set__startTicks))  _startTicks;

constexpr void __set__startTicks(int64_t value) ;

constexpr int64_t __get__startTicks() const;

 ::System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch, put=__set__stopwatch))  _stopwatch;

constexpr void __set__stopwatch(::System::Diagnostics::Stopwatch value) ;

constexpr ::System::Diagnostics::Stopwatch __get__stopwatch() const;

static ::GlobalNamespace::MonotonicTimeProvider __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(::GlobalNamespace::MonotonicTimeProvider value) ;

static ::GlobalNamespace::MonotonicTimeProvider __get_instance() ;


// Methods

// Ctor Parameters []
explicit MonotonicTimeProvider() ;

/// @brief Method .ctor addr 0xdbc7d0 size 0xe4 virtual false final false
 void _ctor() ;

/// @brief Method GetTimeMs addr 0xdbc968 size 0x2c virtual true final true
 int64_t GetTimeMs() ;

/// @brief Method GetTicks addr 0xdbc994 size 0x58 virtual true final true
 int64_t GetTicks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MonotonicTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonotonicTimeProvider, "", "MonotonicTimeProvider");
