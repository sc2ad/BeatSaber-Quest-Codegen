#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class TreePrototype;
}
// Type: UnityEngine::TreePrototype
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15443))
// CS Name: UnityEngine.TreePrototype
class CORDL_TYPE TreePrototype : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TreePrototype() = default;

// Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: " const&", def_value: None }]
constexpr TreePrototype(TreePrototype const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TreePrototype", modifiers: "&&", def_value: None }]
constexpr TreePrototype(TreePrototype&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TreePrototype(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TreePrototype& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TreePrototype& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TreePrototype& operator=(TreePrototype&& o) noexcept = default;
  constexpr TreePrototype& operator=(TreePrototype const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get_m_Prefab, put=__set_m_Prefab))  m_Prefab;

constexpr void __set_m_Prefab(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_Prefab() const;

 float_t __declspec(property(get=__get_m_BendFactor, put=__set_m_BendFactor))  m_BendFactor;

constexpr void __set_m_BendFactor(float_t value) ;

constexpr float_t __get_m_BendFactor() const;

 int32_t __declspec(property(get=__get_m_NavMeshLod, put=__set_m_NavMeshLod))  m_NavMeshLod;

constexpr void __set_m_NavMeshLod(int32_t value) ;

constexpr int32_t __get_m_NavMeshLod() const;


// Properties

 UnityEngine::GameObject __declspec(property(get=get_prefab, put=set_prefab))  prefab;

 float_t __declspec(property(get=get_bendFactor, put=set_bendFactor))  bendFactor;

 int32_t __declspec(property(get=get_navMeshLod))  navMeshLod;


// Methods

/// @brief Method get_prefab addr 0x2ba50ec size 0x8 virtual false final false
 UnityEngine::GameObject get_prefab() ;

/// @brief Method set_prefab addr 0x2ba50f4 size 0x8 virtual false final false
 void set_prefab(UnityEngine::GameObject value) ;

/// @brief Method get_bendFactor addr 0x2ba50fc size 0x8 virtual false final false
 float_t get_bendFactor() ;

/// @brief Method set_bendFactor addr 0x2ba5104 size 0x8 virtual false final false
 void set_bendFactor(float_t value) ;

/// @brief Method get_navMeshLod addr 0x2ba510c size 0x8 virtual false final false
 int32_t get_navMeshLod() ;

// Ctor Parameters []
explicit TreePrototype() ;

/// @brief Method .ctor addr 0x2ba5114 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Equals addr 0x2ba511c size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2ba5258 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2ba5180 size 0xd8 virtual false final false
 bool Equals(UnityEngine::TreePrototype other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::TreePrototype);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TreePrototype, "UnityEngine", "TreePrototype");
