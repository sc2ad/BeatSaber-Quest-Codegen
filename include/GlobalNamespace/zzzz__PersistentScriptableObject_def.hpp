#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PersistentScriptableObject;
}
// Type: ::PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13816))
// CS Name: PersistentScriptableObject
class CORDL_TYPE PersistentScriptableObject : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PersistentScriptableObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: " const&", def_value: None }]
constexpr PersistentScriptableObject(PersistentScriptableObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentScriptableObject", modifiers: "&&", def_value: None }]
constexpr PersistentScriptableObject(PersistentScriptableObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PersistentScriptableObject(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PersistentScriptableObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PersistentScriptableObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PersistentScriptableObject& operator=(PersistentScriptableObject&& o) noexcept = default;
  constexpr PersistentScriptableObject& operator=(PersistentScriptableObject const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x1f79844 size 0x24 virtual true final false
 void OnEnable() ;

// Ctor Parameters []
explicit PersistentScriptableObject() ;

/// @brief Method .ctor addr 0x1f79868 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PersistentScriptableObject);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PersistentScriptableObject, "", "PersistentScriptableObject");
