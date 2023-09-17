#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputFeatureNames;
}
// Type: UnityEngine.InputSystem::InputFeatureNames
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6374))
// CS Name: UnityEngine.InputSystem.InputFeatureNames
class CORDL_TYPE InputFeatureNames : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputFeatureNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFeatureNames", modifiers: " const&", def_value: None }]
constexpr InputFeatureNames(InputFeatureNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputFeatureNames", modifiers: "&&", def_value: None }]
constexpr InputFeatureNames(InputFeatureNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputFeatureNames(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputFeatureNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputFeatureNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputFeatureNames& operator=(InputFeatureNames&& o) noexcept = default;
  constexpr InputFeatureNames& operator=(InputFeatureNames const& o) noexcept = default;
                


// Fields

/// @brief Field kRunPlayerUpdatesInEditMode offset 0
static constexpr ::ConstString  kRunPlayerUpdatesInEditMode{u"RUN_PLAYER_UPDATES_IN_EDIT_MODE"};

/// @brief Field kDisableUnityRemoteSupport offset 0
static constexpr ::ConstString  kDisableUnityRemoteSupport{u"DISABLE_UNITY_REMOTE_SUPPORT"};

/// @brief Field kDisableShortcutSupport offset 0
static constexpr ::ConstString  kDisableShortcutSupport{u"DISABLE_SHORTCUT_SUPPORT"};

/// @brief Field kUseWindowsGamingInputBackend offset 0
static constexpr ::ConstString  kUseWindowsGamingInputBackend{u"USE_WINDOWS_GAMING_INPUT_BACKEND"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputFeatureNames);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputFeatureNames, "UnityEngine.InputSystem", "InputFeatureNames");
