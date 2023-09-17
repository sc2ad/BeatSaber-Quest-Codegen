#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputMeshUtility;
}
// Type: HoudiniEngineUnity::HEU_InputMeshUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9789))
// CS Name: HoudiniEngineUnity.HEU_InputMeshUtility
class CORDL_TYPE HEU_InputMeshUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_InputMeshUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: " const&", def_value: None }]
constexpr HEU_InputMeshUtility(HEU_InputMeshUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputMeshUtility", modifiers: "&&", def_value: None }]
constexpr HEU_InputMeshUtility(HEU_InputMeshUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputMeshUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputMeshUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputMeshUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputMeshUtility& operator=(HEU_InputMeshUtility&& o) noexcept = default;
  constexpr HEU_InputMeshUtility& operator=(HEU_InputMeshUtility const& o) noexcept = default;
                


// Methods

/// @brief Method SetMeshPointAttribute addr 0x205baac size 0x28c virtual false final false
static bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::ArrayW<::UnityEngine::Vector3> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem) ;

/// @brief Method SetMeshPointAttribute addr 0x205c3ac size 0x1e8 virtual false final false
static bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::ArrayW<float_t> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method SetMeshVertexAttribute addr 0x205c59c size 0x2a8 virtual false final false
static bool SetMeshVertexAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::ArrayW<::UnityEngine::Vector3> data, ::ArrayW<int32_t> indices, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo, bool bConvertToHoudiniCoordinateSystem) ;

/// @brief Method SetMeshVertexFloatAttribute addr 0x205c844 size 0x214 virtual false final false
static bool SetMeshVertexFloatAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::ArrayW<float_t> data, ::ArrayW<int32_t> indices, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method UploadMeshIntoHoudiniNode addr 0x205ca58 size 0x65c virtual false final false
static bool UploadMeshIntoHoudiniNode(::HoudiniEngineUnity::HEU_SessionBase session, int32_t assetNodeID, int32_t objectID, int32_t geoID, ByRef<::UnityEngine::Mesh> mesh) ;

/// @brief Method SetMeshPointAttribute addr 0x205bd38 size 0x2dc virtual false final false
static bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::ArrayW<::UnityEngine::Vector3Int> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method SetMeshPointAttribute addr 0x205c014 size 0x198 virtual false final false
static bool SetMeshPointAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ::ArrayW<::StringW> data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

/// @brief Method SetMeshDetailAttribute addr 0x205c1ac size 0x200 virtual false final false
static bool SetMeshDetailAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, int32_t tupleSize, ::UnityEngine::Vector3 data, ByRef<::HoudiniEngineUnity::HAPI_PartInfo> partInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputMeshUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputMeshUtility, "HoudiniEngineUnity", "HEU_InputMeshUtility");
