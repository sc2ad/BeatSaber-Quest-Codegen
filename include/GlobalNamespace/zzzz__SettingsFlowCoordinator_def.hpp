#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SettingsNavigationController__FinishAction;
}
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
// Type: ::FinishAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5612))
// CS Name: SettingsFlowCoordinator::FinishAction
struct CORDL_TYPE ____GlobalNamespace__SettingsFlowCoordinator__FinishAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__SettingsFlowCoordinator__FinishAction(____GlobalNamespace__SettingsFlowCoordinator__FinishAction const&) = default;
                    constexpr ____GlobalNamespace__SettingsFlowCoordinator__FinishAction(____GlobalNamespace__SettingsFlowCoordinator__FinishAction&&) = default;
                    constexpr ____GlobalNamespace__SettingsFlowCoordinator__FinishAction& operator=(____GlobalNamespace__SettingsFlowCoordinator__FinishAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SettingsFlowCoordinator__FinishAction& operator=(____GlobalNamespace__SettingsFlowCoordinator__FinishAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SettingsFlowCoordinator__FinishAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__SettingsFlowCoordinator__FinishAction_Unwrapped : int32_t {
__Cancel = 0,
__Ok = 1,
__Apply = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__SettingsFlowCoordinator__FinishAction_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__SettingsFlowCoordinator__FinishAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Cancel offset 0
static ::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction const Cancel;

/// @brief Field Ok offset 0
static ::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction const Ok;

/// @brief Field Apply offset 0
static ::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction const Apply;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SettingsFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5613))
// CS Name: SettingsFlowCoordinator
class CORDL_TYPE SettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using FinishAction = ::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~SettingsFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr SettingsFlowCoordinator(SettingsFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr SettingsFlowCoordinator(SettingsFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsFlowCoordinator(void* ptr) noexcept : ::HMUI::FlowCoordinator(ptr) {
}


  constexpr SettingsFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsFlowCoordinator& operator=(SettingsFlowCoordinator&& o) noexcept = default;
  constexpr SettingsFlowCoordinator& operator=(SettingsFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__mainSettingsMenuViewController, put=__set__mainSettingsMenuViewController))  _mainSettingsMenuViewController;

constexpr void __set__mainSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr ::GlobalNamespace::MainSettingsMenuViewController __get__mainSettingsMenuViewController() const;

 ::GlobalNamespace::SettingsNavigationController __declspec(property(get=__get__settingsNavigationController, put=__set__settingsNavigationController))  _settingsNavigationController;

constexpr void __set__settingsNavigationController(::GlobalNamespace::SettingsNavigationController value) ;

constexpr ::GlobalNamespace::SettingsNavigationController __get__settingsNavigationController() const;

 ::GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(::GlobalNamespace::ISaveData value) ;

constexpr ::GlobalNamespace::ISaveData __get__saveData() const;

 ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator,::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator,::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction> value) ;

constexpr ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator,::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction> __get_didFinishEvent() const;

static int32_t __declspec(property(get=__get__selectedSettingsSubMenuInfoIdx, put=__set__selectedSettingsSubMenuInfoIdx))  _selectedSettingsSubMenuInfoIdx;

static void __set__selectedSettingsSubMenuInfoIdx(int32_t value) ;

static int32_t __get__selectedSettingsSubMenuInfoIdx() ;


// Methods

/// @brief Method add_didFinishEvent addr 0x21449e4 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator,::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction> value) ;

/// @brief Method remove_didFinishEvent addr 0x2144a94 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator,::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction> value) ;

/// @brief Method DidActivate addr 0x2144b44 size 0x2b0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2144df4 size 0x10c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method ShowSecretViewController addr 0x2144f00 size 0x4 virtual false final false
 void ShowSecretViewController(::HMUI::ViewController viewController) ;

/// @brief Method HandleDidSelectSettingsSubMenu addr 0x2144f98 size 0x6c virtual false final false
 void HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo settingsSubMenuInfo, int32_t idx) ;

/// @brief Method ReplaceViewController addr 0x2144f04 size 0x94 virtual false final false
 void ReplaceViewController(::HMUI::ViewController viewController) ;

/// @brief Method HandleSettingsNavigationControllerDidFinish addr 0x2145004 size 0x9c virtual false final false
 void HandleSettingsNavigationControllerDidFinish(::GlobalNamespace::____GlobalNamespace__SettingsNavigationController__FinishAction finishAction) ;

/// @brief Method ApplySettings addr 0x21450a0 size 0x3c virtual false final false
 void ApplySettings() ;

/// @brief Method CancelSettings addr 0x21450dc size 0x28 virtual false final false
 void CancelSettings() ;

// Ctor Parameters []
explicit SettingsFlowCoordinator() ;

/// @brief Method .ctor addr 0x2145104 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SettingsFlowCoordinator__FinishAction, "", "SettingsFlowCoordinator/FinishAction");
NEED_NO_BOX(::GlobalNamespace::SettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsFlowCoordinator, "", "SettingsFlowCoordinator");
