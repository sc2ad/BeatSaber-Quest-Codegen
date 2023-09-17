#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIConstants;
}
// Type: HoudiniEngineUnity::HEU_HAPIConstants
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9626))
// CS Name: HoudiniEngineUnity.HEU_HAPIConstants
class CORDL_TYPE HEU_HAPIConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_HAPIConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIConstants", modifiers: " const&", def_value: None }]
constexpr HEU_HAPIConstants(HEU_HAPIConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIConstants", modifiers: "&&", def_value: None }]
constexpr HEU_HAPIConstants(HEU_HAPIConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HAPIConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HAPIConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HAPIConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HAPIConstants& operator=(HEU_HAPIConstants&& o) noexcept = default;
  constexpr HEU_HAPIConstants& operator=(HEU_HAPIConstants const& o) noexcept = default;
                


// Fields

/// @brief Field HAPI_POSITION_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_POSITION_VECTOR_SIZE{3};

/// @brief Field HAPI_SCALE_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_SCALE_VECTOR_SIZE{3};

/// @brief Field HAPI_SHEAR_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_SHEAR_VECTOR_SIZE{3};

/// @brief Field HAPI_NORMAL_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_NORMAL_VECTOR_SIZE{3};

/// @brief Field HAPI_QUATERNION_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_QUATERNION_VECTOR_SIZE{4};

/// @brief Field HAPI_EULER_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_EULER_VECTOR_SIZE{3};

/// @brief Field HAPI_UV_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_UV_VECTOR_SIZE{2};

/// @brief Field HAPI_COLOR_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_COLOR_VECTOR_SIZE{4};

/// @brief Field HAPI_CV_VECTOR_SIZE offset 0
static constexpr int32_t  HAPI_CV_VECTOR_SIZE{4};

/// @brief Field HAPI_PRIM_MIN_VERTEX_COUNT offset 0
static constexpr int32_t  HAPI_PRIM_MIN_VERTEX_COUNT{1};

/// @brief Field HAPI_PRIM_MAX_VERTEX_COUNT offset 0
static constexpr int32_t  HAPI_PRIM_MAX_VERTEX_COUNT{16};

/// @brief Field HAPI_INVALID_PARM_ID offset 0
static constexpr int32_t  HAPI_INVALID_PARM_ID{-1};

/// @brief Field HAPI_ATTRIB_POSITION offset 0
static constexpr ::ConstString  HAPI_ATTRIB_POSITION{u"P"};

/// @brief Field HAPI_ATTRIB_UV offset 0
static constexpr ::ConstString  HAPI_ATTRIB_UV{u"uv"};

/// @brief Field HAPI_ATTRIB_UV2 offset 0
static constexpr ::ConstString  HAPI_ATTRIB_UV2{u"uv2"};

/// @brief Field HAPI_ATTRIB_NORMAL offset 0
static constexpr ::ConstString  HAPI_ATTRIB_NORMAL{u"N"};

/// @brief Field HAPI_ATTRIB_TANGENT offset 0
static constexpr ::ConstString  HAPI_ATTRIB_TANGENT{u"tangentu"};

/// @brief Field HAPI_ATTRIB_TANGENT2 offset 0
static constexpr ::ConstString  HAPI_ATTRIB_TANGENT2{u"tangentv"};

/// @brief Field HAPI_ATTRIB_COLOR offset 0
static constexpr ::ConstString  HAPI_ATTRIB_COLOR{u"Cd"};

/// @brief Field HAPI_ATTRIB_NAME offset 0
static constexpr ::ConstString  HAPI_ATTRIB_NAME{u"name"};

/// @brief Field HAPI_ATTRIB_INSTANCE offset 0
static constexpr ::ConstString  HAPI_ATTRIB_INSTANCE{u"instance"};

/// @brief Field HAPI_UNGROUPED_GROUP_NAME offset 0
static constexpr ::ConstString  HAPI_UNGROUPED_GROUP_NAME{u"__ungrouped_group"};

/// @brief Field HAPI_RAW_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_RAW_FORMAT_NAME{u"HAPI_RAW"};

/// @brief Field HAPI_PNG_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_PNG_FORMAT_NAME{u"PNG"};

/// @brief Field HAPI_JPEG_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_JPEG_FORMAT_NAME{u"JPEG"};

/// @brief Field HAPI_BMP_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_BMP_FORMAT_NAME{u"Bitmap"};

/// @brief Field HAPI_TIFF_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_TIFF_FORMAT_NAME{u"TIFF"};

/// @brief Field HAPI_TGA_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_TGA_FORMAT_NAME{u"Targa"};

/// @brief Field HAPI_DEFAULT_IMAGE_FORMAT_NAME offset 0
static constexpr ::ConstString  HAPI_DEFAULT_IMAGE_FORMAT_NAME{u"PNG"};

/// @brief Field HAPI_GLOBAL_NODES_NODE_NAME offset 0
static constexpr ::ConstString  HAPI_GLOBAL_NODES_NODE_NAME{u"GlobalNodes"};

/// @brief Field HAPI_ENV_HIP offset 0
static constexpr ::ConstString  HAPI_ENV_HIP{u"HIP"};

/// @brief Field HAPI_ENV_JOB offset 0
static constexpr ::ConstString  HAPI_ENV_JOB{u"JOB"};

/// @brief Field HAPI_ENV_CLIENT_NAME offset 0
static constexpr ::ConstString  HAPI_ENV_CLIENT_NAME{u"HAPI_CLIENT_NAME"};

/// @brief Field HAPI_CACHE_COP_COOK offset 0
static constexpr ::ConstString  HAPI_CACHE_COP_COOK{u"COP Cook Cache"};

/// @brief Field HAPI_CACHE_COP_FLIPBOOK offset 0
static constexpr ::ConstString  HAPI_CACHE_COP_FLIPBOOK{u"COP Flipbook Cache"};

/// @brief Field HAPI_CACHE_IMAGE offset 0
static constexpr ::ConstString  HAPI_CACHE_IMAGE{u"Image Cache"};

/// @brief Field HAPI_CACHE_OBJ offset 0
static constexpr ::ConstString  HAPI_CACHE_OBJ{u"Object Transform Cache"};

/// @brief Field HAPI_CACHE_GL_TEXTURE offset 0
static constexpr ::ConstString  HAPI_CACHE_GL_TEXTURE{u"OpenGL Texture Cache"};

/// @brief Field HAPI_CACHE_GL_VERTEX offset 0
static constexpr ::ConstString  HAPI_CACHE_GL_VERTEX{u"OpenGL Vertex Cache"};

/// @brief Field HAPI_CACHE_SOP offset 0
static constexpr ::ConstString  HAPI_CACHE_SOP{u"SOP Cache"};

/// @brief Field HAPI_CACHE_VEX offset 0
static constexpr ::ConstString  HAPI_CACHE_VEX{u"VEX File Cache"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HAPIConstants);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HAPIConstants, "HoudiniEngineUnity", "HEU_HAPIConstants");
