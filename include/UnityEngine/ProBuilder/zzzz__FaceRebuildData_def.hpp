#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
// Type: UnityEngine.ProBuilder::FaceRebuildData
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12067))
// CS Name: UnityEngine.ProBuilder.FaceRebuildData
class CORDL_TYPE FaceRebuildData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FaceRebuildData() = default;

// Ctor Parameters [CppParam { name: "", ty: "FaceRebuildData", modifiers: " const&", def_value: None }]
constexpr FaceRebuildData(FaceRebuildData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FaceRebuildData", modifiers: "&&", def_value: None }]
constexpr FaceRebuildData(FaceRebuildData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FaceRebuildData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FaceRebuildData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FaceRebuildData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FaceRebuildData& operator=(FaceRebuildData&& o) noexcept = default;
  constexpr FaceRebuildData& operator=(FaceRebuildData const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Face __declspec(property(get=__get_face, put=__set_face))  face;

constexpr void __set_face(UnityEngine::ProBuilder::Face value) ;

constexpr UnityEngine::ProBuilder::Face __get_face() const;

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> __get_vertices() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_sharedIndexes, put=__set_sharedIndexes))  sharedIndexes;

constexpr void __set_sharedIndexes(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_sharedIndexes() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_sharedIndexesUV, put=__set_sharedIndexesUV))  sharedIndexesUV;

constexpr void __set_sharedIndexesUV(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_sharedIndexesUV() const;

 int32_t __declspec(property(get=__get__appliedOffset, put=__set__appliedOffset))  _appliedOffset;

constexpr void __set__appliedOffset(int32_t value) ;

constexpr int32_t __get__appliedOffset() const;


// Methods

/// @brief Method Offset addr 0x29ae2e4 size 0x8 virtual false final false
 int32_t Offset() ;

/// @brief Method ToString addr 0x29ae2ec size 0xc8 virtual true final false
 ::StringW ToString() ;

/// @brief Method Apply addr 0x29ae3b4 size 0x184 virtual false final false
static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData> newFaces, UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method Apply addr 0x29ae538 size 0x590 virtual false final false
static void Apply(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::FaceRebuildData> newFaces, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::Dictionary_2<int32_t,int32_t> sharedVertexLookup, System::Collections::Generic::Dictionary_2<int32_t,int32_t> sharedTextureLookup) ;

static UnityEngine::ProBuilder::FaceRebuildData New_ctor() ;

/// @brief Method .ctor addr 0x29aeac8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::FaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::FaceRebuildData, "UnityEngine.ProBuilder", "FaceRebuildData");
