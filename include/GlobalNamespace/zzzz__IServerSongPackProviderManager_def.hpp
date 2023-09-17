#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IServerSongPackProvider;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerSongPackProviderManager;
}
// Type: ::IServerSongPackProviderManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12758))
// CS Name: IServerSongPackProviderManager
class CORDL_TYPE IServerSongPackProviderManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IServerSongPackProviderManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServerSongPackProviderManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetServerSongPackProvider addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IServerSongPackProvider GetServerSongPackProvider() ;

/// @brief Method RefreshAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task RefreshAsync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IServerSongPackProviderManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerSongPackProviderManager, "", "IServerSongPackProviderManager");
