#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__AppMetrics;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__PerfMetrics;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Stats;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__AdaptivePerformance;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__AppMetrics;
}
namespace Unity::XR::Oculus {
class Unity__XR__Oculus__Stats__PerfMetrics;
}
// Type: ::AdaptivePerformance
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15224))
// CS Name: Unity.XR.Oculus.Stats::AdaptivePerformance
class CORDL_TYPE Unity__XR__Oculus__Stats__AdaptivePerformance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Unity__XR__Oculus__Stats__AdaptivePerformance() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__AdaptivePerformance", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__AdaptivePerformance(Unity__XR__Oculus__Stats__AdaptivePerformance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__AdaptivePerformance", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__AdaptivePerformance(Unity__XR__Oculus__Stats__AdaptivePerformance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__Stats__AdaptivePerformance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__Stats__AdaptivePerformance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__AdaptivePerformance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__AdaptivePerformance& operator=(Unity__XR__Oculus__Stats__AdaptivePerformance&& o) noexcept = default;
  constexpr Unity__XR__Oculus__Stats__AdaptivePerformance& operator=(Unity__XR__Oculus__Stats__AdaptivePerformance const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_GPUAppTime))  GPUAppTime;

static float_t __declspec(property(get=get_GPUCompositorTime))  GPUCompositorTime;

static float_t __declspec(property(get=get_MotionToPhoton))  MotionToPhoton;

static float_t __declspec(property(get=get_RefreshRate))  RefreshRate;

static float_t __declspec(property(get=get_BatteryTemp))  BatteryTemp;

static float_t __declspec(property(get=get_BatteryLevel))  BatteryLevel;

static bool __declspec(property(get=get_PowerSavingMode))  PowerSavingMode;

static float_t __declspec(property(get=get_AdaptivePerformanceScale))  AdaptivePerformanceScale;

static int32_t __declspec(property(get=get_CPULevel))  CPULevel;

static int32_t __declspec(property(get=get_GPULevel))  GPULevel;


// Methods

/// @brief Method get_GPUAppTime addr 0x2ae072c size 0xb0 virtual false final false
static float_t get_GPUAppTime() ;

/// @brief Method get_GPUCompositorTime addr 0x2ae07dc size 0xb0 virtual false final false
static float_t get_GPUCompositorTime() ;

/// @brief Method get_MotionToPhoton addr 0x2ae088c size 0xb0 virtual false final false
static float_t get_MotionToPhoton() ;

/// @brief Method get_RefreshRate addr 0x2ae093c size 0xb0 virtual false final false
static float_t get_RefreshRate() ;

/// @brief Method get_BatteryTemp addr 0x2ae09ec size 0x7c virtual false final false
static float_t get_BatteryTemp() ;

/// @brief Method get_BatteryLevel addr 0x2ae0a68 size 0x7c virtual false final false
static float_t get_BatteryLevel() ;

/// @brief Method get_PowerSavingMode addr 0x2ae0ae4 size 0x84 virtual false final false
static bool get_PowerSavingMode() ;

/// @brief Method get_AdaptivePerformanceScale addr 0x2ae0b68 size 0x7c virtual false final false
static float_t get_AdaptivePerformanceScale() ;

/// @brief Method get_CPULevel addr 0x2ae0be4 size 0x94 virtual false final false
static int32_t get_CPULevel() ;

/// @brief Method get_GPULevel addr 0x2ae0c78 size 0x94 virtual false final false
static int32_t get_GPULevel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::PerfMetrics
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15225))
// CS Name: Unity.XR.Oculus.Stats::PerfMetrics
class CORDL_TYPE Unity__XR__Oculus__Stats__PerfMetrics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Unity__XR__Oculus__Stats__PerfMetrics() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__PerfMetrics", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__PerfMetrics(Unity__XR__Oculus__Stats__PerfMetrics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__PerfMetrics", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__PerfMetrics(Unity__XR__Oculus__Stats__PerfMetrics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__Stats__PerfMetrics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__Stats__PerfMetrics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__PerfMetrics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__PerfMetrics& operator=(Unity__XR__Oculus__Stats__PerfMetrics&& o) noexcept = default;
  constexpr Unity__XR__Oculus__Stats__PerfMetrics& operator=(Unity__XR__Oculus__Stats__PerfMetrics const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_AppCPUTime))  AppCPUTime;

