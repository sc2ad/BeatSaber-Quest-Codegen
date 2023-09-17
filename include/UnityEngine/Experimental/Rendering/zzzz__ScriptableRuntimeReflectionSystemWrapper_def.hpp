#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::Experimental::Rendering {
class IScriptableRuntimeReflectionSystem;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class ScriptableRuntimeReflectionSystemWrapper;
}
// Type: UnityEngine.Experimental.Rendering::ScriptableRuntimeReflectionSystemWrapper
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10345))
// CS Name: UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemWrapper
class CORDL_TYPE ScriptableRuntimeReflectionSystemWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScriptableRuntimeReflectionSystemWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: " const&", def_value: None }]
constexpr ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableRuntimeReflectionSystemWrapper", modifiers: "&&", def_value: None }]
constexpr ScriptableRuntimeReflectionSystemWrapper(ScriptableRuntimeReflectionSystemWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableRuntimeReflectionSystemWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScriptableRuntimeReflectionSystemWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableRuntimeReflectionSystemWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableRuntimeReflectionSystemWrapper& operator=(ScriptableRuntimeReflectionSystemWrapper&& o) noexcept = default;
  constexpr ScriptableRuntimeReflectionSystemWrapper& operator=(ScriptableRuntimeReflectionSystemWrapper const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem __declspec(property(get=__get__implementation_k__BackingField, put=__set__implementation_k__BackingField))  _implementation_k__BackingField;

constexpr void __set__implementation_k__BackingField(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem value) ;

constexpr ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem __get__implementation_k__BackingField() const;


// Properties

 ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem __declspec(property(get=get_implementation, put=set_implementation))  implementation;


// Methods

/// @brief Method get_implementation addr 0x2b7b45c size 0x8 virtual false final false
 ::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem get_implementation() ;

/// @brief Method set_implementation addr 0x2b7b464 size 0x8 virtual false final false
 void set_implementation(::UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem value) ;

/// @brief Method Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes addr 0x2b7b46c size 0xb4 virtual false final false
 void Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes(ByRef<bool> result) ;

// Ctor Parameters []
explicit ScriptableRuntimeReflectionSystemWrapper() ;

/// @brief Method .ctor addr 0x2b7b454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::ScriptableRuntimeReflectionSystemWrapper, "UnityEngine.Experimental.Rendering", "ScriptableRuntimeReflectionSystemWrapper");
