#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
// Type: ::BeatmapDifficultySegmentedControlController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5708))
// CS Name: BeatmapDifficultySegmentedControlController
class CORDL_TYPE BeatmapDifficultySegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapDifficultySegmentedControlController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: " const&", def_value: None }]
constexpr BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "&&", def_value: None }]
constexpr BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultySegmentedControlController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapDifficultySegmentedControlController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDifficultySegmentedControlController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDifficultySegmentedControlController& operator=(BeatmapDifficultySegmentedControlController&& o) noexcept = default;
  constexpr BeatmapDifficultySegmentedControlController& operator=(BeatmapDifficultySegmentedControlController const& o) noexcept = default;
                


// Fields

 ::HMUI::TextSegmentedControl __declspec(property(get=__get__difficultySegmentedControl, put=__set__difficultySegmentedControl))  _difficultySegmentedControl;

constexpr void __set__difficultySegmentedControl(::HMUI::TextSegmentedControl value) ;

constexpr ::HMUI::TextSegmentedControl __get__difficultySegmentedControl() const;

 ::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController,::GlobalNamespace::BeatmapDifficulty> __declspec(property(get=__get_didSelectDifficultyEvent, put=__set_didSelectDifficultyEvent))  didSelectDifficultyEvent;

constexpr void __set_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController,::GlobalNamespace::BeatmapDifficulty> value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController,::GlobalNamespace::BeatmapDifficulty> __get_didSelectDifficultyEvent() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty> __declspec(property(get=__get__difficulties, put=__set__difficulties))  _difficulties;

constexpr void __set__difficulties(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty> __get__difficulties() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__selectedDifficulty, put=__set__selectedDifficulty))  _selectedDifficulty;

constexpr void __set__selectedDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get__selectedDifficulty() const;


// Properties

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_selectedDifficulty))  selectedDifficulty;


// Methods

/// @brief Method add_didSelectDifficultyEvent addr 0x2156940 size 0xb0 virtual false final false
 void add_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController,::GlobalNamespace::BeatmapDifficulty> value) ;

/// @brief Method remove_didSelectDifficultyEvent addr 0x21569f0 size 0xb0 virtual false final false
 void remove_didSelectDifficultyEvent(::System::Action_2<::GlobalNamespace::BeatmapDifficultySegmentedControlController,::GlobalNamespace::BeatmapDifficulty> value) ;

/// @brief Method get_selectedDifficulty addr 0x2156aa0 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapDifficulty get_selectedDifficulty() ;

/// @brief Method Awake addr 0x2156aa8 size 0x8c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2156b34 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method GetClosestDifficultyIndex addr 0x2156c08 size 0x14c virtual false final false
 int32_t GetClosestDifficultyIndex(::GlobalNamespace::BeatmapDifficulty searchDifficulty) ;

/// @brief Method HandleDifficultySegmentedControlDidSelectCell addr 0x2156d54 size 0x88 virtual false final false
 void HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

/// @brief Method SetData addr 0x2156ddc size 0x5e8 virtual false final false
 void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap> difficultyBeatmaps, ::GlobalNamespace::BeatmapDifficulty selectedDifficulty) ;

// Ctor Parameters []
explicit BeatmapDifficultySegmentedControlController() ;

/// @brief Method .ctor addr 0x21573c4 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySegmentedControlController, "", "BeatmapDifficultySegmentedControlController");
