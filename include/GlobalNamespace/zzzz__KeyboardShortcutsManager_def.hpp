#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
struct KeyCode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut;
}
namespace GlobalNamespace {
class KeyboardShortcutsManager;
}
// Type: ::KeyboardShortcut
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13745))
// CS Name: KeyboardShortcutsManager::KeyboardShortcut
class CORDL_TYPE GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut(GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut(GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut& operator=(GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut&& o) noexcept = default;
  constexpr GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut& operator=(GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut const& o) noexcept = default;
                


// Fields

 UnityEngine::KeyCode __declspec(property(get=__get_mainKey, put=__set_mainKey))  mainKey;

constexpr void __set_mainKey(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get_mainKey() const;

 UnityEngine::KeyCode __declspec(property(get=__get_combinationKey1, put=__set_combinationKey1))  combinationKey1;

constexpr void __set_combinationKey1(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get_combinationKey1() const;

 UnityEngine::KeyCode __declspec(property(get=__get_combinationKey2, put=__set_combinationKey2))  combinationKey2;

constexpr void __set_combinationKey2(UnityEngine::KeyCode value) ;

constexpr UnityEngine::KeyCode __get_combinationKey2() const;


// Methods

// Ctor Parameters [CppParam { name: "mainKey", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "combinationKey1", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "combinationKey2", ty: "UnityEngine::KeyCode", modifiers: "", def_value: None }]
explicit GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2) ;

/// @brief Method .ctor addr 0x1f72ae0 size 0x3c virtual false final false
 void _ctor(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2) ;

/// @brief Method GetHashCode addr 0x1f73060 size 0x14 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x1f73074 size 0xb8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KeyboardShortcutsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13746))
// CS Name: KeyboardShortcutsManager
class CORDL_TYPE KeyboardShortcutsManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using KeyboardShortcut = GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyboardShortcutsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardShortcutsManager", modifiers: " const&", def_value: None }]
constexpr KeyboardShortcutsManager(KeyboardShortcutsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardShortcutsManager", modifiers: "&&", def_value: None }]
constexpr KeyboardShortcutsManager(KeyboardShortcutsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardShortcutsManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr KeyboardShortcutsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardShortcutsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardShortcutsManager& operator=(KeyboardShortcutsManager&& o) noexcept = default;
  constexpr KeyboardShortcutsManager& operator=(KeyboardShortcutsManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>> __declspec(property(get=__get__keyboardShortcutActions, put=__set__keyboardShortcutActions))  _keyboardShortcutActions;

constexpr void __set__keyboardShortcutActions(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Collections::Generic::List_1<System::Action>> __get__keyboardShortcutActions() const;


// Methods

/// @brief Method Update addr 0x1f723ec size 0x2fc virtual false final false
 void Update() ;

/// @brief Method RemoveKeyboardShortcuts addr 0x1f726e8 size 0x164 virtual false final false
 void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action> shortcutActions) ;

/// @brief Method RemoveKeyboardShortcuts addr 0x1f7285c size 0x158 virtual false final false
 void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action> shortcutActions) ;

/// @brief Method RemoveKeyboardShortcut addr 0x1f729b4 size 0x9c virtual false final false
 void RemoveKeyboardShortcut(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut keyboardShortcut, System::Action callback) ;

/// @brief Method RemoveKeyboardShortcut addr 0x1f72a50 size 0x90 virtual false final false
 void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action callback) ;

/// @brief Method RemoveKeyboardShortcut addr 0x1f72b1c size 0xc virtual false final false
 void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action callback) ;

/// @brief Method RemoveKeyboardShortcut addr 0x1f7284c size 0x10 virtual false final false
 void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action callback) ;

/// @brief Method AddKeyboardShortcuts addr 0x1f72b28 size 0x164 virtual false final false
 void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode,System::Action> shortcutActions) ;

/// @brief Method AddKeyboardShortcuts addr 0x1f72c9c size 0x158 virtual false final false
 void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut,System::Action> shortcutActions) ;

/// @brief Method AddKeyboardShortcut addr 0x1f72df4 size 0x154 virtual false final false
 void AddKeyboardShortcut(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut keyboardShortcut, System::Action callback) ;

/// @brief Method AddKeyboardShortcut addr 0x1f72f48 size 0x90 virtual false final false
 void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action callback) ;

/// @brief Method AddKeyboardShortcut addr 0x1f72fd8 size 0xc virtual false final false
 void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action callback) ;

/// @brief Method AddKeyboardShortcut addr 0x1f72c8c size 0x10 virtual false final false
 void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action callback) ;

// Ctor Parameters []
explicit KeyboardShortcutsManager() ;

/// @brief Method .ctor addr 0x1f72fe4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KeyboardShortcutsManager__KeyboardShortcut, "", "KeyboardShortcutsManager/KeyboardShortcut");
NEED_NO_BOX(GlobalNamespace::KeyboardShortcutsManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager, "", "KeyboardShortcutsManager");
