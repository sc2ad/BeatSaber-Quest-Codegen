#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace RootMotion {
class Hierarchy;
}
// Type: RootMotion::Hierarchy
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12433))
// CS Name: RootMotion.Hierarchy
class CORDL_TYPE Hierarchy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Hierarchy() = default;

// Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: " const&", def_value: None }]
constexpr Hierarchy(Hierarchy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Hierarchy", modifiers: "&&", def_value: None }]
constexpr Hierarchy(Hierarchy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Hierarchy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Hierarchy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Hierarchy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Hierarchy& operator=(Hierarchy&& o) noexcept = default;
  constexpr Hierarchy& operator=(Hierarchy const& o) noexcept = default;
                


// Methods

/// @brief Method HierarchyIsValid addr 0x11b2940 size 0x84 virtual false final false
static bool HierarchyIsValid(::ArrayW<UnityEngine::Transform> bones) ;

/// @brief Method ContainsDuplicate addr 0x11b2834 size 0x10c virtual false final false
static UnityEngine::Object ContainsDuplicate(::ArrayW<UnityEngine::Object> objects) ;

/// @brief Method IsAncestor addr 0x11b0c24 size 0x130 virtual false final false
static bool IsAncestor(UnityEngine::Transform transform, UnityEngine::Transform ancestor) ;

/// @brief Method ContainsChild addr 0x11b1234 size 0x110 virtual false final false
static bool ContainsChild(UnityEngine::Transform transform, UnityEngine::Transform child) ;

/// @brief Method AddAncestors addr 0x11b0ea4 size 0x240 virtual false final false
static void AddAncestors(UnityEngine::Transform transform, UnityEngine::Transform blocker, ByRef<::ArrayW<UnityEngine::Transform>> array) ;

/// @brief Method GetAncestor addr 0x11b2b58 size 0xf4 virtual false final false
static UnityEngine::Transform GetAncestor(UnityEngine::Transform transform, int32_t minChildCount) ;

/// @brief Method GetFirstCommonAncestor addr 0x11b0d54 size 0x150 virtual false final false
static UnityEngine::Transform GetFirstCommonAncestor(UnityEngine::Transform t1, UnityEngine::Transform t2) ;

/// @brief Method GetFirstCommonAncestor addr 0x11b2c4c size 0x164 virtual false final false
static UnityEngine::Transform GetFirstCommonAncestor(::ArrayW<UnityEngine::Transform> transforms) ;

/// @brief Method GetFirstCommonAncestorRecursive addr 0x11b2fb8 size 0x188 virtual false final false
static UnityEngine::Transform GetFirstCommonAncestorRecursive(UnityEngine::Transform transform, ::ArrayW<UnityEngine::Transform> transforms) ;

/// @brief Method IsCommonAncestor addr 0x11b2db0 size 0x208 virtual false final false
static bool IsCommonAncestor(UnityEngine::Transform transform, ::ArrayW<UnityEngine::Transform> transforms) ;

// Ctor Parameters []
explicit Hierarchy() ;

/// @brief Method .ctor addr 0x11b3140 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::Hierarchy);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Hierarchy, "RootMotion", "Hierarchy");
