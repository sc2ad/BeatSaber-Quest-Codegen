#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct UIVertex;
}
// Forward declare root types
namespace UnityEngine::UI {
class VertexHelper;
}
// Type: UnityEngine.UI::VertexHelper
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13080))
// CS Name: UnityEngine.UI.VertexHelper
class CORDL_TYPE VertexHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~VertexHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: " const&", def_value: None }]
constexpr VertexHelper(VertexHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VertexHelper", modifiers: "&&", def_value: None }]
constexpr VertexHelper(VertexHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VertexHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VertexHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VertexHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VertexHelper& operator=(VertexHelper&& o) noexcept = default;
  constexpr VertexHelper& operator=(VertexHelper const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_m_Positions, put=__set_m_Positions))  m_Positions;

constexpr void __set_m_Positions(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_m_Positions() const;

 System::Collections::Generic::List_1<UnityEngine::Color32> __declspec(property(get=__get_m_Colors, put=__set_m_Colors))  m_Colors;

constexpr void __set_m_Colors(System::Collections::Generic::List_1<UnityEngine::Color32> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Color32> __get_m_Colors() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Uv0S, put=__set_m_Uv0S))  m_Uv0S;

constexpr void __set_m_Uv0S(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Uv0S() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Uv1S, put=__set_m_Uv1S))  m_Uv1S;

constexpr void __set_m_Uv1S(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Uv1S() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Uv2S, put=__set_m_Uv2S))  m_Uv2S;

constexpr void __set_m_Uv2S(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Uv2S() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Uv3S, put=__set_m_Uv3S))  m_Uv3S;

constexpr void __set_m_Uv3S(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Uv3S() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_m_Normals, put=__set_m_Normals))  m_Normals;

constexpr void __set_m_Normals(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_m_Normals() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Tangents, put=__set_m_Tangents))  m_Tangents;

constexpr void __set_m_Tangents(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Tangents() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_Indices, put=__set_m_Indices))  m_Indices;

constexpr void __set_m_Indices(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_Indices() const;

static UnityEngine::Vector4 __declspec(property(get=__get_s_DefaultTangent, put=__set_s_DefaultTangent))  s_DefaultTangent;

static void __set_s_DefaultTangent(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_s_DefaultTangent() ;

static UnityEngine::Vector3 __declspec(property(get=__get_s_DefaultNormal, put=__set_s_DefaultNormal))  s_DefaultNormal;

static void __set_s_DefaultNormal(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_s_DefaultNormal() ;

 bool __declspec(property(get=__get_m_ListsInitalized, put=__set_m_ListsInitalized))  m_ListsInitalized;

constexpr void __set_m_ListsInitalized(bool value) ;

constexpr bool __get_m_ListsInitalized() const;


// Properties

 int32_t __declspec(property(get=get_currentVertCount))  currentVertCount;

 int32_t __declspec(property(get=get_currentIndexCount))  currentIndexCount;


// Methods

static UnityEngine::UI::VertexHelper New_ctor() ;

/// @brief Method .ctor addr 0x2c16098 size 0x8 virtual false final false
 void _ctor() ;

static UnityEngine::UI::VertexHelper New_ctor(UnityEngine::Mesh m) ;

/// @brief Method .ctor addr 0x2c160a0 size 0x238 virtual false final false
 void _ctor(UnityEngine::Mesh m) ;

/// @brief Method InitializeListIfRequired addr 0x2c162d8 size 0x190 virtual false final false
 void InitializeListIfRequired() ;

/// @brief Method Dispose addr 0x2c16468 size 0x1b4 virtual true final true
 void Dispose() ;

/// @brief Method Clear addr 0x2c062e8 size 0x11c virtual false final false
 void Clear() ;

/// @brief Method get_currentVertCount addr 0x2c1661c size 0x4c virtual false final false
 int32_t get_currentVertCount() ;

/// @brief Method get_currentIndexCount addr 0x2c16668 size 0x4c virtual false final false
 int32_t get_currentIndexCount() ;

/// @brief Method PopulateUIVertex addr 0x2c166b4 size 0x160 virtual false final false
 void PopulateUIVertex(ByRef<UnityEngine::UIVertex> vertex, int32_t i) ;

/// @brief Method SetUIVertex addr 0x2c16814 size 0x15c virtual false final false
 void SetUIVertex(UnityEngine::UIVertex vertex, int32_t i) ;

/// @brief Method FillMesh addr 0x2c16970 size 0x164 virtual false final false
 void FillMesh(UnityEngine::Mesh mesh) ;

/// @brief Method AddVert addr 0x2c16ad4 size 0x4fc virtual false final false
 void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector4 uv2, UnityEngine::Vector4 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) ;

/// @brief Method AddVert addr 0x2c16fd0 size 0x110 virtual false final false
 void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0, UnityEngine::Vector4 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) ;

/// @brief Method AddVert addr 0x2c06404 size 0x130 virtual false final false
 void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector4 uv0) ;

/// @brief Method AddVert addr 0x2c170e0 size 0x94 virtual false final false
 void AddVert(UnityEngine::UIVertex v) ;

/// @brief Method AddTriangle addr 0x2c06534 size 0x17c virtual false final false
 void AddTriangle(int32_t idx0, int32_t idx1, int32_t idx2) ;

/// @brief Method AddUIVertexQuad addr 0x2c130c8 size 0x110 virtual false final false
 void AddUIVertexQuad(::ArrayW<UnityEngine::UIVertex> verts) ;

/// @brief Method AddUIVertexStream addr 0x2c17174 size 0xac virtual false final false
 void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts, System::Collections::Generic::List_1<int32_t> indices) ;

/// @brief Method AddUIVertexTriangleStream addr 0x2c17220 size 0x50 virtual false final false
 void AddUIVertexTriangleStream(System::Collections::Generic::List_1<UnityEngine::UIVertex> verts) ;

/// @brief Method GetUIVertexStream addr 0x2c17270 size 0x50 virtual false final false
 void GetUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex> stream) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::VertexHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::VertexHelper, "UnityEngine.UI", "VertexHelper");