static float_t __declspec(property(get=get_AppGPUTime))  AppGPUTime;

static float_t __declspec(property(get=get_CompositorCPUTime))  CompositorCPUTime;

static float_t __declspec(property(get=get_CompositorGPUTime))  CompositorGPUTime;

static float_t __declspec(property(get=get_GPUUtilization))  GPUUtilization;

static float_t __declspec(property(get=get_CPUUtilizationAverage))  CPUUtilizationAverage;

static float_t __declspec(property(get=get_CPUUtilizationWorst))  CPUUtilizationWorst;

static float_t __declspec(property(get=get_CPUClockFrequency))  CPUClockFrequency;

static float_t __declspec(property(get=get_GPUClockFrequency))  GPUClockFrequency;


// Methods

/// @brief Method get_AppCPUTime addr 0x2ae0d0c size 0x7c virtual false final false
static float_t get_AppCPUTime() ;

/// @brief Method get_AppGPUTime addr 0x2ae0d88 size 0x7c virtual false final false
static float_t get_AppGPUTime() ;

/// @brief Method get_CompositorCPUTime addr 0x2ae0e04 size 0x7c virtual false final false
static float_t get_CompositorCPUTime() ;

/// @brief Method get_CompositorGPUTime addr 0x2ae0e80 size 0x7c virtual false final false
static float_t get_CompositorGPUTime() ;

/// @brief Method get_GPUUtilization addr 0x2ae0efc size 0x7c virtual false final false
static float_t get_GPUUtilization() ;

/// @brief Method get_CPUUtilizationAverage addr 0x2ae0f78 size 0x7c virtual false final false
static float_t get_CPUUtilizationAverage() ;

/// @brief Method get_CPUUtilizationWorst addr 0x2ae0ff4 size 0x7c virtual false final false
static float_t get_CPUUtilizationWorst() ;

/// @brief Method get_CPUClockFrequency addr 0x2ae1070 size 0x7c virtual false final false
static float_t get_CPUClockFrequency() ;

/// @brief Method get_GPUClockFrequency addr 0x2ae10ec size 0x7c virtual false final false
static float_t get_GPUClockFrequency() ;

