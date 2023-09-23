#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSegmentedControlController;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5705))
// CS Name: BeatmapCharacteristicSegmentedControlController::<>c
class CORDL_TYPE GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c(GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c(GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c& operator=(GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c& operator=(GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c value) ;

static GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c __get___9() ;

static System::Comparison_1<GlobalNamespace::IDifficultyBeatmapSet> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Comparison_1<GlobalNamespace::IDifficultyBeatmapSet> value) ;

static System::Comparison_1<GlobalNamespace::IDifficultyBeatmapSet> __get___9__10_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c() ;

/// @brief Method .ctor addr 0x2156154 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetData>b__10_0 addr 0x215615c size 0x12c virtual false final false
 int32_t _SetData_b__10_0(GlobalNamespace::IDifficultyBeatmapSet a, GlobalNamespace::IDifficultyBeatmapSet b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapCharacteristicSegmentedControlController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5706))
// CS Name: BeatmapCharacteristicSegmentedControlController
class CORDL_TYPE BeatmapCharacteristicSegmentedControlController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapCharacteristicSegmentedControlController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSegmentedControlController", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicSegmentedControlController(BeatmapCharacteristicSegmentedControlController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicSegmentedControlController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapCharacteristicSegmentedControlController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicSegmentedControlController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicSegmentedControlController& operator=(BeatmapCharacteristicSegmentedControlController&& o) noexcept = default;
  constexpr BeatmapCharacteristicSegmentedControlController& operator=(BeatmapCharacteristicSegmentedControlController const& o) noexcept = default;
                


// Fields

 HMUI::IconSegmentedControl __declspec(property(get=__get__segmentedControl, put=__set__segmentedControl))  _segmentedControl;

constexpr void __set__segmentedControl(HMUI::IconSegmentedControl value) ;

constexpr HMUI::IconSegmentedControl __get__segmentedControl() const;

 System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController,GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectBeatmapCharacteristicEvent, put=__set_didSelectBeatmapCharacteristicEvent))  didSelectBeatmapCharacteristicEvent;

constexpr void __set_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController,GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController,GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectBeatmapCharacteristicEvent() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__selectedBeatmapCharacteristic, put=__set__selectedBeatmapCharacteristic))  _selectedBeatmapCharacteristic;

constexpr void __set__selectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__selectedBeatmapCharacteristic() const;

 System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get__beatmapCharacteristics, put=__set__beatmapCharacteristics))  _beatmapCharacteristics;

constexpr void __set__beatmapCharacteristics(System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BeatmapCharacteristicSO> __get__beatmapCharacteristics() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_selectedBeatmapCharacteristic))  selectedBeatmapCharacteristic;


// Methods

/// @brief Method add_didSelectBeatmapCharacteristicEvent addr 0x21557e4 size 0xb0 virtual false final false
 void add_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController,GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectBeatmapCharacteristicEvent addr 0x2155894 size 0xb0 virtual false final false
 void remove_didSelectBeatmapCharacteristicEvent(System::Action_2<GlobalNamespace::BeatmapCharacteristicSegmentedControlController,GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method get_selectedBeatmapCharacteristic addr 0x2155944 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_selectedBeatmapCharacteristic() ;

/// @brief Method Awake addr 0x215594c size 0x8c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x21559d8 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method SetData addr 0x2155aac size 0x53c virtual false final false
 void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IDifficultyBeatmapSet> difficultyBeatmapSets, GlobalNamespace::BeatmapCharacteristicSO selectedBeatmapCharacteristic) ;

/// @brief Method HandleDifficultySegmentedControlDidSelectCell addr 0x2155fe8 size 0x88 virtual false final false
 void HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

// Ctor Parameters []
explicit BeatmapCharacteristicSegmentedControlController() ;

/// @brief Method .ctor addr 0x2156070 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicSegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSegmentedControlController, "", "BeatmapCharacteristicSegmentedControlController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicSegmentedControlController____c, "", "BeatmapCharacteristicSegmentedControlController/<>c");
