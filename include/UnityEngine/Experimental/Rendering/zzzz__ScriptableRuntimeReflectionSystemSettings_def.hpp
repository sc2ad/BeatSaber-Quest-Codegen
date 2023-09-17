#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemWrapper;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemSettings;
}
// Type: UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemSettings
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10343))
// CS Name: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings
class CORDL_TYPE ScriptableRuntimeReflectionSystemSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ScriptableRuntimeReflectionSystemSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: " const&", def_value: None }]
constexpr ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemSettings", modifiers: "&&", def_value: None }]
constexpr ScriptableRuntimeReflectionSystemSettings(ScriptableRuntimeReflectionSystemSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableRuntimeReflectionSystemSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptableRuntimeReflectionSystemSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableRuntimeReflectionSystemSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableRuntimeReflectionSystemSettings& operator=(ScriptableRuntimeReflectionSystemSettings&& o) noexcept = default;
  constexpr ScriptableRuntimeReflectionSystemSettings& operator=(ScriptableRuntimeReflectionSystemSettings const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper value) ;

static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper __get_s_Instance() ;


// Properties

static ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem __declspec(property(put=set_Internal_ScriptableRuntimeReflectionSystemSettings_system))  Internal_ScriptableRuntimeReflectionSystemSettings_system;

static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper __declspec(property(get=get_Internal_ScriptableRuntimeReflectionSystemSettings_instance))  Internal_ScriptableRuntimeReflectionSystemSettings_instance;


// Methods

/// @brief Method set_Internal_ScriptableRuntimeReflectionSystemSettings_system addr 0x2b7b214 size 0x148 virtual false final false
static void set_Internal_ScriptableRuntimeReflectionSystemSettings_system(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem value) ;

/// @brief Method get_Internal_ScriptableRuntimeReflectionSystemSettings_instance addr 0x2b7b35c size 0x58 virtual false final false
static ::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper get_Internal_ScriptableRuntimeReflectionSystemSettings_instance() ;

/// @brief Method ScriptingDirtyReflectionSystemInstance addr 0x2b7b3b4 size 0x28 virtual false final false
static void ScriptingDirtyReflectionSystemInstance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemSettings, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemSettings");
