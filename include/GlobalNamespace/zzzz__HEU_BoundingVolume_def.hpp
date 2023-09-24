#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class HEU_BoundingVolume;
}
// Type: ::HEU_BoundingVolume
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9527))
// CS Name: HEU_BoundingVolume
class CORDL_TYPE HEU_BoundingVolume : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_BoundingVolume() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BoundingVolume", modifiers: " const&", def_value: None }]
constexpr HEU_BoundingVolume(HEU_BoundingVolume const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BoundingVolume", modifiers: "&&", def_value: None }]
constexpr HEU_BoundingVolume(HEU_BoundingVolume&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_BoundingVolume(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_BoundingVolume& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_BoundingVolume& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_BoundingVolume& operator=(HEU_BoundingVolume&& o) noexcept = default;
  constexpr HEU_BoundingVolume& operator=(HEU_BoundingVolume const& o) noexcept = default;
                


// Properties

 UnityEngine::Collider __declspec(property(get=get_BoundingCollider))  BoundingCollider;


// Methods

/// @brief Method get_BoundingCollider addr 0x1fd73e8 size 0x48 virtual false final false
 UnityEngine::Collider get_BoundingCollider() ;

/// @brief Method GetAllIntersectingObjects addr 0x1fd7430 size 0x2b4 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::GameObject> GetAllIntersectingObjects() ;

static GlobalNamespace::HEU_BoundingVolume New_ctor() ;

/// @brief Method .ctor addr 0x1fd76e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HEU_BoundingVolume);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HEU_BoundingVolume, "", "HEU_BoundingVolume");
