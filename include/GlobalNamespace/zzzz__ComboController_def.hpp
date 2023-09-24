#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class IComboController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboController;
}
// Type: ::ComboController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5401))
// CS Name: ComboController
class CORDL_TYPE ComboController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IComboController
constexpr operator  GlobalNamespace::IComboController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ComboController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboController", modifiers: " const&", def_value: None }]
constexpr ComboController(ComboController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboController", modifiers: "&&", def_value: None }]
constexpr ComboController(ComboController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComboController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ComboController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComboController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComboController& operator=(ComboController&& o) noexcept = default;
  constexpr ComboController& operator=(ComboController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 System::Action_1<int32_t> __declspec(property(get=__get_comboDidChangeEvent, put=__set_comboDidChangeEvent))  comboDidChangeEvent;

constexpr void __set_comboDidChangeEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_comboDidChangeEvent() const;

 System::Action __declspec(property(get=__get_comboBreakingEventHappenedEvent, put=__set_comboBreakingEventHappenedEvent))  comboBreakingEventHappenedEvent;

constexpr void __set_comboBreakingEventHappenedEvent(System::Action value) ;

constexpr System::Action __get_comboBreakingEventHappenedEvent() const;

 int32_t __declspec(property(get=__get__combo, put=__set__combo))  _combo;

constexpr void __set__combo(int32_t value) ;

constexpr int32_t __get__combo() const;

 int32_t __declspec(property(get=__get__maxCombo, put=__set__maxCombo))  _maxCombo;

constexpr void __set__maxCombo(int32_t value) ;

constexpr int32_t __get__maxCombo() const;


// Properties

 int32_t __declspec(property(get=get_maxCombo))  maxCombo;


// Methods

/// @brief Method get_maxCombo addr 0x210cf98 size 0x8 virtual false final false
 int32_t get_maxCombo() ;

/// @brief Method add_comboDidChangeEvent addr 0x210cfa0 size 0xb0 virtual true final true
 void add_comboDidChangeEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_comboDidChangeEvent addr 0x210d050 size 0xb0 virtual true final true
 void remove_comboDidChangeEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_comboBreakingEventHappenedEvent addr 0x210d100 size 0x9c virtual true final true
 void add_comboBreakingEventHappenedEvent(System::Action value) ;

/// @brief Method remove_comboBreakingEventHappenedEvent addr 0x210d19c size 0x9c virtual true final true
 void remove_comboBreakingEventHappenedEvent(System::Action value) ;

/// @brief Method Start addr 0x210d238 size 0x150 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x210d388 size 0x19c virtual false final false
 void OnDestroy() ;

/// @brief Method HandlePlayerHeadDidEnterObstacles addr 0x210d524 size 0x58 virtual false final false
 void HandlePlayerHeadDidEnterObstacles() ;

/// @brief Method HandleNoteWasCut addr 0x210d57c size 0x9c virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x210d618 size 0x84 virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

static GlobalNamespace::ComboController New_ctor() ;

/// @brief Method .ctor addr 0x210d69c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ComboController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboController, "", "ComboController");
