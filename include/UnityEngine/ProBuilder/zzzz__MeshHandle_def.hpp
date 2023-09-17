#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshHandle;
}
// Type: UnityEngine.ProBuilder::MeshHandle
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12082))
// CS Name: UnityEngine.ProBuilder.MeshHandle
class CORDL_TYPE MeshHandle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MeshHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: " const&", def_value: None }]
constexpr MeshHandle(MeshHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshHandle", modifiers: "&&", def_value: None }]
constexpr MeshHandle(MeshHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshHandle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshHandle& operator=(MeshHandle&& o) noexcept = default;
  constexpr MeshHandle& operator=(MeshHandle const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_m_Transform() const;

 ::UnityEngine::Mesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_m_Mesh() const;


// Properties

 ::UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;


// Methods

/// @brief Method get_mesh addr 0x29b8788 size 0x8 virtual false final false
 ::UnityEngine::Mesh get_mesh() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "mesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: None }]
explicit MeshHandle(::UnityEngine::Transform transform, ::UnityEngine::Mesh mesh) ;

/// @brief Method .ctor addr 0x29b8790 size 0x2c virtual false final false
 void _ctor(::UnityEngine::Transform transform, ::UnityEngine::Mesh mesh) ;

/// @brief Method DrawMeshNow addr 0x29b87bc size 0x128 virtual false final false
 void DrawMeshNow(int32_t submeshIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshHandle, "UnityEngine.ProBuilder", "MeshHandle");
