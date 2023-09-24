#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class OnWillRenderObjectTrigger;
}
// Type: ::OnWillRenderObjectTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14738))
// CS Name: OnWillRenderObjectTrigger
class CORDL_TYPE OnWillRenderObjectTrigger : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~OnWillRenderObjectTrigger() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: " const&", def_value: None }]
constexpr OnWillRenderObjectTrigger(OnWillRenderObjectTrigger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnWillRenderObjectTrigger", modifiers: "&&", def_value: None }]
constexpr OnWillRenderObjectTrigger(OnWillRenderObjectTrigger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnWillRenderObjectTrigger(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OnWillRenderObjectTrigger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnWillRenderObjectTrigger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnWillRenderObjectTrigger& operator=(OnWillRenderObjectTrigger&& o) noexcept = default;
  constexpr OnWillRenderObjectTrigger& operator=(OnWillRenderObjectTrigger const& o) noexcept = default;
                


// Fields

 UnityEngine::Shader __declspec(property(get=__get__overrideShader, put=__set__overrideShader))  _overrideShader;

constexpr void __set__overrideShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__overrideShader() const;

 int32_t __declspec(property(get=__get__renderQueue, put=__set__renderQueue))  _renderQueue;

constexpr void __set__renderQueue(int32_t value) ;

constexpr int32_t __get__renderQueue() const;

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__meshFilter() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get__meshRenderer() const;


// Methods

/// @brief Method OnEnable addr 0x1fa2f34 size 0x3f8 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1fa332c size 0x30 virtual false final false
 void OnDisable() ;

static GlobalNamespace::OnWillRenderObjectTrigger New_ctor() ;

/// @brief Method .ctor addr 0x1fa335c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OnWillRenderObjectTrigger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnWillRenderObjectTrigger, "", "OnWillRenderObjectTrigger");
