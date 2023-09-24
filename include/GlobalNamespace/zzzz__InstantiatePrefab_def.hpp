#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class InstantiatePrefab;
}
// Type: ::InstantiatePrefab
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13809))
// CS Name: InstantiatePrefab
class CORDL_TYPE InstantiatePrefab : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InstantiatePrefab() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiatePrefab", modifiers: " const&", def_value: None }]
constexpr InstantiatePrefab(InstantiatePrefab const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantiatePrefab", modifiers: "&&", def_value: None }]
constexpr InstantiatePrefab(InstantiatePrefab&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstantiatePrefab(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InstantiatePrefab& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstantiatePrefab& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstantiatePrefab& operator=(InstantiatePrefab&& o) noexcept = default;
  constexpr InstantiatePrefab& operator=(InstantiatePrefab const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__prefab, put=__set__prefab))  _prefab;

constexpr void __set__prefab(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__prefab() const;


// Methods

/// @brief Method Awake addr 0x1f78a44 size 0xfc virtual false final false
 void Awake() ;

static GlobalNamespace::InstantiatePrefab New_ctor() ;

/// @brief Method .ctor addr 0x1f78b40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::InstantiatePrefab);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstantiatePrefab, "", "InstantiatePrefab");
