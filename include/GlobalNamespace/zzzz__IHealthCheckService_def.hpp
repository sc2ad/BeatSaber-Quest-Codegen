#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class IHealthCheckService;
}
// Type: ::IHealthCheckService
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12739))
// CS Name: IHealthCheckService
class CORDL_TYPE IHealthCheckService : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr operator  ::GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IHealthCheckService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IHealthCheckService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IHealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHealthCheckService, "", "IHealthCheckService");
