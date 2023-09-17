#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
// Type: ::IUnifiedNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4541))
// CS Name: IUnifiedNetworkPlayerModel
class CORDL_TYPE IUnifiedNetworkPlayerModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INetworkPlayerModel
constexpr operator  ::GlobalNamespace::INetworkPlayerModel() const noexcept;

~IUnifiedNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IUnifiedNetworkPlayerModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_enableLocalNetwork, put=set_enableLocalNetwork))  enableLocalNetwork;

 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=get_publicServers))  publicServers;

 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=get_localNetworkPlayers))  localNetworkPlayers;

 ::StringW __declspec(property(get=get_secret))  secret;

 ::StringW __declspec(property(get=get_code))  code;


// Methods

/// @brief Method add_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_partyRefreshingEvent(::System::Action value) ;

/// @brief Method remove_partyRefreshingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_partyRefreshingEvent(::System::Action value) ;

/// @brief Method get_enableLocalNetwork addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_enableLocalNetwork() ;

/// @brief Method set_enableLocalNetwork addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_enableLocalNetwork(bool value) ;

/// @brief Method get_publicServers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> get_publicServers() ;

/// @brief Method get_localNetworkPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> get_localNetworkPlayers() ;

/// @brief Method SetServerFilter addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method ResetMasterServerReachability addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetMasterServerReachability() ;

/// @brief Method get_secret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_secret() ;

/// @brief Method get_code addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_code() ;

/// @brief Method SetActiveNetworkPlayerModelType addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetActiveNetworkPlayerModelType(::GlobalNamespace::____GlobalNamespace__UnifiedNetworkPlayerModel__ActiveNetworkPlayerModelType activeNetworkPlayerModelType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IUnifiedNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IUnifiedNetworkPlayerModel, "", "IUnifiedNetworkPlayerModel");
