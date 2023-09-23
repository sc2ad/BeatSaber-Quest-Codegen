#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Entity;
}
// Type: UnityEngine.ProBuilder::Entity
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12064))
// CS Name: UnityEngine.ProBuilder.Entity
class CORDL_TYPE Entity : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Entity() = default;

// Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: " const&", def_value: None }]
constexpr Entity(Entity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: "&&", def_value: None }]
constexpr Entity(Entity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Entity(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Entity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Entity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Entity& operator=(Entity&& o) noexcept = default;
  constexpr Entity& operator=(Entity const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::EntityType __declspec(property(get=__get_m_EntityType, put=__set_m_EntityType))  m_EntityType;

constexpr void __set_m_EntityType(UnityEngine::ProBuilder::EntityType value) ;

constexpr UnityEngine::ProBuilder::EntityType __get_m_EntityType() const;


// Properties

 UnityEngine::ProBuilder::EntityType __declspec(property(get=get_entityType))  entityType;


// Methods

/// @brief Method get_entityType addr 0x29ac63c size 0x8 virtual false final false
 UnityEngine::ProBuilder::EntityType get_entityType() ;

/// @brief Method Awake addr 0x29ac644 size 0xc8 virtual false final false
 void Awake() ;

/// @brief Method SetEntity addr 0x29ac70c size 0x8 virtual false final false
 void SetEntity(UnityEngine::ProBuilder::EntityType t) ;

// Ctor Parameters []
explicit Entity() ;

/// @brief Method .ctor addr 0x29ac714 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Entity);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Entity, "UnityEngine.ProBuilder", "Entity");
