#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
namespace {
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshFilter;
}
// Type: UnityEngine::MeshFilter
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10023))
// CS Name: UnityEngine.MeshFilter
class CORDL_TYPE MeshFilter : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeshFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: " const&", def_value: None }]
constexpr MeshFilter(MeshFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshFilter", modifiers: "&&", def_value: None }]
constexpr MeshFilter(MeshFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshFilter(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr MeshFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshFilter& operator=(MeshFilter&& o) noexcept = default;
  constexpr MeshFilter& operator=(MeshFilter const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Mesh __declspec(property(get=get_sharedMesh, put=set_sharedMesh))  sharedMesh;

 ::UnityEngine::Mesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;


// Methods

/// @brief Method DontStripMeshFilter addr 0x2b3e924 size 0x4 virtual false final false
 void DontStripMeshFilter() ;

/// @brief Method get_sharedMesh addr 0x2b3e928 size 0x3c virtual false final false
 ::UnityEngine::Mesh get_sharedMesh() ;

/// @brief Method set_sharedMesh addr 0x2b3e964 size 0x44 virtual false final false
 void set_sharedMesh(::UnityEngine::Mesh value) ;

/// @brief Method get_mesh addr 0x2b3e9a8 size 0x3c virtual false final false
 ::UnityEngine::Mesh get_mesh() ;

/// @brief Method set_mesh addr 0x2b3e9e4 size 0x44 virtual false final false
 void set_mesh(::UnityEngine::Mesh value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::MeshFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshFilter, "UnityEngine", "MeshFilter");
