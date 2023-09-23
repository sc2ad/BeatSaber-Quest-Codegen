#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SoloModeSelectionViewController__MenuType;
}
namespace GlobalNamespace {
class SoloModeSelectionViewController;
}
// Type: ::MenuType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5851))
// CS Name: SoloModeSelectionViewController::MenuType
struct CORDL_TYPE GlobalNamespace__SoloModeSelectionViewController__MenuType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SoloModeSelectionViewController__MenuType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SoloModeSelectionViewController__MenuType(GlobalNamespace__SoloModeSelectionViewController__MenuType const&) = default;
                    constexpr GlobalNamespace__SoloModeSelectionViewController__MenuType(GlobalNamespace__SoloModeSelectionViewController__MenuType&&) = default;
                    constexpr GlobalNamespace__SoloModeSelectionViewController__MenuType& operator=(GlobalNamespace__SoloModeSelectionViewController__MenuType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SoloModeSelectionViewController__MenuType& operator=(GlobalNamespace__SoloModeSelectionViewController__MenuType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SoloModeSelectionViewController__MenuType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SoloModeSelectionViewController__MenuType_Unwrapped : int32_t {
__FreePlayMode = 0,
__NoArrowsMode = 1,
__OneSaberMode = 2,
__Back = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SoloModeSelectionViewController__MenuType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SoloModeSelectionViewController__MenuType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FreePlayMode offset 0
static GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType const FreePlayMode;

/// @brief Field NoArrowsMode offset 0
static GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType const NoArrowsMode;

/// @brief Field OneSaberMode offset 0
static GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType const OneSaberMode;

/// @brief Field Back offset 0
static GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType const Back;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SoloModeSelectionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5852))
// CS Name: SoloModeSelectionViewController
class CORDL_TYPE SoloModeSelectionViewController : public HMUI::ViewController {
public:
// Declarations
using MenuType = GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SoloModeSelectionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: " const&", def_value: None }]
constexpr SoloModeSelectionViewController(SoloModeSelectionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SoloModeSelectionViewController", modifiers: "&&", def_value: None }]
constexpr SoloModeSelectionViewController(SoloModeSelectionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SoloModeSelectionViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SoloModeSelectionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SoloModeSelectionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SoloModeSelectionViewController& operator=(SoloModeSelectionViewController&& o) noexcept = default;
  constexpr SoloModeSelectionViewController& operator=(SoloModeSelectionViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__freePlayModeButton, put=__set__freePlayModeButton))  _freePlayModeButton;

constexpr void __set__freePlayModeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__freePlayModeButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__oneSaberModeButton, put=__set__oneSaberModeButton))  _oneSaberModeButton;

constexpr void __set__oneSaberModeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__oneSaberModeButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__noArrowsModeButton, put=__set__noArrowsModeButton))  _noArrowsModeButton;

constexpr void __set__noArrowsModeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__noArrowsModeButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__dismissButton, put=__set__dismissButton))  _dismissButton;

constexpr void __set__dismissButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__dismissButton() const;

 System::Action_2<GlobalNamespace::SoloModeSelectionViewController,GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::SoloModeSelectionViewController,GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType> value) ;

constexpr System::Action_2<GlobalNamespace::SoloModeSelectionViewController,GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2181e14 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::SoloModeSelectionViewController,GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType> value) ;

/// @brief Method remove_didFinishEvent addr 0x2181ec4 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::SoloModeSelectionViewController,GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType> value) ;

/// @brief Method DidActivate addr 0x2181f74 size 0x1b0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method HandleMenuButton addr 0x2182124 size 0x28 virtual false final false
 void HandleMenuButton(GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType subMenuType) ;

// Ctor Parameters []
explicit SoloModeSelectionViewController() ;

/// @brief Method .ctor addr 0x218214c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x2182154 size 0x24 virtual false final false
 void _DidActivate_b__8_0() ;

/// @brief Method <DidActivate>b__8_1 addr 0x2182178 size 0x24 virtual false final false
 void _DidActivate_b__8_1() ;

/// @brief Method <DidActivate>b__8_2 addr 0x218219c size 0x24 virtual false final false
 void _DidActivate_b__8_2() ;

/// @brief Method <DidActivate>b__8_3 addr 0x21821c0 size 0x24 virtual false final false
 void _DidActivate_b__8_3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SoloModeSelectionViewController__MenuType, "", "SoloModeSelectionViewController/MenuType");
NEED_NO_BOX(GlobalNamespace::SoloModeSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloModeSelectionViewController, "", "SoloModeSelectionViewController");
