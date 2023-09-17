#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace HMUI {
class SegmentedControl;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
// Type: ::MainSettingsMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5788))
// CS Name: MainSettingsMenuViewController
class CORDL_TYPE MainSettingsMenuViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MainSettingsMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: " const&", def_value: None }]
constexpr MainSettingsMenuViewController(MainSettingsMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: "&&", def_value: None }]
constexpr MainSettingsMenuViewController(MainSettingsMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSettingsMenuViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr MainSettingsMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSettingsMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSettingsMenuViewController& operator=(MainSettingsMenuViewController&& o) noexcept = default;
  constexpr MainSettingsMenuViewController& operator=(MainSettingsMenuViewController const& o) noexcept = default;
                


// Fields

 ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo,int32_t> __declspec(property(get=__get_didSelectSettingsSubMenuEvent, put=__set_didSelectSettingsSubMenuEvent))  didSelectSettingsSubMenuEvent;

constexpr void __set_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo,int32_t> value) ;

constexpr ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo,int32_t> __get_didSelectSettingsSubMenuEvent() const;

 ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo> __declspec(property(get=__get__settingsSubMenuInfos, put=__set__settingsSubMenuInfos))  _settingsSubMenuInfos;

constexpr void __set__settingsSubMenuInfos(::ArrayW<::GlobalNamespace::SettingsSubMenuInfo> value) ;

constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo> __get__settingsSubMenuInfos() const;

 ::HMUI::TextSegmentedControl __declspec(property(get=__get__settingsMenuSegmentedControl, put=__set__settingsMenuSegmentedControl))  _settingsMenuSegmentedControl;

constexpr void __set__settingsMenuSegmentedControl(::HMUI::TextSegmentedControl value) ;

constexpr ::HMUI::TextSegmentedControl __get__settingsMenuSegmentedControl() const;

 ::GlobalNamespace::SettingsSubMenuInfo __declspec(property(get=__get__selectedSubMenuInfo, put=__set__selectedSubMenuInfo))  _selectedSubMenuInfo;

constexpr void __set__selectedSubMenuInfo(::GlobalNamespace::SettingsSubMenuInfo value) ;

constexpr ::GlobalNamespace::SettingsSubMenuInfo __get__selectedSubMenuInfo() const;

 int32_t __declspec(property(get=__get__selectedSubMenuInfoIdx, put=__set__selectedSubMenuInfoIdx))  _selectedSubMenuInfoIdx;

constexpr void __set__selectedSubMenuInfoIdx(int32_t value) ;

constexpr int32_t __get__selectedSubMenuInfoIdx() const;


// Properties

 int32_t __declspec(property(get=get_numberOfSubMenus))  numberOfSubMenus;

 ::GlobalNamespace::SettingsSubMenuInfo __declspec(property(get=get_selectedSubMenuInfo))  selectedSubMenuInfo;


// Methods

/// @brief Method add_didSelectSettingsSubMenuEvent addr 0x21727fc size 0xb0 virtual false final false
 void add_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo,int32_t> value) ;

/// @brief Method remove_didSelectSettingsSubMenuEvent addr 0x21728ac size 0xb0 virtual false final false
 void remove_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo,int32_t> value) ;

/// @brief Method get_numberOfSubMenus addr 0x217295c size 0x1c virtual false final false
 int32_t get_numberOfSubMenus() ;

/// @brief Method get_selectedSubMenuInfo addr 0x2172978 size 0x8 virtual false final false
 ::GlobalNamespace::SettingsSubMenuInfo get_selectedSubMenuInfo() ;

/// @brief Method Init addr 0x2172980 size 0x38 virtual false final false
 void Init(int32_t selectedSubMenuInfoIdx) ;

/// @brief Method DidActivate addr 0x21729b8 size 0x1f0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method HandleSettingsMenuSegmentedControlDidSelectCell addr 0x2172ba8 size 0x54 virtual false final false
 void HandleSettingsMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

// Ctor Parameters []
explicit MainSettingsMenuViewController() ;

/// @brief Method .ctor addr 0x2172bfc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewController, "", "MainSettingsMenuViewController");
