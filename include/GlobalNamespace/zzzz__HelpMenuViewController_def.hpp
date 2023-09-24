#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HMUI {
class ViewController;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpMenuViewController;
}
// Type: ::HelpMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5741))
// CS Name: HelpMenuViewController
class CORDL_TYPE HelpMenuViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HelpMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: " const&", def_value: None }]
constexpr HelpMenuViewController(HelpMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "&&", def_value: None }]
constexpr HelpMenuViewController(HelpMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelpMenuViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr HelpMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelpMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelpMenuViewController& operator=(HelpMenuViewController&& o) noexcept = default;
  constexpr HelpMenuViewController& operator=(HelpMenuViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextSegmentedControl __declspec(property(get=__get__helpMenuSegmentedControl, put=__set__helpMenuSegmentedControl))  _helpMenuSegmentedControl;

constexpr void __set__helpMenuSegmentedControl(HMUI::TextSegmentedControl value) ;

constexpr HMUI::TextSegmentedControl __get__helpMenuSegmentedControl() const;

 System::Action_1<int32_t> __declspec(property(get=__get_didSelectHelpSubMenuEvent, put=__set_didSelectHelpSubMenuEvent))  didSelectHelpSubMenuEvent;

constexpr void __set_didSelectHelpSubMenuEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_didSelectHelpSubMenuEvent() const;

 System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController,::StringW>> __declspec(property(get=__get__viewControllers, put=__set__viewControllers))  _viewControllers;

constexpr void __set__viewControllers(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController,::StringW>> value) ;

constexpr System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController,::StringW>> __get__viewControllers() const;


// Methods

/// @brief Method add_didSelectHelpSubMenuEvent addr 0x215f8ec size 0xb0 virtual false final false
 void add_didSelectHelpSubMenuEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_didSelectHelpSubMenuEvent addr 0x215f99c size 0xb0 virtual false final false
 void remove_didSelectHelpSubMenuEvent(System::Action_1<int32_t> value) ;

/// @brief Method Init addr 0x215fa4c size 0x8 virtual false final false
 void Init(System::Collections::Generic::List_1<System::ValueTuple_2<HMUI::ViewController,::StringW>> viewControllers) ;

/// @brief Method DidActivate addr 0x215fa54 size 0x2b8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method HandleHelpMenuSegmentedControlDidSelectCell addr 0x215fd0c size 0x24 virtual false final false
 void HandleHelpMenuSegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

static GlobalNamespace::HelpMenuViewController New_ctor() ;

/// @brief Method .ctor addr 0x215fd30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HelpMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HelpMenuViewController, "", "HelpMenuViewController");
