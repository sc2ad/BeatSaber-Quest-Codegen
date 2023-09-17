#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
class RollingAverage;
}
namespace GlobalNamespace {
class ICPUMonitor;
}
namespace System::Diagnostics {
class Process;
}
// Forward declare root types
namespace GlobalNamespace {
class CPUMonitor;
}
// Type: ::CPUMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12651))
// CS Name: CPUMonitor
class CORDL_TYPE CPUMonitor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ICPUMonitor
constexpr operator  ::GlobalNamespace::ICPUMonitor() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr operator  ::GlobalNamespace::IPollable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CPUMonitor() = default;

// Ctor Parameters [CppParam { name: "", ty: "CPUMonitor", modifiers: " const&", def_value: None }]
constexpr CPUMonitor(CPUMonitor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CPUMonitor", modifiers: "&&", def_value: None }]
constexpr CPUMonitor(CPUMonitor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CPUMonitor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CPUMonitor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CPUMonitor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CPUMonitor& operator=(CPUMonitor&& o) noexcept = default;
  constexpr CPUMonitor& operator=(CPUMonitor const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::RollingAverage __declspec(property(get=__get__utilization, put=__set__utilization))  _utilization;

constexpr void __set__utilization(::GlobalNamespace::RollingAverage value) ;

constexpr ::GlobalNamespace::RollingAverage __get__utilization() const;

 ::System::Diagnostics::Process __declspec(property(get=__get__currentProcess, put=__set__currentProcess))  _currentProcess;

constexpr void __set__currentProcess(::System::Diagnostics::Process value) ;

constexpr ::System::Diagnostics::Process __get__currentProcess() const;

 int32_t __declspec(property(get=__get__processorCount, put=__set__processorCount))  _processorCount;

constexpr void __set__processorCount(int32_t value) ;

constexpr int32_t __get__processorCount() const;

 int64_t __declspec(property(get=__get__lastSampleTime, put=__set__lastSampleTime))  _lastSampleTime;

constexpr void __set__lastSampleTime(int64_t value) ;

constexpr int64_t __get__lastSampleTime() const;

 int64_t __declspec(property(get=__get__lastSampleValue, put=__set__lastSampleValue))  _lastSampleValue;

constexpr void __set__lastSampleValue(int64_t value) ;

constexpr int64_t __get__lastSampleValue() const;


// Properties

 float_t __declspec(property(get=get_utilization))  utilization;


// Methods

/// @brief Method PollUpdate addr 0xda541c size 0xf8 virtual true final true
 void PollUpdate() ;

/// @brief Method get_utilization addr 0xda5514 size 0x28 virtual true final true
 float_t get_utilization() ;

// Ctor Parameters []
explicit CPUMonitor() ;

/// @brief Method .ctor addr 0xda553c size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CPUMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CPUMonitor, "", "CPUMonitor");
