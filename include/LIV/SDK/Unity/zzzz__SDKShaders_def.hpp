#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKShaders;
}
// Type: LIV.SDK.Unity::SDKShaders
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15146))
// CS Name: LIV.SDK.Unity.SDKShaders
class CORDL_TYPE SDKShaders : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SDKShaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKShaders", modifiers: " const&", def_value: None }]
constexpr SDKShaders(SDKShaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SDKShaders", modifiers: "&&", def_value: None }]
constexpr SDKShaders(SDKShaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SDKShaders(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SDKShaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SDKShaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SDKShaders& operator=(SDKShaders&& o) noexcept = default;
  constexpr SDKShaders& operator=(SDKShaders const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_LIV_COLOR_MASK, put=__set_LIV_COLOR_MASK))  LIV_COLOR_MASK;

static void __set_LIV_COLOR_MASK(int32_t value) ;

static int32_t __get_LIV_COLOR_MASK() ;

static int32_t __declspec(property(get=__get_LIV_TESSELLATION_PROPERTY, put=__set_LIV_TESSELLATION_PROPERTY))  LIV_TESSELLATION_PROPERTY;

static void __set_LIV_TESSELLATION_PROPERTY(int32_t value) ;

static int32_t __get_LIV_TESSELLATION_PROPERTY() ;

static int32_t __declspec(property(get=__get_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY, put=__set_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY))  LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY;

static void __set_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY(int32_t value) ;

static int32_t __get_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY() ;

/// @brief Field LIV_MR_FOREGROUND_KEYWORD offset 0
static constexpr ::ConstString  LIV_MR_FOREGROUND_KEYWORD{u"LIV_MR_FOREGROUND"};

/// @brief Field LIV_MR_BACKGROUND_KEYWORD offset 0
static constexpr ::ConstString  LIV_MR_BACKGROUND_KEYWORD{u"LIV_MR_BACKGROUND"};

/// @brief Field LIV_MR_KEYWORD offset 0
static constexpr ::ConstString  LIV_MR_KEYWORD{u"LIV_MR"};

/// @brief Field LIV_CLIP_PLANE_SIMPLE_SHADER offset 0
static constexpr ::ConstString  LIV_CLIP_PLANE_SIMPLE_SHADER{u"Hidden/LIV_ClipPlaneSimple"};

/// @brief Field LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER offset 0
static constexpr ::ConstString  LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER{u"Hidden/LIV_ClipPlaneSimpleDebug"};

/// @brief Field LIV_CLIP_PLANE_COMPLEX_SHADER offset 0
static constexpr ::ConstString  LIV_CLIP_PLANE_COMPLEX_SHADER{u"Hidden/LIV_ClipPlaneComplex"};

/// @brief Field LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER offset 0
static constexpr ::ConstString  LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER{u"Hidden/LIV_ClipPlaneComplexDebug"};

/// @brief Field LIV_WRITE_OPAQUE_TO_ALPHA_SHADER offset 0
static constexpr ::ConstString  LIV_WRITE_OPAQUE_TO_ALPHA_SHADER{u"Hidden/LIV_WriteOpaqueToAlpha"};

/// @brief Field LIV_COMBINE_ALPHA_SHADER offset 0
static constexpr ::ConstString  LIV_COMBINE_ALPHA_SHADER{u"Hidden/LIV_CombineAlpha"};

/// @brief Field LIV_WRITE_SHADER offset 0
static constexpr ::ConstString  LIV_WRITE_SHADER{u"Hidden/LIV_Write"};

/// @brief Field LIV_FORCE_FORWARD_RENDERING_SHADER offset 0
static constexpr ::ConstString  LIV_FORCE_FORWARD_RENDERING_SHADER{u"Hidden/LIV_ForceForwardRendering"};


// Methods

/// @brief Method StartRendering addr 0x209f4b4 size 0x44 virtual false final false
static void StartRendering() ;

/// @brief Method StopRendering addr 0x209f70c size 0x44 virtual false final false
static void StopRendering() ;

/// @brief Method StartForegroundRendering addr 0x209f920 size 0x44 virtual false final false
static void StartForegroundRendering() ;

/// @brief Method StopForegroundRendering addr 0x209f9d4 size 0x44 virtual false final false
static void StopForegroundRendering() ;

/// @brief Method StartBackgroundRendering addr 0x209f4f8 size 0x44 virtual false final false
static void StartBackgroundRendering() ;

/// @brief Method StopBackgroundRendering addr 0x209f6c8 size 0x44 virtual false final false
static void StopBackgroundRendering() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
NEED_NO_BOX(::LIV::SDK::Unity::SDKShaders);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKShaders, "LIV.SDK.Unity", "SDKShaders");
