#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProviderManager;
}
// Type: ::IServerBeatmapProviderManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12756))
// CS Name: IServerBeatmapProviderManager
class CORDL_TYPE IServerBeatmapProviderManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IServerBeatmapProviderManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServerBeatmapProviderManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetServerBeatmapProvider addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IServerBeatmapProvider GetServerBeatmapProvider() ;

/// @brief Method RefreshAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task RefreshAsync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IServerBeatmapProviderManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerBeatmapProviderManager, "", "IServerBeatmapProviderManager");
