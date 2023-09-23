#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
// Type: BGNet.Core.GameLift::IGameLiftPlayerSessionProvider
namespace BGNet::Core::GameLift {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12951))
// CS Name: BGNet.Core.GameLift.IGameLiftPlayerSessionProvider
class CORDL_TYPE IGameLiftPlayerSessionProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

~IGameLiftPlayerSessionProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameLiftPlayerSessionProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetGameLiftPlayerSessionInfo addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::PlayerSessionInfo> GetGameLiftPlayerSessionInfo(GlobalNamespace::IAuthenticationTokenProvider authenticationTokenProvider, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
NEED_NO_BOX(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider);
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider, "BGNet.Core.GameLift", "IGameLiftPlayerSessionProvider");
