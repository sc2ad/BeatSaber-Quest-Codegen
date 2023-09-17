#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionHelpViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair;
}
// Type: ::MissionHelpGameObjectPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5789))
// CS Name: MissionHelpViewController::MissionHelpGameObjectPair
class CORDL_TYPE ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair(____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair(____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair& operator=(____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair&& o) noexcept = default;
  constexpr ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair& operator=(____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MissionHelpSO __declspec(property(get=__get_missionHelp, put=__set_missionHelp))  missionHelp;

constexpr void __set_missionHelp(::GlobalNamespace::MissionHelpSO value) ;

constexpr ::GlobalNamespace::MissionHelpSO __get_missionHelp() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_gameObject() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair() ;

/// @brief Method .ctor addr 0x2172f34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionHelpViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5790))
// CS Name: MissionHelpViewController
class CORDL_TYPE MissionHelpViewController : public ::HMUI::ViewController {
public:
// Declarations
using MissionHelpGameObjectPair = ::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MissionHelpViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: " const&", def_value: None }]
constexpr MissionHelpViewController(MissionHelpViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionHelpViewController", modifiers: "&&", def_value: None }]
constexpr MissionHelpViewController(MissionHelpViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionHelpViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr MissionHelpViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionHelpViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionHelpViewController& operator=(MissionHelpViewController&& o) noexcept = default;
  constexpr MissionHelpViewController& operator=(MissionHelpViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__okButton() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair> __declspec(property(get=__get__missionHelpGameObjectPairs, put=__set__missionHelpGameObjectPairs))  _missionHelpGameObjectPairs;

constexpr void __set__missionHelpGameObjectPairs(::ArrayW<::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair> __get__missionHelpGameObjectPairs() const;

 ::System::Action_1<::GlobalNamespace::MissionHelpViewController> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionHelpViewController> __get_didFinishEvent() const;

 ::GlobalNamespace::MissionHelpSO __declspec(property(get=__get__missionHelp, put=__set__missionHelp))  _missionHelp;

constexpr void __set__missionHelp(::GlobalNamespace::MissionHelpSO value) ;

constexpr ::GlobalNamespace::MissionHelpSO __get__missionHelp() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2172c04 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController> value) ;

/// @brief Method remove_didFinishEvent addr 0x2172cb4 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MissionHelpViewController> value) ;

/// @brief Method Setup addr 0x2172d64 size 0x2c virtual false final false
 void Setup(::GlobalNamespace::MissionHelpSO missionHelp) ;

/// @brief Method DidActivate addr 0x2172e60 size 0xac virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method RefreshContent addr 0x2172d90 size 0xd0 virtual false final false
 void RefreshContent() ;

/// @brief Method OkButtonPressed addr 0x2172f0c size 0x20 virtual false final false
 void OkButtonPressed() ;

// Ctor Parameters []
explicit MissionHelpViewController() ;

/// @brief Method .ctor addr 0x2172f2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionHelpViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpViewController, "", "MissionHelpViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MissionHelpViewController__MissionHelpGameObjectPair, "", "MissionHelpViewController/MissionHelpGameObjectPair");
