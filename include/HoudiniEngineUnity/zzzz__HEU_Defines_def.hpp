#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Defines;
}
// Type: HoudiniEngineUnity::HEU_Defines
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9612))
// CS Name: HoudiniEngineUnity.HEU_Defines
class CORDL_TYPE HEU_Defines : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_Defines() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Defines", modifiers: " const&", def_value: None }]
constexpr HEU_Defines(HEU_Defines const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Defines", modifiers: "&&", def_value: None }]
constexpr HEU_Defines(HEU_Defines&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Defines(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_Defines& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Defines& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Defines& operator=(HEU_Defines&& o) noexcept = default;
  constexpr HEU_Defines& operator=(HEU_Defines const& o) noexcept = default;
                


// Fields

/// @brief Field HEU_PRODUCT_NAME offset 0
static constexpr ::ConstString  HEU_PRODUCT_NAME{u"HoudiniEngine"};

/// @brief Field HEU_NAME offset 0
static constexpr ::ConstString  HEU_NAME{u"Houdini Engine"};

static ::StringW __declspec(property(get=__get_HEU_PLUGIN_PATH, put=__set_HEU_PLUGIN_PATH))  HEU_PLUGIN_PATH;

static void __set_HEU_PLUGIN_PATH(::StringW value) ;

static ::StringW __get_HEU_PLUGIN_PATH() ;

static ::StringW __declspec(property(get=__get_HEU_TEXTURES_PATH, put=__set_HEU_TEXTURES_PATH))  HEU_TEXTURES_PATH;

static void __set_HEU_TEXTURES_PATH(::StringW value) ;

static ::StringW __get_HEU_TEXTURES_PATH() ;

static ::StringW __declspec(property(get=__get_HEU_BAKED_ASSETS_PATH, put=__set_HEU_BAKED_ASSETS_PATH))  HEU_BAKED_ASSETS_PATH;

static void __set_HEU_BAKED_ASSETS_PATH(::StringW value) ;

static ::StringW __get_HEU_BAKED_ASSETS_PATH() ;

static ::StringW __declspec(property(get=__get_HEU_ENGINE_ASSETS, put=__set_HEU_ENGINE_ASSETS))  HEU_ENGINE_ASSETS;

static void __set_HEU_ENGINE_ASSETS(::StringW value) ;

static ::StringW __get_HEU_ENGINE_ASSETS() ;

/// @brief Field HAPI_PATH offset 0
static constexpr ::ConstString  HAPI_PATH{u"HAPI_PATH"};

/// @brief Field HEU_ENVPATH_PREFIX offset 0
static constexpr ::ConstString  HEU_ENVPATH_PREFIX{u"HEU_ENVPATH_"};

/// @brief Field HEU_ENVPATH_KEY offset 0
static constexpr ::ConstString  HEU_ENVPATH_KEY{u"$"};

/// @brief Field HEU_INVALID_NODE_ID offset 0
static constexpr int32_t  HEU_INVALID_NODE_ID{-1};

/// @brief Field HEU_DEFAULT_ASSET_NAME offset 0
static constexpr ::ConstString  HEU_DEFAULT_ASSET_NAME{u"HoudiniAssetRoot"};

/// @brief Field HEU_SESSION_PIPENAME offset 0
static constexpr ::ConstString  HEU_SESSION_PIPENAME{u"hapi"};

/// @brief Field HEU_SESSION_LOCALHOST offset 0
static constexpr ::ConstString  HEU_SESSION_LOCALHOST{u"localhost"};

/// @brief Field HEU_SESSION_PORT offset 0
static constexpr int32_t  HEU_SESSION_PORT{9090};

/// @brief Field HEU_SESSION_TIMEOUT offset 0
static constexpr float_t  HEU_SESSION_TIMEOUT{10000};

/// @brief Field HEU_SESSION_AUTOCLOSE offset 0
static constexpr bool  HEU_SESSION_AUTOCLOSE{true};

/// @brief Field HAPI_MAX_PAGE_SIZE offset 0
static constexpr int32_t  HAPI_MAX_PAGE_SIZE{20000};

/// @brief Field HAPI_SEC_BEFORE_PROGRESS_BAR_SHOW offset 0
static constexpr int32_t  HAPI_SEC_BEFORE_PROGRESS_BAR_SHOW{3};

/// @brief Field HAPI_MAX_VERTICES_PER_FACE offset 0
static constexpr int32_t  HAPI_MAX_VERTICES_PER_FACE{3};

/// @brief Field HAPI_CURVE_REFINE_TO_LINEAR offset 0
static constexpr bool  HAPI_CURVE_REFINE_TO_LINEAR{true};

/// @brief Field HAPI_CURVE_LOD offset 0
static constexpr float_t  HAPI_CURVE_LOD{8};

/// @brief Field HAPI_VOLUME_POSITION_MULT offset 0
static constexpr float_t  HAPI_VOLUME_POSITION_MULT{2};

/// @brief Field HAPI_VOLUME_SURFACE_MAX_PT_PER_C offset 0
static constexpr float_t  HAPI_VOLUME_SURFACE_MAX_PT_PER_C{64000};

/// @brief Field HAPI_VOLUME_SURFACE_DELTA_MULT offset 0
static constexpr float_t  HAPI_VOLUME_SURFACE_DELTA_MULT{1.2};

/// @brief Field HAPI_VOLUME_SURFACE_PT_SIZE_MULT offset 0
static constexpr float_t  HAPI_VOLUME_SURFACE_PT_SIZE_MULT{1800};

/// @brief Field HAPI_ATTRIB_ORIENT offset 0
static constexpr ::ConstString  HAPI_ATTRIB_ORIENT{u"orient"};

/// @brief Field HAPI_ATTRIB_ROTATION offset 0
static constexpr ::ConstString  HAPI_ATTRIB_ROTATION{u"rot"};

/// @brief Field HAPI_ATTRIB_SCALE offset 0
static constexpr ::ConstString  HAPI_ATTRIB_SCALE{u"scale"};

/// @brief Field HAPI_ATTRIB_ALPHA offset 0
static constexpr ::ConstString  HAPI_ATTRIB_ALPHA{u"Alpha"};

/// @brief Field HAPI_HANDLE_TRANSFORM offset 0
static constexpr ::ConstString  HAPI_HANDLE_TRANSFORM{u"xform"};

/// @brief Field HAPI_MAX_UVS offset 0
static constexpr int32_t  HAPI_MAX_UVS{8};

/// @brief Field HAPI_OBJMERGE_TRANSFORM_PARAM offset 0
static constexpr ::ConstString  HAPI_OBJMERGE_TRANSFORM_PARAM{u"xformtype"};

/// @brief Field HAPI_OBJMERGE_PACK_GEOMETRY offset 0
static constexpr ::ConstString  HAPI_OBJMERGE_PACK_GEOMETRY{u"pack"};

/// @brief Field NO_EXISTING_SESSION offset 0
static constexpr ::ConstString  NO_EXISTING_SESSION{u"No existing session."};

/// @brief Field HEU_ERROR_TITLE offset 0
static constexpr ::ConstString  HEU_ERROR_TITLE{u"Houdini Engine Error"};

/// @brief Field HEU_INSTALL_INFO offset 0
static constexpr ::ConstString  HEU_INSTALL_INFO{u"Houdini Engine Installation Info"};

/// @brief Field PLUGIN_STORE_KEYS offset 0
static constexpr ::ConstString  PLUGIN_STORE_KEYS{u"HoudiniEnginePluginKeys"};

/// @brief Field PLUGIN_STORE_DATA offset 0
static constexpr ::ConstString  PLUGIN_STORE_DATA{u"HoudiniEnginePluginData"};

/// @brief Field PLUGIN_SESSION_DATA offset 0
static constexpr ::ConstString  PLUGIN_SESSION_DATA{u"HoudiniEngineSession"};

/// @brief Field PLUGIN_SETTINGS_FILE offset 0
static constexpr ::ConstString  PLUGIN_SETTINGS_FILE{u"heu_settings.ini"};

/// @brief Field PLUGIN_SESSION_FILE offset 0
static constexpr ::ConstString  PLUGIN_SESSION_FILE{u"heu_session.txt"};

/// @brief Field COOK_LOGS_FILE offset 0
static constexpr ::ConstString  COOK_LOGS_FILE{u"cook_logs_file.txt"};

/// @brief Field DEFAULT_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_COLLISION_GEO{u"collision_geo"};

/// @brief Field DEFAULT_RENDERED_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_RENDERED_COLLISION_GEO{u"rendered_collision_geo"};

/// @brief Field DEFAULT_RENDERED_CONVEX_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_RENDERED_CONVEX_COLLISION_GEO{u"rendered_convex_collision_geo"};

/// @brief Field DEFAULT_CONVEX_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_CONVEX_COLLISION_GEO{u"convex"};

/// @brief Field DEFAULT_SIMPLE_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_SIMPLE_COLLISION_GEO{u"collision_geo_simple"};

/// @brief Field DEFAULT_SIMPLE_RENDERED_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_SIMPLE_RENDERED_COLLISION_GEO{u"rendered_collision_geo_simple"};

/// @brief Field DEFAULT_SIMPLE_RENDERED_CONVEX_COLLISION_GEO offset 0
static constexpr ::ConstString  DEFAULT_SIMPLE_RENDERED_CONVEX_COLLISION_GEO{u"rendered_convex_collision_geo_simple"};

/// @brief Field DEFAULT_COLLISION_TRIGGER offset 0
static constexpr ::ConstString  DEFAULT_COLLISION_TRIGGER{u"trigger"};

/// @brief Field DEFAULT_UNITY_MATERIAL_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_MATERIAL_ATTR{u"unity_material"};

/// @brief Field DEFAULT_UNITY_SUBMATERIAL_NAME_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_SUBMATERIAL_NAME_ATTR{u"unity_sub_material_name"};

/// @brief Field DEFAULT_UNITY_SUBMATERIAL_INDEX_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_SUBMATERIAL_INDEX_ATTR{u"unity_sub_material_index"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_DIFFUSE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_DIFFUSE_ATTR{u"unity_hf_texture_diffuse"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_MASK_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_MASK_ATTR{u"unity_hf_texture_mask"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_NORMAL_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TEXTURE_NORMAL_ATTR{u"unity_hf_texture_normal"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_NORMAL_SCALE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_NORMAL_SCALE_ATTR{u"unity_hf_normal_scale"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_METALLIC_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_METALLIC_ATTR{u"unity_hf_metallic"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_SMOOTHNESS_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_SMOOTHNESS_ATTR{u"unity_hf_smoothness"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_SPECULAR_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_SPECULAR_ATTR{u"unity_hf_specular"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TILE_OFFSET_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TILE_OFFSET_ATTR{u"unity_hf_tile_offset"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TILE_SIZE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TILE_SIZE_ATTR{u"unity_hf_tile_size"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_FILE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_FILE_ATTR{u"unity_hf_terraindata_file"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_FILE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_FILE_ATTR{u"unity_hf_terraindata_export_file"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINLAYER_FILE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TERRAINLAYER_FILE_ATTR{u"unity_hf_terrainlayer_file"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_PATH offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_TERRAINDATA_EXPORT_PATH{u"unity_hf_terraindata_export_path"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_HEIGHT_RANGE offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_HEIGHT_RANGE{u"unity_hf_height_range"};

/// @brief Field DEFAULT_UNITY_HEIGHTFIELD_YPOS offset 0
static constexpr ::ConstString  DEFAULT_UNITY_HEIGHTFIELD_YPOS{u"unity_hf_ypos"};

/// @brief Field HEIGHTFIELD_TREEPROTOTYPE offset 0
static constexpr ::ConstString  HEIGHTFIELD_TREEPROTOTYPE{u"unity_hf_tree_prototype"};

/// @brief Field HEIGHTFIELD_TREEINSTANCE_PROTOTYPEINDEX offset 0
static constexpr ::ConstString  HEIGHTFIELD_TREEINSTANCE_PROTOTYPEINDEX{u"unity_hf_treeinstance_prototypeindex"};

/// @brief Field HEIGHTFIELD_TREEINSTANCE_HEIGHTSCALE offset 0
static constexpr ::ConstString  HEIGHTFIELD_TREEINSTANCE_HEIGHTSCALE{u"unity_hf_treeinstance_heightscale"};

/// @brief Field HEIGHTFIELD_TREEINSTANCE_WIDTHSCALE offset 0
static constexpr ::ConstString  HEIGHTFIELD_TREEINSTANCE_WIDTHSCALE{u"unity_hf_treeinstance_widthscale"};

/// @brief Field HEIGHTFIELD_TREEINSTANCE_LIGHTMAPCOLOR offset 0
static constexpr ::ConstString  HEIGHTFIELD_TREEINSTANCE_LIGHTMAPCOLOR{u"unity_hf_treeinstance_lightmapcolor"};

/// @brief Field HEIGHTFIELD_DETAIL_RESOLUTION_PER_PATCH offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_RESOLUTION_PER_PATCH{u"unity_hf_detail_resolution_patch"};

/// @brief Field HEIGHTFIELD_UNITY_TILE offset 0
static constexpr ::ConstString  HEIGHTFIELD_UNITY_TILE{u"unity_hf_tile"};

/// @brief Field HEIGHTFIELD_DETAIL_DISTANCE offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_DISTANCE{u"unity_hf_detail_distance"};

/// @brief Field HEIGHTFIELD_DETAIL_DENSITY offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_DENSITY{u"unity_hf_detail_density"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_PREFAB offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_PREFAB{u"unity_hf_detail_prototype_prefab"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_TEXTURE offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_TEXTURE{u"unity_hf_detail_prototype_texture"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_BENDFACTOR offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_BENDFACTOR{u"unity_hf_detail_prototype_bendfactor"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_DRYCOLOR offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_DRYCOLOR{u"unity_hf_detail_prototype_drycolor"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_HEALTHYCOLOR offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_HEALTHYCOLOR{u"unity_hf_detail_prototype_healthycolor"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MAXHEIGHT offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_MAXHEIGHT{u"unity_hf_detail_prototype_maxheight"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MAXWIDTH offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_MAXWIDTH{u"unity_hf_detail_prototype_maxwidth"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MINHEIGHT offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_MINHEIGHT{u"unity_hf_detail_prototype_minheight"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_MINWIDTH offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_MINWIDTH{u"unity_hf_detail_prototype_minwidth"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_NOISESPREAD offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_NOISESPREAD{u"unity_hf_detail_prototype_noisespread"};

/// @brief Field HEIGHTFIELD_DETAIL_PROTOTYPE_RENDERMODE offset 0
static constexpr ::ConstString  HEIGHTFIELD_DETAIL_PROTOTYPE_RENDERMODE{u"unity_hf_detail_prototype_rendermode"};

/// @brief Field HEIGHTFIELD_LAYER_ATTR_TYPE offset 0
static constexpr ::ConstString  HEIGHTFIELD_LAYER_ATTR_TYPE{u"unity_hf_layer_type"};

/// @brief Field HEIGHTFIELD_LAYER_TYPE_DETAIL offset 0
static constexpr ::ConstString  HEIGHTFIELD_LAYER_TYPE_DETAIL{u"detail"};

/// @brief Field HAPI_HEIGHTFIELD_TILE_ATTR offset 0
static constexpr ::ConstString  HAPI_HEIGHTFIELD_TILE_ATTR{u"tile"};

/// @brief Field HAPI_HEIGHTFIELD_LAYERNAME_HEIGHT offset 0
static constexpr ::ConstString  HAPI_HEIGHTFIELD_LAYERNAME_HEIGHT{u"height"};

/// @brief Field HAPI_HEIGHTFIELD_LAYERNAME_MASK offset 0
static constexpr ::ConstString  HAPI_HEIGHTFIELD_LAYERNAME_MASK{u"mask"};

/// @brief Field MAT_OGL_DIFF_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_DIFF_ATTR{u"ogl_diff"};

/// @brief Field MAT_DIFF_ATTR offset 0
static constexpr ::ConstString  MAT_DIFF_ATTR{u"basecolor"};

/// @brief Field MAT_OGL_TEX1_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_TEX1_ATTR{u"ogl_tex1"};

/// @brief Field MAT_OGL_TEX1_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_TEX1_ATTR_ENABLED{u"ogl_use_tex1"};

/// @brief Field MAT_BASECOLOR_ATTR offset 0
static constexpr ::ConstString  MAT_BASECOLOR_ATTR{u"basecolor_texture"};

/// @brief Field MAT_BASECOLOR_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_BASECOLOR_ATTR_ENABLED{u"basecolor_useTexture"};

/// @brief Field MAT_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_MAP_ATTR{u"map"};

/// @brief Field MAT_OGL_NORMAL_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_NORMAL_ATTR{u"ogl_normalmap"};

/// @brief Field MAT_NORMAL_ATTR offset 0
static constexpr ::ConstString  MAT_NORMAL_ATTR{u"baseNormal_texture"};

/// @brief Field MAT_NORMAL_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_NORMAL_ATTR_ENABLED{u"baseBumpAndNormal_enable"};

/// @brief Field MAT_OGL_SPEC_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_SPEC_ATTR{u"ogl_spec"};

/// @brief Field MAT_SPEC_ATTR offset 0
static constexpr ::ConstString  MAT_SPEC_ATTR{u"reflect"};

/// @brief Field MAT_OGL_SPEC_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_SPEC_MAP_ATTR{u"ogl_specmap"};

/// @brief Field MAT_OGL_SPEC_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_SPEC_MAP_ATTR_ENABLED{u"ogl_use_specmap"};

/// @brief Field MAT_SPEC_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_SPEC_MAP_ATTR{u"reflect_texture"};

/// @brief Field MAT_SPEC_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_SPEC_MAP_ATTR_ENABLED{u"reflect_useTexture"};

/// @brief Field MAT_OGL_ROUGH_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_ROUGH_ATTR{u"ogl_rough"};

/// @brief Field MAT_ROUGH_ATTR offset 0
static constexpr ::ConstString  MAT_ROUGH_ATTR{u"rough"};

/// @brief Field MAT_OGL_ROUGH_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_ROUGH_MAP_ATTR{u"ogl_roughmap"};

/// @brief Field MAT_OGL_ROUGH_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_ROUGH_MAP_ATTR_ENABLED{u"ogl_use_roughmap"};

/// @brief Field MAT_ROUGH_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_ROUGH_MAP_ATTR{u"rough_texture"};

/// @brief Field MAT_ROUGH_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_ROUGH_MAP_ATTR_ENABLED{u"rough_useTexture"};

/// @brief Field MAT_OGL_METALLIC_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_METALLIC_ATTR{u"ogl_metallic"};

/// @brief Field MAT_METALLIC_ATTR offset 0
static constexpr ::ConstString  MAT_METALLIC_ATTR{u"metallic"};

/// @brief Field MAT_OGL_METALLIC_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_METALLIC_MAP_ATTR{u"ogl_metallicmap"};

/// @brief Field MAT_OGL_METALLIC_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_METALLIC_MAP_ATTR_ENABLED{u"ogl_use_metallicmap"};

/// @brief Field MAT_METALLIC_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_METALLIC_MAP_ATTR{u"metallic_texture"};

/// @brief Field MAT_METALLIC_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_METALLIC_MAP_ATTR_ENABLED{u"metallic_useTexture"};

/// @brief Field MAT_OGL_EMISSIVE_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_EMISSIVE_ATTR{u"ogl_emit"};

/// @brief Field MAT_EMISSIVE_ATTR offset 0
static constexpr ::ConstString  MAT_EMISSIVE_ATTR{u"emitcolor"};

/// @brief Field MAT_OGL_EMISSIVE_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_EMISSIVE_MAP_ATTR{u"ogl_emissionmap"};

/// @brief Field MAT_OGL_EMISSIVE_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_EMISSIVE_MAP_ATTR_ENABLED{u"ogl_use_emissionmap"};

/// @brief Field MAT_EMISSIVE_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_EMISSIVE_MAP_ATTR{u"emitcolor_texture"};

/// @brief Field MAT_EMISSIVE_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_EMISSIVE_MAP_ATTR_ENABLED{u"emitcolor_useTexture"};

/// @brief Field MAT_OGL_ALPHA_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_ALPHA_ATTR{u"ogl_alpha"};

/// @brief Field MAT_ALPHA_ATTR offset 0
static constexpr ::ConstString  MAT_ALPHA_ATTR{u"opac"};

/// @brief Field MAT_OGL_OPACITY_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_OPACITY_MAP_ATTR{u"ogl_opacitymap"};

/// @brief Field MAT_OGL_OPACITY_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_OPACITY_MAP_ATTR_ENABLED{u"ogl_use_opacitymap"};

/// @brief Field MAT_OPACITY_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OPACITY_MAP_ATTR{u"opaccolor_texture"};

/// @brief Field MAT_OPACITY_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OPACITY_MAP_ATTR_ENABLED{u"opaccolor_useTexture"};

/// @brief Field MAT_OGL_TRANSPARENCY_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_TRANSPARENCY_ATTR{u"ogl_transparency"};

/// @brief Field MAT_OGL_TRANSPARENCY_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_TRANSPARENCY_ATTR_ENABLED{u"ogl_use_alpha_transparency"};

/// @brief Field MAT_OGL_OCCLUSION_MAP_ATTR offset 0
static constexpr ::ConstString  MAT_OGL_OCCLUSION_MAP_ATTR{u"ogl_occlusionmap"};

/// @brief Field MAT_OGL_OCCLUSION_MAP_ATTR_ENABLED offset 0
static constexpr ::ConstString  MAT_OGL_OCCLUSION_MAP_ATTR_ENABLED{u"ogl_use_occlusionmap"};

/// @brief Field CURVE_COORDS_PARAM offset 0
static constexpr ::ConstString  CURVE_COORDS_PARAM{u"coords"};

/// @brief Field CURVE_TYPE_PARAM offset 0
static constexpr ::ConstString  CURVE_TYPE_PARAM{u"type"};

/// @brief Field CURVE_METHOD_PARAM offset 0
static constexpr ::ConstString  CURVE_METHOD_PARAM{u"method"};

/// @brief Field CURVE_CLOSE_PARAM offset 0
static constexpr ::ConstString  CURVE_CLOSE_PARAM{u"close"};

/// @brief Field CURVE_REVERSE_PARAM offset 0
static constexpr ::ConstString  CURVE_REVERSE_PARAM{u"reverse"};

/// @brief Field HENGINE_STORE_ATTR offset 0
static constexpr ::ConstString  HENGINE_STORE_ATTR{u"hengine_attr_store"};

/// @brief Field DEFAULT_UNITY_TAG_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_TAG_ATTR{u"unity_tag"};

/// @brief Field DEFAULT_UNITY_SCRIPT_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_SCRIPT_ATTR{u"unity_script"};

/// @brief Field DEFAULT_UNITY_INSTANCE_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_INSTANCE_ATTR{u"unity_instance"};

/// @brief Field UNITY_USE_INSTANCE_FLAGS_ATTR offset 0
static constexpr ::ConstString  UNITY_USE_INSTANCE_FLAGS_ATTR{u"unity_use_instance_flags"};

/// @brief Field DEFAULT_UNITY_INPUT_MESH_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_INPUT_MESH_ATTR{u"unity_input_mesh_name"};

/// @brief Field DEFAULT_UNITY_STATIC_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_STATIC_ATTR{u"unity_static"};

/// @brief Field DEFAULT_UNITY_LAYER_ATTR offset 0
static constexpr ::ConstString  DEFAULT_UNITY_LAYER_ATTR{u"unity_layer"};

/// @brief Field DEFAULT_UNITY_MESH_READABLE offset 0
static constexpr ::ConstString  DEFAULT_UNITY_MESH_READABLE{u"unity_mesh_readable"};

/// @brief Field DEFAULT_INSTANCE_PREFIX_ATTR offset 0
static constexpr ::ConstString  DEFAULT_INSTANCE_PREFIX_ATTR{u"instance_prefix"};

/// @brief Field UNITY_SHADER_COLOR offset 0
static constexpr ::ConstString  UNITY_SHADER_COLOR{u"_Color"};

/// @brief Field UNITY_SHADER_SPEC_COLOR offset 0
static constexpr ::ConstString  UNITY_SHADER_SPEC_COLOR{u"_SpecColor"};

/// @brief Field UNITY_SHADER_SPEC_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_SPEC_MAP{u"_SpecMap"};

/// @brief Field UNITY_SHADER_METALLIC offset 0
static constexpr ::ConstString  UNITY_SHADER_METALLIC{u"_Metallic"};

/// @brief Field UNITY_SHADER_METALLIC_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_METALLIC_MAP{u"_MetallicMap"};

/// @brief Field UNITY_SHADER_BUMP_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_BUMP_MAP{u"_BumpMap"};

/// @brief Field UNITY_SHADER_EMISSION_COLOR offset 0
static constexpr ::ConstString  UNITY_SHADER_EMISSION_COLOR{u"_EmissionColor"};

/// @brief Field UNITY_SHADER_EMISSION_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_EMISSION_MAP{u"_EmissionMap"};

/// @brief Field UNITY_SHADER_SMOOTHNESS offset 0
static constexpr ::ConstString  UNITY_SHADER_SMOOTHNESS{u"_Smoothness"};

/// @brief Field UNITY_SHADER_SMOOTHNESS_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_SMOOTHNESS_MAP{u"_SmoothnessMap"};

/// @brief Field UNITY_SHADER_SHININESS offset 0
static constexpr ::ConstString  UNITY_SHADER_SHININESS{u"_Shininess"};

/// @brief Field UNITY_SHADER_OCCLUSION offset 0
static constexpr ::ConstString  UNITY_SHADER_OCCLUSION{u"_Occlusion"};

/// @brief Field UNITY_SHADER_OCCLUSION_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_OCCLUSION_MAP{u"_OcclusionMap"};

/// @brief Field UNITY_SHADER_OPACITY offset 0
static constexpr ::ConstString  UNITY_SHADER_OPACITY{u"_Opacity"};

/// @brief Field UNITY_SHADER_OPACITY_MAP offset 0
static constexpr ::ConstString  UNITY_SHADER_OPACITY_MAP{u"_OpacityMap"};

/// @brief Field UNITY_EDITORONLY_TAG offset 0
static constexpr ::ConstString  UNITY_EDITORONLY_TAG{u"EditorOnly"};

/// @brief Field UNITY_HDADATA_NAME offset 0
static constexpr ::ConstString  UNITY_HDADATA_NAME{u"HDA_Data"};

/// @brief Field HOUDINI_SHADER_PREFIX offset 0
static constexpr ::ConstString  HOUDINI_SHADER_PREFIX{u"Houdini/"};

/// @brief Field DEFAULT_STANDARD_SHADER offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER{u"HoudiniStandard"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER{u"HoudiniStandard"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER{u"HoudiniStandardAlpha"};

/// @brief Field DEFAULT_STANDARD_SHADER_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_SPECULAR{u"HoudiniSpecular"};

/// @brief Field DEFAULT_STANDARD_SHADER_SPECULAR_LEGACY offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_SPECULAR_LEGACY{u"Legacy/SpecularVertexColor"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_SPECULAR{u"HoudiniSpecular"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_SPECULAR_LEGACY offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_SPECULAR_LEGACY{u"Legacy/SpecularVertexColor"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_SPECULAR{u"HoudiniSpecularAlpha"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_SPECULAR_LEGACY offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_SPECULAR_LEGACY{u"Legacy/AlphaSpecularVertexColor"};

/// @brief Field DEFAULT_CURVE_SHADER offset 0
static constexpr ::ConstString  DEFAULT_CURVE_SHADER{u"LineShader"};

/// @brief Field DEFAULT_TERRAIN_SHADER offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_SHADER{u"Nature/Terrain/Standard"};

/// @brief Field DEFAULT_STANDARD_SHADER_HDRP offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_HDRP{u"HDRP/StandardLit"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_HDRP offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_HDRP{u"HDRP/StandardLit"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_HDRP offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_HDRP{u"HDRP/StandardLitAlpha"};

/// @brief Field DEFAULT_STANDARD_SHADER_HDRP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_HDRP_SPECULAR{u"HDRP/SpecularLit"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_HDRP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_HDRP_SPECULAR{u"HDRP/SpecularLit"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_HDRP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_HDRP_SPECULAR{u"HDRP/SpecularLitAlpha"};

/// @brief Field DEFAULT_CURVE_SHADER_HDRP offset 0
static constexpr ::ConstString  DEFAULT_CURVE_SHADER_HDRP{u"HDRP/Color"};

/// @brief Field DEFAULT_TERRAIN_SHADER_HDRP offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_SHADER_HDRP{u"HDRP/TerrainLit"};

/// @brief Field DEFAULT_STANDARD_SHADER_URP offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_URP{u"URP/StandardLit"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_URP offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_URP{u"URP/StandardLit"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_URP offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_URP{u"URP/StandardLitAlpha"};

/// @brief Field DEFAULT_STANDARD_SHADER_URP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_STANDARD_SHADER_URP_SPECULAR{u"URP/SpecularLit"};

/// @brief Field DEFAULT_VERTEXCOLOR_SHADER_URP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_VERTEXCOLOR_SHADER_URP_SPECULAR{u"URP/SpecularLit"};

/// @brief Field DEFAULT_TRANSPARENT_SHADER_URP_SPECULAR offset 0
static constexpr ::ConstString  DEFAULT_TRANSPARENT_SHADER_URP_SPECULAR{u"URP/SpecularLitAlpha"};

/// @brief Field DEFAULT_CURVE_SHADER_URP offset 0
static constexpr ::ConstString  DEFAULT_CURVE_SHADER_URP{u"URP/Color"};

/// @brief Field DEFAULT_TERRAIN_SHADER_URP offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_SHADER_URP{u"Universal Render Pipeline/Terrain/Lit"};

/// @brief Field DEFAULT_UNITY_BUILTIN_RESOURCES offset 0
static constexpr ::ConstString  DEFAULT_UNITY_BUILTIN_RESOURCES{u"Resources/unity_builtin_extra"};

/// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_MATERIAL_PATH{u"Resources/unity_builtin_extra::name::Default-Terrain-Standard"};

/// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH_HDRP offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_MATERIAL_PATH_HDRP{u"Packages/com.unity.render-pipelines.high-definition/Runtime/RenderPipelineResources/Material/DefaultHDTerrainMaterial.mat"};

/// @brief Field DEFAULT_TERRAIN_MATERIAL_PATH_URP offset 0
static constexpr ::ConstString  DEFAULT_TERRAIN_MATERIAL_PATH_URP{u"Packages/com.unity.render-pipelines.universal/Runtime/Materials/TerrainLit.mat"};

/// @brief Field DEFAULT_MATERIAL offset 0
static constexpr ::ConstString  DEFAULT_MATERIAL{u"HEU_DEFAULT_MATERIAL"};

static int32_t __declspec(property(get=__get_DEFAULT_MATERIAL_KEY, put=__set_DEFAULT_MATERIAL_KEY))  DEFAULT_MATERIAL_KEY;

static void __set_DEFAULT_MATERIAL_KEY(int32_t value) ;

static int32_t __get_DEFAULT_MATERIAL_KEY() ;

/// @brief Field EDITABLE_MATERIAL offset 0
static constexpr ::ConstString  EDITABLE_MATERIAL{u"HEU_EDITABLE_MATERIAL"};

static int32_t __declspec(property(get=__get_EDITABLE_MATERIAL_KEY, put=__set_EDITABLE_MATERIAL_KEY))  EDITABLE_MATERIAL_KEY;

static void __set_EDITABLE_MATERIAL_KEY(int32_t value) ;

static int32_t __get_EDITABLE_MATERIAL_KEY() ;

/// @brief Field HEU_INVALID_MATERIAL offset 0
static constexpr int32_t  HEU_INVALID_MATERIAL{-1};

/// @brief Field HEU_ASSET_CACHE_PATH offset 0
static constexpr ::ConstString  HEU_ASSET_CACHE_PATH{u"HoudiniEngineAssetCache"};

/// @brief Field HEU_WORKING_PATH offset 0
static constexpr ::ConstString  HEU_WORKING_PATH{u"Working"};

/// @brief Field HEU_BAKED_PATH offset 0
static constexpr ::ConstString  HEU_BAKED_PATH{u"Baked"};

/// @brief Field HEU_BAKED_HDA offset 0
static constexpr ::ConstString  HEU_BAKED_HDA{u"_bakedHDA"};

/// @brief Field HEU_BAKED_CLONE offset 0
static constexpr ::ConstString  HEU_BAKED_CLONE{u"_bakedClone"};

/// @brief Field HEU_INSTANCE offset 0
static constexpr ::ConstString  HEU_INSTANCE{u"_Instance"};

/// @brief Field HEU_INSTANCE_PATTERN offset 0
static constexpr ::ConstString  HEU_INSTANCE_PATTERN{u"_Instance\\d*\\z"};

/// @brief Field HEU_DEFAULT_GEO_GROUP_NAME offset 0
static constexpr ::ConstString  HEU_DEFAULT_GEO_GROUP_NAME{u"main_geo"};

/// @brief Field HEU_DEFAULT_LOD_NAME offset 0
static constexpr ::ConstString  HEU_DEFAULT_LOD_NAME{u"lod"};

/// @brief Field HEU_UNITY_LOD_TRANSITION_ATTR offset 0
static constexpr ::ConstString  HEU_UNITY_LOD_TRANSITION_ATTR{u"lod_screensizes"};

/// @brief Field HEU_SUBASSET offset 0
static constexpr ::ConstString  HEU_SUBASSET{u"SUBASSET::"};

/// @brief Field HEU_HENGINE_TOOLS_SHIPPED_FOLDER offset 0
static constexpr ::ConstString  HEU_HENGINE_TOOLS_SHIPPED_FOLDER{u"<HFS>/engine/tools"};

/// @brief Field HEU_HENGINE_SHIPPED_SHELF offset 0
static constexpr ::ConstString  HEU_HENGINE_SHIPPED_SHELF{u"Default"};

/// @brief Field HEU_PATH_KEY_PROJECT offset 0
static constexpr ::ConstString  HEU_PATH_KEY_PROJECT{u"<PROJECT_PATH>"};

/// @brief Field HEU_PATH_KEY_PLUGIN offset 0
static constexpr ::ConstString  HEU_PATH_KEY_PLUGIN{u"<PLUGIN_PATH>"};

/// @brief Field HEU_PATH_KEY_HFS offset 0
static constexpr ::ConstString  HEU_PATH_KEY_HFS{u"<HFS>"};

/// @brief Field HEU_PATH_KEY_TOOL offset 0
static constexpr ::ConstString  HEU_PATH_KEY_TOOL{u"HOUDINI_TOOL_PATH"};

/// @brief Field HEU_USERMSG_NONEDITOR_NOT_SUPPORTED offset 0
static constexpr ::ConstString  HEU_USERMSG_NONEDITOR_NOT_SUPPORTED{u"Houdini Engine does not support non-Editor asset creation at this time!"};

/// @brief Field HEU_TERRAIN_SPLAT_DEFAULT offset 0
static constexpr ::ConstString  HEU_TERRAIN_SPLAT_DEFAULT{u"Textures/heu_terrain_default_splat"};

/// @brief Field HEU_FOLDER_MESHES offset 0
static constexpr ::ConstString  HEU_FOLDER_MESHES{u"Meshes"};

/// @brief Field HEU_FOLDER_MATERIALS offset 0
static constexpr ::ConstString  HEU_FOLDER_MATERIALS{u"Materials"};

/// @brief Field HEU_FOLDER_TERRAIN offset 0
static constexpr ::ConstString  HEU_FOLDER_TERRAIN{u"Terrain"};

/// @brief Field HEU_FOLDER_TILE offset 0
static constexpr ::ConstString  HEU_FOLDER_TILE{u"Tile"};

/// @brief Field HEU_FOLDER_TEXTURES offset 0
static constexpr ::ConstString  HEU_FOLDER_TEXTURES{u"Textures"};

/// @brief Field HEU_EXT_ASSET offset 0
static constexpr ::ConstString  HEU_EXT_ASSET{u".asset"};

/// @brief Field HEU_EXT_MAT offset 0
static constexpr ::ConstString  HEU_EXT_MAT{u".mat"};

/// @brief Field HEU_EXT_TERRAINDATA offset 0
static constexpr ::ConstString  HEU_EXT_TERRAINDATA{u".terraindata"};

/// @brief Field HEU_EXT_TERRAINLAYER offset 0
static constexpr ::ConstString  HEU_EXT_TERRAINLAYER{u".terrainlayer"};

/// @brief Field HEU_KEY_CTRL offset 0
static constexpr ::ConstString  HEU_KEY_CTRL{u"Ctrl"};


// Methods

// Ctor Parameters []
explicit HEU_Defines() ;

/// @brief Method .ctor addr 0x2012e4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Defines);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Defines, "HoudiniEngineUnity", "HEU_Defines");
