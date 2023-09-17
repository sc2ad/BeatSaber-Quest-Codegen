#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include <cmath>
#include <cstdint>
namespace BGNet::Core {
struct AnalyticsMetricUnit;
}
namespace GlobalNamespace {
struct MetricIdentifier;
}
// Forward declare root types
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace {
// Type: BGNet.Core::IAnalyticsManager
namespace BGNet::Core {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12723)), TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12934))
// CS Name: BGNet.Core.IAnalyticsManager
class CORDL_TYPE IAnalyticsManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IAnalyticsManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnalyticsManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateState(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t state, BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric) ;

/// @brief Method UpdateAverage addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateAverage(GlobalNamespace::MetricIdentifier metricIdentifier, double_t value, BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric) ;

/// @brief Method IncrementCounter addr 0x0 size 0xffffffffffffffff virtual true final false
 void IncrementCounter(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t incrementAmount, BGNet::Core::AnalyticsMetricUnit unit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core
NEED_NO_BOX(::BGNet::Core::IAnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::IAnalyticsManager, "BGNet.Core", "IAnalyticsManager");
} // end anonymous namespace
