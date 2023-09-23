#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBoundingBox;
}
// Type: ::CustomBoundingBox
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13787))
// CS Name: CustomBoundingBox
class CORDL_TYPE CustomBoundingBox : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CustomBoundingBox() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: " const&", def_value: None }]
constexpr CustomBoundingBox(CustomBoundingBox const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBoundingBox", modifiers: "&&", def_value: None }]
constexpr CustomBoundingBox(CustomBoundingBox&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomBoundingBox(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CustomBoundingBox& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomBoundingBox& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomBoundingBox& operator=(CustomBoundingBox&& o) noexcept = default;
  constexpr CustomBoundingBox& operator=(CustomBoundingBox const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__meshFilter() const;

 UnityEngine::Vector3 __declspec(property(get=__get__boundingBoxCenter, put=__set__boundingBoxCenter))  _boundingBoxCenter;

constexpr void __set__boundingBoxCenter(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__boundingBoxCenter() const;

 UnityEngine::Vector3 __declspec(property(get=__get__boundingBoxSize, put=__set__boundingBoxSize))  _boundingBoxSize;

constexpr void __set__boundingBoxSize(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__boundingBoxSize() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;


// Methods

/// @brief Method Awake addr 0x1f76758 size 0x88 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit CustomBoundingBox() ;

/// @brief Method .ctor addr 0x1f767e0 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomBoundingBox);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBoundingBox, "", "CustomBoundingBox");
