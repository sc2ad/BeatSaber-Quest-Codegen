#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class FailedToLoadScriptObject;
}
// Type: UnityEngine::FailedToLoadScriptObject
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10182))
// CS Name: UnityEngine.FailedToLoadScriptObject
class CORDL_TYPE FailedToLoadScriptObject : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FailedToLoadScriptObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "FailedToLoadScriptObject", modifiers: " const&", def_value: None }]
constexpr FailedToLoadScriptObject(FailedToLoadScriptObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FailedToLoadScriptObject", modifiers: "&&", def_value: None }]
constexpr FailedToLoadScriptObject(FailedToLoadScriptObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FailedToLoadScriptObject(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr FailedToLoadScriptObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FailedToLoadScriptObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FailedToLoadScriptObject& operator=(FailedToLoadScriptObject&& o) noexcept = default;
  constexpr FailedToLoadScriptObject& operator=(FailedToLoadScriptObject const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::FailedToLoadScriptObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FailedToLoadScriptObject, "UnityEngine", "FailedToLoadScriptObject");
