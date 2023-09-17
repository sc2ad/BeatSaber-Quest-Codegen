#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
namespace {
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
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSelectionViewController;
}
// Type: ::BeatmapCharacteristicSelectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5707))
// CS Name: BeatmapCharacteristicSelectionViewController
class CORDL_TYPE BeatmapCharacteristicSelectionViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BeatmapCharacteristicSelectionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicSelectionViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr BeatmapCharacteristicSelectionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicSelectionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicSelectionViewController& operator=(BeatmapCharacteristicSelectionViewController&& o) noexcept = default;
  constexpr BeatmapCharacteristicSelectionViewController& operator=(BeatmapCharacteristicSelectionViewController const& o) noexcept = default;
                


// Fields

 ::HMUI::IconSegmentedControl __declspec(property(get=__get__beatmapCharacteristicSegmentedControl, put=__set__beatmapCharacteristicSegmentedControl))  _beatmapCharacteristicSegmentedControl;

constexpr void __set__beatmapCharacteristicSegmentedControl(::HMUI::IconSegmentedControl value) ;

constexpr ::HMUI::IconSegmentedControl __get__beatmapCharacteristicSegmentedControl() const;

 ::GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController,::GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectBeatmapCharacteristicEvent, put=__set_didSelectBeatmapCharacteristicEvent))  didSelectBeatmapCharacteristicEvent;

constexpr void __set_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController,::GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectBeatmapCharacteristicEvent() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__selectedBeatmapCharacteristic, put=__set__selectedBeatmapCharacteristic))  _selectedBeatmapCharacteristic;

constexpr void __set__selectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get__selectedBeatmapCharacteristic() const;


// Properties

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_selectedBeatmapCharacteristic))  selectedBeatmapCharacteristic;


// Methods

/// @brief Method add_didSelectBeatmapCharacteristicEvent addr 0x2156288 size 0xb0 virtual false final false
 void add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectBeatmapCharacteristicEvent addr 0x2156338 size 0xb0 virtual false final false
 void remove_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController,::GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method get_selectedBeatmapCharacteristic addr 0x21563e8 size 0x8 virtual false final false
 ::GlobalNamespace::BeatmapCharacteristicSO get_selectedBeatmapCharacteristic() ;

/// @brief Method Init addr 0x21563f0 size 0xc8 virtual false final false
 void Init() ;

/// @brief Method DidActivate addr 0x21564b8 size 0x2f4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21567ac size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell addr 0x215684c size 0xec virtual false final false
 void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t cellNumber) ;

// Ctor Parameters []
explicit BeatmapCharacteristicSelectionViewController() ;

/// @brief Method .ctor addr 0x2156938 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, "", "BeatmapCharacteristicSelectionViewController");
