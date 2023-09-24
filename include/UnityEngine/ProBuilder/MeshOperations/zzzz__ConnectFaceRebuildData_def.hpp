#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class ConnectFaceRebuildData;
}
// Type: UnityEngine.ProBuilder.MeshOperations::ConnectFaceRebuildData
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12192))
// CS Name: UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
class CORDL_TYPE ConnectFaceRebuildData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ConnectFaceRebuildData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectFaceRebuildData", modifiers: " const&", def_value: None }]
constexpr ConnectFaceRebuildData(ConnectFaceRebuildData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectFaceRebuildData", modifiers: "&&", def_value: None }]
constexpr ConnectFaceRebuildData(ConnectFaceRebuildData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectFaceRebuildData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectFaceRebuildData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectFaceRebuildData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectFaceRebuildData& operator=(ConnectFaceRebuildData&& o) noexcept = default;
  constexpr ConnectFaceRebuildData& operator=(ConnectFaceRebuildData const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::FaceRebuildData __declspec(property(get=__get_faceRebuildData, put=__set_faceRebuildData))  faceRebuildData;

constexpr void __set_faceRebuildData(UnityEngine::ProBuilder::FaceRebuildData value) ;

constexpr UnityEngine::ProBuilder::FaceRebuildData __get_faceRebuildData() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_newVertexIndexes, put=__set_newVertexIndexes))  newVertexIndexes;

constexpr void __set_newVertexIndexes(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_newVertexIndexes() const;


// Methods

static UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData New_ctor(UnityEngine::ProBuilder::FaceRebuildData faceRebuildData, System::Collections::Generic::List_1<int32_t> newVertexIndexes) ;

/// @brief Method .ctor addr 0x2a0da64 size 0x2c virtual false final false
 void _ctor(UnityEngine::ProBuilder::FaceRebuildData faceRebuildData, System::Collections::Generic::List_1<int32_t> newVertexIndexes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData, "UnityEngine.ProBuilder.MeshOperations", "ConnectFaceRebuildData");
