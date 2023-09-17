#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IUnconnectedConnectionManager;
}
namespace {
// Type: ::IUnconnectedConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12794)), TypeDefinitionIndex(TypeDefinitionIndex(12723)), TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12792))
// CS Name: IUnconnectedConnectionManager
class CORDL_TYPE IUnconnectedConnectionManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageSender
constexpr operator  GlobalNamespace::IUnconnectedMessageSender() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IUnconnectedConnectionManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnconnectedConnectionManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IUnconnectedConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnconnectedConnectionManager, "", "IUnconnectedConnectionManager");
} // end anonymous namespace
