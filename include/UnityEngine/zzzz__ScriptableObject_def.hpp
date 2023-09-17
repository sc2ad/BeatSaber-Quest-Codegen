#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class ScriptableObject;
}
// Type: UnityEngine::ScriptableObject
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10151))
// CS Name: UnityEngine.ScriptableObject
class CORDL_TYPE ScriptableObject : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScriptableObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: " const&", def_value: None }]
constexpr ScriptableObject(ScriptableObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObject", modifiers: "&&", def_value: None }]
constexpr ScriptableObject(ScriptableObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObject(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr ScriptableObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObject& operator=(ScriptableObject&& o) noexcept = default;
  constexpr ScriptableObject& operator=(ScriptableObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ScriptableObject() ;

/// @brief Method .ctor addr 0x2b5a2e4 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method CreateInstance addr 0x2b5a3a0 size 0x40 virtual false final false
static ::UnityEngine::ScriptableObject CreateInstance(::System::Type type) ;

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T CreateInstance() ;

/// @brief Method CreateScriptableObject addr 0x2b5a364 size 0x3c virtual false final false
static void CreateScriptableObject(::UnityEngine::ScriptableObject self) ;

/// @brief Method CreateScriptableObjectInstanceFromType addr 0x2b5a3e0 size 0x44 virtual false final false
static ::UnityEngine::ScriptableObject CreateScriptableObjectInstanceFromType(::System::Type type, bool applyDefaultsAndReset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptableObject, "UnityEngine", "ScriptableObject");