/// @brief Method EnablePerfMetrics addr 0x2ae1168 size 0x8 virtual false final false
static void EnablePerfMetrics(bool enable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: ::AppMetrics
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15226))
// CS Name: Unity.XR.Oculus.Stats::AppMetrics
class CORDL_TYPE Unity__XR__Oculus__Stats__AppMetrics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Unity__XR__Oculus__Stats__AppMetrics() = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__AppMetrics", modifiers: " const&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__AppMetrics(Unity__XR__Oculus__Stats__AppMetrics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Unity__XR__Oculus__Stats__AppMetrics", modifiers: "&&", def_value: None }]
constexpr Unity__XR__Oculus__Stats__AppMetrics(Unity__XR__Oculus__Stats__AppMetrics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Unity__XR__Oculus__Stats__AppMetrics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Unity__XR__Oculus__Stats__AppMetrics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__AppMetrics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Unity__XR__Oculus__Stats__AppMetrics& operator=(Unity__XR__Oculus__Stats__AppMetrics&& o) noexcept = default;
  constexpr Unity__XR__Oculus__Stats__AppMetrics& operator=(Unity__XR__Oculus__Stats__AppMetrics const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_AppQueueAheadTime))  AppQueueAheadTime;

static float_t __declspec(property(get=get_AppCPUElapsedTime))  AppCPUElapsedTime;

static float_t __declspec(property(get=get_CompositorDroppedFrames))  CompositorDroppedFrames;

static float_t __declspec(property(get=get_CompositorLatency))  CompositorLatency;

static float_t __declspec(property(get=get_CompositorCPUTime))  CompositorCPUTime;

static float_t __declspec(property(get=get_CPUStartToGPUEnd))  CPUStartToGPUEnd;

static float_t __declspec(property(get=get_GPUEndToVsync))  GPUEndToVsync;


// Methods

/// @brief Method get_AppQueueAheadTime addr 0x2ae1178 size 0x7c virtual false final false
static float_t get_AppQueueAheadTime() ;

/// @brief Method get_AppCPUElapsedTime addr 0x2ae11f4 size 0x7c virtual false final false
static float_t get_AppCPUElapsedTime() ;

/// @brief Method get_CompositorDroppedFrames addr 0x2ae1270 size 0x7c virtual false final false
static float_t get_CompositorDroppedFrames() ;

/// @brief Method get_CompositorLatency addr 0x2ae12ec size 0x7c virtual false final false
static float_t get_CompositorLatency() ;

/// @brief Method get_CompositorCPUTime addr 0x2ae1368 size 0x7c virtual false final false
static float_t get_CompositorCPUTime() ;

/// @brief Method get_CPUStartToGPUEnd addr 0x2ae13e4 size 0x7c virtual false final false
static float_t get_CPUStartToGPUEnd() ;

/// @brief Method get_GPUEndToVsync addr 0x2ae1460 size 0x7c virtual false final false
static float_t get_GPUEndToVsync() ;

/// @brief Method EnableAppMetrics addr 0x2ae14dc size 0x8 virtual false final false
static void EnableAppMetrics(bool enable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::Stats
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15227))
// CS Name: Unity.XR.Oculus.Stats
class CORDL_TYPE Stats : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AppMetrics = Unity::XR::Oculus::Unity__XR__Oculus__Stats__AppMetrics;

using PerfMetrics = Unity::XR::Oculus::Unity__XR__Oculus__Stats__PerfMetrics;

using AdaptivePerformance = Unity::XR::Oculus::Unity__XR__Oculus__Stats__AdaptivePerformance;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Stats() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: " const&", def_value: None }]
constexpr Stats(Stats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stats", modifiers: "&&", def_value: None }]
constexpr Stats(Stats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stats(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Stats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stats& operator=(Stats&& o) noexcept = default;
  constexpr Stats& operator=(Stats const& o) noexcept = default;
                


// Fields

static UnityEngine::IntegratedSubsystem __declspec(property(get=__get_m_Display, put=__set_m_Display))  m_Display;

static void __set_m_Display(UnityEngine::IntegratedSubsystem value) ;

static UnityEngine::IntegratedSubsystem __get_m_Display() ;

static ::StringW __declspec(property(get=__get_m_PluginVersion, put=__set_m_PluginVersion))  m_PluginVersion;

static void __set_m_PluginVersion(::StringW value) ;

static ::StringW __get_m_PluginVersion() ;


// Properties

static ::StringW __declspec(property(get=get_PluginVersion))  PluginVersion;


// Methods

/// @brief Method get_PluginVersion addr 0x2ae0228 size 0x14c virtual false final false
static ::StringW get_PluginVersion() ;

/// @brief Method GetOculusDisplaySubsystem addr 0x2ae0378 size 0x344 virtual false final false
static UnityEngine::IntegratedSubsystem GetOculusDisplaySubsystem() ;

static Unity::XR::Oculus::Stats New_ctor() ;

/// @brief Method .ctor addr 0x2ae06bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::Stats);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Stats, "Unity.XR.Oculus", "Stats");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__Stats__AdaptivePerformance);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__Stats__AdaptivePerformance, "Unity.XR.Oculus", "Stats/AdaptivePerformance");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__Stats__AppMetrics);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__Stats__AppMetrics, "Unity.XR.Oculus", "Stats/AppMetrics");
NEED_NO_BOX(Unity::XR::Oculus::Unity__XR__Oculus__Stats__PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Unity__XR__Oculus__Stats__PerfMetrics, "Unity.XR.Oculus", "Stats/PerfMetrics");
