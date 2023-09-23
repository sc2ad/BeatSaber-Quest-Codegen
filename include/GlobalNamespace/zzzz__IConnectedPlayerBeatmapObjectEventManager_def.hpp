#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
// Type: ::IConnectedPlayerBeatmapObjectEventManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12721))
// CS Name: IConnectedPlayerBeatmapObjectEventManager
class CORDL_TYPE IConnectedPlayerBeatmapObjectEventManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConnectedPlayerBeatmapObjectEventManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConnectedPlayerBeatmapObjectEventManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_connectedPlayerNoteWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerNoteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerNoteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerObstacleWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerObstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerObstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerSliderWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerSliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerSliderWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerSliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerNoteWasCutEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasCutEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerNoteWasCutEvent(System::Action_1<GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerNoteWasMissedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasMissedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerNoteWasMissedEvent(System::Action_1<GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
 void Pause() ;

/// @brief Method Resume addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resume() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager, "", "IConnectedPlayerBeatmapObjectEventManager");
