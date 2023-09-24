#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MarkSceneAsPersistent;
}
// Type: ::MarkSceneAsPersistent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13867))
// CS Name: MarkSceneAsPersistent
class CORDL_TYPE MarkSceneAsPersistent : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MarkSceneAsPersistent() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkSceneAsPersistent", modifiers: " const&", def_value: None }]
constexpr MarkSceneAsPersistent(MarkSceneAsPersistent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkSceneAsPersistent", modifiers: "&&", def_value: None }]
constexpr MarkSceneAsPersistent(MarkSceneAsPersistent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarkSceneAsPersistent(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MarkSceneAsPersistent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarkSceneAsPersistent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarkSceneAsPersistent& operator=(MarkSceneAsPersistent&& o) noexcept = default;
  constexpr MarkSceneAsPersistent& operator=(MarkSceneAsPersistent const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method Awake addr 0x1f82988 size 0x54 virtual false final false
 void Awake() ;

static GlobalNamespace::MarkSceneAsPersistent New_ctor() ;

/// @brief Method .ctor addr 0x1f829dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MarkSceneAsPersistent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkSceneAsPersistent, "", "MarkSceneAsPersistent");
