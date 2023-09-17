#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshWriteData;
}
// Type: UnityEngine.UIElements::MeshWriteData
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7430))
// CS Name: UnityEngine.UIElements.MeshWriteData
class CORDL_TYPE MeshWriteData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MeshWriteData() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: " const&", def_value: None }]
constexpr MeshWriteData(MeshWriteData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshWriteData", modifiers: "&&", def_value: None }]
constexpr MeshWriteData(MeshWriteData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshWriteData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshWriteData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshWriteData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshWriteData& operator=(MeshWriteData&& o) noexcept = default;
  constexpr MeshWriteData& operator=(MeshWriteData const& o) noexcept = default;
                


// Fields

 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_Vertices, put=__set_m_Vertices))  m_Vertices;

constexpr void __set_m_Vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> __get_m_Vertices() const;

 ::Unity::Collections::NativeSlice_1<uint16_t> __declspec(property(get=__get_m_Indices, put=__set_m_Indices))  m_Indices;

constexpr void __set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value) ;

constexpr ::Unity::Collections::NativeSlice_1<uint16_t> __get_m_Indices() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_UVRegion, put=__set_m_UVRegion))  m_UVRegion;

constexpr void __set_m_UVRegion(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_UVRegion() const;

 int32_t __declspec(property(get=__get_currentIndex, put=__set_currentIndex))  currentIndex;

constexpr void __set_currentIndex(int32_t value) ;

constexpr int32_t __get_currentIndex() const;

 int32_t __declspec(property(get=__get_currentVertex, put=__set_currentVertex))  currentVertex;

constexpr void __set_currentVertex(int32_t value) ;

constexpr int32_t __get_currentVertex() const;


// Properties

 int32_t __declspec(property(get=get_vertexCount))  vertexCount;

 int32_t __declspec(property(get=get_indexCount))  indexCount;

 ::UnityEngine::Rect __declspec(property(get=get_uvRegion))  uvRegion;


// Methods

// Ctor Parameters []
explicit MeshWriteData() ;

/// @brief Method .ctor addr 0x2d02308 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_vertexCount addr 0x2d02310 size 0x48 virtual false final false
 int32_t get_vertexCount() ;

/// @brief Method get_indexCount addr 0x2d02358 size 0x48 virtual false final false
 int32_t get_indexCount() ;

/// @brief Method get_uvRegion addr 0x2d023a0 size 0xc virtual false final false
 ::UnityEngine::Rect get_uvRegion() ;

/// @brief Method SetNextVertex addr 0x2d023ac size 0x9c virtual false final false
 void SetNextVertex(::UnityEngine::UIElements::Vertex vertex) ;

/// @brief Method SetNextIndex addr 0x2d02448 size 0x64 virtual false final false
 void SetNextIndex(uint16_t index) ;

/// @brief Method SetAllVertices addr 0x2d024ac size 0xd8 virtual false final false
 void SetAllVertices(::ArrayW<::UnityEngine::UIElements::Vertex> vertices) ;

/// @brief Method SetAllIndices addr 0x2d02584 size 0xd8 virtual false final false
 void SetAllIndices(::ArrayW<uint16_t> indices) ;

/// @brief Method Reset addr 0x2d0265c size 0x4c virtual false final false
 void Reset(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices) ;

/// @brief Method Reset addr 0x2d026a8 size 0x18 virtual false final false
 void Reset(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Rect uvRegion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MeshWriteData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshWriteData, "UnityEngine.UIElements", "MeshWriteData");
