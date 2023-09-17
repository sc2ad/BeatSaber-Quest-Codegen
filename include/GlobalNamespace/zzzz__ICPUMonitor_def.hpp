#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class ICPUMonitor;
}
// Type: ::ICPUMonitor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12726))
// CS Name: ICPUMonitor
class CORDL_TYPE ICPUMonitor : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr operator  ::GlobalNamespace::IPollable() const noexcept;

~ICPUMonitor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICPUMonitor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_utilization))  utilization;


// Methods

/// @brief Method get_utilization addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_utilization() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ICPUMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ICPUMonitor, "", "ICPUMonitor");
