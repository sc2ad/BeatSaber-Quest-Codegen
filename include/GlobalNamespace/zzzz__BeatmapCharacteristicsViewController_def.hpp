#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCharacteristicsTableView;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsViewController;
}
// Type: ::BeatmapCharacteristicsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5747))
// CS Name: BeatmapCharacteristicsViewController
class CORDL_TYPE BeatmapCharacteristicsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BeatmapCharacteristicsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr BeatmapCharacteristicsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicsViewController& operator=(BeatmapCharacteristicsViewController&& o) noexcept = default;
  constexpr BeatmapCharacteristicsViewController& operator=(BeatmapCharacteristicsViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicsTableView __declspec(property(get=__get__beatmapCharacteristicsTableView, put=__set__beatmapCharacteristicsTableView))  _beatmapCharacteristicsTableView;

constexpr void __set__beatmapCharacteristicsTableView(GlobalNamespace::BeatmapCharacteristicsTableView value) ;

constexpr GlobalNamespace::BeatmapCharacteristicsTableView __get__beatmapCharacteristicsTableView() const;

 System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectBeatmapCharacteristicEvent, put=__set_didSelectBeatmapCharacteristicEvent))  didSelectBeatmapCharacteristicEvent;

constexpr void __set_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectBeatmapCharacteristicEvent() const;

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 int32_t __declspec(property(get=__get__selectedBeatmapCharacteristicNum, put=__set__selectedBeatmapCharacteristicNum))  _selectedBeatmapCharacteristicNum;

constexpr void __set__selectedBeatmapCharacteristicNum(int32_t value) ;

constexpr int32_t __get__selectedBeatmapCharacteristicNum() const;


// Properties

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=get_beatmapCharacteristicCollection))  beatmapCharacteristicCollection;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_selectedBeatmapCharacteristic))  selectedBeatmapCharacteristic;


// Methods

/// @brief Method add_didSelectBeatmapCharacteristicEvent addr 0x2160c0c size 0xb0 virtual false final false
 void add_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectBeatmapCharacteristicEvent addr 0x2160cbc size 0xb0 virtual false final false
 void remove_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method get_beatmapCharacteristicCollection addr 0x2160d6c size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicCollection get_beatmapCharacteristicCollection() ;

/// @brief Method get_selectedBeatmapCharacteristic addr 0x2160d74 size 0xbc virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_selectedBeatmapCharacteristic() ;

/// @brief Method DidActivate addr 0x2160e30 size 0xb4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2160ee4 size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method SetData addr 0x2160f84 size 0x64 virtual false final false
 void SetData(GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, int32_t selectedCharacteristicNum) ;

/// @brief Method HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic addr 0x2160fe8 size 0x1c0 virtual false final false
 void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

static GlobalNamespace::BeatmapCharacteristicsViewController New_ctor() ;

/// @brief Method .ctor addr 0x21611a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsViewController, "", "BeatmapCharacteristicsViewController");
