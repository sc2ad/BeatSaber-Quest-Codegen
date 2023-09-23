#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__OVRNetwork__OVRNetworkTcpServer;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics;
}
namespace GlobalNamespace {
class OVRSystemPerfMetrics;
}
// Type: ::PerfMetrics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8971))
// CS Name: OVRSystemPerfMetrics::PerfMetrics
class CORDL_TYPE GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics(GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics(GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics& operator=(GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics& operator=(GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_frameCount, put=__set_frameCount))  frameCount;

constexpr void __set_frameCount(int32_t value) ;

constexpr int32_t __get_frameCount() const;

 float_t __declspec(property(get=__get_frameTime, put=__set_frameTime))  frameTime;

constexpr void __set_frameTime(float_t value) ;

constexpr float_t __get_frameTime() const;

 float_t __declspec(property(get=__get_deltaFrameTime, put=__set_deltaFrameTime))  deltaFrameTime;

constexpr void __set_deltaFrameTime(float_t value) ;

constexpr float_t __get_deltaFrameTime() const;

 bool __declspec(property(get=__get_appCpuTime_IsValid, put=__set_appCpuTime_IsValid))  appCpuTime_IsValid;

constexpr void __set_appCpuTime_IsValid(bool value) ;

constexpr bool __get_appCpuTime_IsValid() const;

 float_t __declspec(property(get=__get_appCpuTime, put=__set_appCpuTime))  appCpuTime;

constexpr void __set_appCpuTime(float_t value) ;

constexpr float_t __get_appCpuTime() const;

 bool __declspec(property(get=__get_appGpuTime_IsValid, put=__set_appGpuTime_IsValid))  appGpuTime_IsValid;

constexpr void __set_appGpuTime_IsValid(bool value) ;

constexpr bool __get_appGpuTime_IsValid() const;

 float_t __declspec(property(get=__get_appGpuTime, put=__set_appGpuTime))  appGpuTime;

constexpr void __set_appGpuTime(float_t value) ;

constexpr float_t __get_appGpuTime() const;

 bool __declspec(property(get=__get_compositorCpuTime_IsValid, put=__set_compositorCpuTime_IsValid))  compositorCpuTime_IsValid;

constexpr void __set_compositorCpuTime_IsValid(bool value) ;

constexpr bool __get_compositorCpuTime_IsValid() const;

 float_t __declspec(property(get=__get_compositorCpuTime, put=__set_compositorCpuTime))  compositorCpuTime;

constexpr void __set_compositorCpuTime(float_t value) ;

constexpr float_t __get_compositorCpuTime() const;

 bool __declspec(property(get=__get_compositorGpuTime_IsValid, put=__set_compositorGpuTime_IsValid))  compositorGpuTime_IsValid;

constexpr void __set_compositorGpuTime_IsValid(bool value) ;

constexpr bool __get_compositorGpuTime_IsValid() const;

 float_t __declspec(property(get=__get_compositorGpuTime, put=__set_compositorGpuTime))  compositorGpuTime;

constexpr void __set_compositorGpuTime(float_t value) ;

constexpr float_t __get_compositorGpuTime() const;

 bool __declspec(property(get=__get_compositorDroppedFrameCount_IsValid, put=__set_compositorDroppedFrameCount_IsValid))  compositorDroppedFrameCount_IsValid;

constexpr void __set_compositorDroppedFrameCount_IsValid(bool value) ;

constexpr bool __get_compositorDroppedFrameCount_IsValid() const;

 int32_t __declspec(property(get=__get_compositorDroppedFrameCount, put=__set_compositorDroppedFrameCount))  compositorDroppedFrameCount;

constexpr void __set_compositorDroppedFrameCount(int32_t value) ;

constexpr int32_t __get_compositorDroppedFrameCount() const;

 bool __declspec(property(get=__get_compositorSpaceWarpMode_IsValid, put=__set_compositorSpaceWarpMode_IsValid))  compositorSpaceWarpMode_IsValid;

constexpr void __set_compositorSpaceWarpMode_IsValid(bool value) ;

constexpr bool __get_compositorSpaceWarpMode_IsValid() const;

 int32_t __declspec(property(get=__get_compositorSpaceWarpMode, put=__set_compositorSpaceWarpMode))  compositorSpaceWarpMode;

constexpr void __set_compositorSpaceWarpMode(int32_t value) ;

constexpr int32_t __get_compositorSpaceWarpMode() const;

 bool __declspec(property(get=__get_systemGpuUtilPercentage_IsValid, put=__set_systemGpuUtilPercentage_IsValid))  systemGpuUtilPercentage_IsValid;

constexpr void __set_systemGpuUtilPercentage_IsValid(bool value) ;

constexpr bool __get_systemGpuUtilPercentage_IsValid() const;

 float_t __declspec(property(get=__get_systemGpuUtilPercentage, put=__set_systemGpuUtilPercentage))  systemGpuUtilPercentage;

constexpr void __set_systemGpuUtilPercentage(float_t value) ;

constexpr float_t __get_systemGpuUtilPercentage() const;

 bool __declspec(property(get=__get_systemCpuUtilAveragePercentage_IsValid, put=__set_systemCpuUtilAveragePercentage_IsValid))  systemCpuUtilAveragePercentage_IsValid;

constexpr void __set_systemCpuUtilAveragePercentage_IsValid(bool value) ;

constexpr bool __get_systemCpuUtilAveragePercentage_IsValid() const;

 float_t __declspec(property(get=__get_systemCpuUtilAveragePercentage, put=__set_systemCpuUtilAveragePercentage))  systemCpuUtilAveragePercentage;

constexpr void __set_systemCpuUtilAveragePercentage(float_t value) ;

constexpr float_t __get_systemCpuUtilAveragePercentage() const;

 bool __declspec(property(get=__get_systemCpuUtilWorstPercentage_IsValid, put=__set_systemCpuUtilWorstPercentage_IsValid))  systemCpuUtilWorstPercentage_IsValid;

constexpr void __set_systemCpuUtilWorstPercentage_IsValid(bool value) ;

constexpr bool __get_systemCpuUtilWorstPercentage_IsValid() const;

 float_t __declspec(property(get=__get_systemCpuUtilWorstPercentage, put=__set_systemCpuUtilWorstPercentage))  systemCpuUtilWorstPercentage;

constexpr void __set_systemCpuUtilWorstPercentage(float_t value) ;

constexpr float_t __get_systemCpuUtilWorstPercentage() const;

 bool __declspec(property(get=__get_deviceCpuClockFrequencyInMHz_IsValid, put=__set_deviceCpuClockFrequencyInMHz_IsValid))  deviceCpuClockFrequencyInMHz_IsValid;

constexpr void __set_deviceCpuClockFrequencyInMHz_IsValid(bool value) ;

constexpr bool __get_deviceCpuClockFrequencyInMHz_IsValid() const;

 float_t __declspec(property(get=__get_deviceCpuClockFrequencyInMHz, put=__set_deviceCpuClockFrequencyInMHz))  deviceCpuClockFrequencyInMHz;

constexpr void __set_deviceCpuClockFrequencyInMHz(float_t value) ;

constexpr float_t __get_deviceCpuClockFrequencyInMHz() const;

 bool __declspec(property(get=__get_deviceGpuClockFrequencyInMHz_IsValid, put=__set_deviceGpuClockFrequencyInMHz_IsValid))  deviceGpuClockFrequencyInMHz_IsValid;

constexpr void __set_deviceGpuClockFrequencyInMHz_IsValid(bool value) ;

constexpr bool __get_deviceGpuClockFrequencyInMHz_IsValid() const;

 float_t __declspec(property(get=__get_deviceGpuClockFrequencyInMHz, put=__set_deviceGpuClockFrequencyInMHz))  deviceGpuClockFrequencyInMHz;

constexpr void __set_deviceGpuClockFrequencyInMHz(float_t value) ;

constexpr float_t __get_deviceGpuClockFrequencyInMHz() const;

 bool __declspec(property(get=__get_deviceCpuClockLevel_IsValid, put=__set_deviceCpuClockLevel_IsValid))  deviceCpuClockLevel_IsValid;

constexpr void __set_deviceCpuClockLevel_IsValid(bool value) ;

constexpr bool __get_deviceCpuClockLevel_IsValid() const;

 int32_t __declspec(property(get=__get_deviceCpuClockLevel, put=__set_deviceCpuClockLevel))  deviceCpuClockLevel;

constexpr void __set_deviceCpuClockLevel(int32_t value) ;

constexpr int32_t __get_deviceCpuClockLevel() const;

 bool __declspec(property(get=__get_deviceGpuClockLevel_IsValid, put=__set_deviceGpuClockLevel_IsValid))  deviceGpuClockLevel_IsValid;

constexpr void __set_deviceGpuClockLevel_IsValid(bool value) ;

constexpr bool __get_deviceGpuClockLevel_IsValid() const;

 int32_t __declspec(property(get=__get_deviceGpuClockLevel, put=__set_deviceGpuClockLevel))  deviceGpuClockLevel;

constexpr void __set_deviceGpuClockLevel(int32_t value) ;

constexpr int32_t __get_deviceGpuClockLevel() const;

 ::ArrayW<bool> __declspec(property(get=__get_deviceCpuCoreUtilPercentage_IsValid, put=__set_deviceCpuCoreUtilPercentage_IsValid))  deviceCpuCoreUtilPercentage_IsValid;

constexpr void __set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_deviceCpuCoreUtilPercentage_IsValid() const;

 ::ArrayW<float_t> __declspec(property(get=__get_deviceCpuCoreUtilPercentage, put=__set_deviceCpuCoreUtilPercentage))  deviceCpuCoreUtilPercentage;

constexpr void __set_deviceCpuCoreUtilPercentage(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_deviceCpuCoreUtilPercentage() const;


// Methods

/// @brief Method ToJSON addr 0x2635b58 size 0x734 virtual false final false
 ::StringW ToJSON() ;

/// @brief Method LoadFromJSON addr 0x263628c size 0x948 virtual false final false
 bool LoadFromJSON(::StringW json) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics() ;

/// @brief Method .ctor addr 0x2637370 size 0xb8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSystemPerfMetricsTcpServer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8972))
// CS Name: OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer
class CORDL_TYPE GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer& operator=(GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer&& o) noexcept = default;
  constexpr GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer& operator=(GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer __declspec(property(get=__get_singleton, put=__set_singleton))  singleton;

static void __set_singleton(GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer value) ;

static GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer __get_singleton() ;

 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer __declspec(property(get=__get_tcpServer, put=__set_tcpServer))  tcpServer;

constexpr void __set_tcpServer(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer __get_tcpServer() const;

 int32_t __declspec(property(get=__get_listeningPort, put=__set_listeningPort))  listeningPort;

constexpr void __set_listeningPort(int32_t value) ;

constexpr int32_t __get_listeningPort() const;


// Methods

/// @brief Method OnEnable addr 0x2637428 size 0x110 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2637538 size 0x9c virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x26375d4 size 0x7c virtual false final false
 void Update() ;

/// @brief Method GatherPerfMetrics addr 0x2637650 size 0x300 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics GatherPerfMetrics() ;

// Ctor Parameters []
explicit GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer() ;

/// @brief Method .ctor addr 0x2637950 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSystemPerfMetrics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8973))
// CS Name: OVRSystemPerfMetrics
class CORDL_TYPE OVRSystemPerfMetrics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OVRSystemPerfMetricsTcpServer = GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;

using PerfMetrics = GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRSystemPerfMetrics() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: " const&", def_value: None }]
constexpr OVRSystemPerfMetrics(OVRSystemPerfMetrics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: "&&", def_value: None }]
constexpr OVRSystemPerfMetrics(OVRSystemPerfMetrics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSystemPerfMetrics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRSystemPerfMetrics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSystemPerfMetrics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSystemPerfMetrics& operator=(OVRSystemPerfMetrics&& o) noexcept = default;
  constexpr OVRSystemPerfMetrics& operator=(OVRSystemPerfMetrics const& o) noexcept = default;
                


// Fields

/// @brief Field TcpListeningPort offset 0
static constexpr int32_t  TcpListeningPort{32419};

/// @brief Field PayloadTypeMetrics offset 0
static constexpr int32_t  PayloadTypeMetrics{100};

/// @brief Field MaxBufferLength offset 0
static constexpr int32_t  MaxBufferLength{65536};

/// @brief Field MaxMessageLength offset 0
static constexpr int32_t  MaxMessageLength{65532};


// Methods

// Ctor Parameters []
explicit OVRSystemPerfMetrics() ;

/// @brief Method .ctor addr 0x2635b50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRSystemPerfMetrics__PerfMetrics, "", "OVRSystemPerfMetrics/PerfMetrics");
NEED_NO_BOX(GlobalNamespace::OVRSystemPerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics, "", "OVRSystemPerfMetrics");
