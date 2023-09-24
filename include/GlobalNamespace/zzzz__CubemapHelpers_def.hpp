#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class CubemapHelpers;
}
// Type: ::CubemapHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5943))
// CS Name: CubemapHelpers
class CORDL_TYPE CubemapHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CubemapHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapHelpers", modifiers: " const&", def_value: None }]
constexpr CubemapHelpers(CubemapHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CubemapHelpers", modifiers: "&&", def_value: None }]
constexpr CubemapHelpers(CubemapHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CubemapHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CubemapHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CubemapHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CubemapHelpers& operator=(CubemapHelpers&& o) noexcept = default;
  constexpr CubemapHelpers& operator=(CubemapHelpers const& o) noexcept = default;
                


// Fields

/// @brief Field kCubemapHelpersShaderName offset 0
static constexpr ::ConstString  kCubemapHelpersShaderName{u"Hidden/CubemapHelpers"};

static UnityEngine::Material __declspec(property(get=__get__cubemapHelpersMaterial, put=__set__cubemapHelpersMaterial))  _cubemapHelpersMaterial;

static void __set__cubemapHelpersMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get__cubemapHelpersMaterial() ;

static int32_t __declspec(property(get=__get__cubePropertyId, put=__set__cubePropertyId))  _cubePropertyId;

static void __set__cubePropertyId(int32_t value) ;

static int32_t __get__cubePropertyId() ;

static int32_t __declspec(property(get=__get__cubeFaceNumberId, put=__set__cubeFaceNumberId))  _cubeFaceNumberId;

static void __set__cubeFaceNumberId(int32_t value) ;

static int32_t __get__cubeFaceNumberId() ;

/// @brief Field kCubemapDownsamplePass offset 0
static constexpr int32_t  kCubemapDownsamplePass{0};

/// @brief Field kCubemapTo2DTexturePass offset 0
static constexpr int32_t  kCubemapTo2DTexturePass{1};

static System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t> __declspec(property(get=__get__cubemapFaceToCubeFaceNumberDict, put=__set__cubemapFaceToCubeFaceNumberDict))  _cubemapFaceToCubeFaceNumberDict;

static void __set__cubemapFaceToCubeFaceNumberDict(System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace,int32_t> __get__cubemapFaceToCubeFaceNumberDict() ;

static ::ArrayW<UnityEngine::CubemapFace> __declspec(property(get=__get__cubemapFaces, put=__set__cubemapFaces))  _cubemapFaces;

static void __set__cubemapFaces(::ArrayW<UnityEngine::CubemapFace> value) ;

static ::ArrayW<UnityEngine::CubemapFace> __get__cubemapFaces() ;


// Properties

static UnityEngine::Material __declspec(property(get=get_cubemapHelpersMaterial))  cubemapHelpersMaterial;


// Methods

/// @brief Method get_cubemapHelpersMaterial addr 0x219b63c size 0x128 virtual false final false
static UnityEngine::Material get_cubemapHelpersMaterial() ;

/// @brief Method Downsample addr 0x219b764 size 0x12c virtual false final false
static void Downsample(UnityEngine::Texture src, UnityEngine::RenderTexture dest) ;

/// @brief Method CreateDownsampledCubemap addr 0x219ba40 size 0x1ec virtual false final false
static UnityEngine::RenderTexture CreateDownsampledCubemap(UnityEngine::RenderTexture src, int32_t count) ;

/// @brief Method Create2DTextureFromCubemap addr 0x219bc2c size 0x170 virtual false final false
static UnityEngine::RenderTexture Create2DTextureFromCubemap(UnityEngine::RenderTexture src) ;

/// @brief Method DrawCubemapFace addr 0x219b890 size 0x1b0 virtual false final false
static void DrawCubemapFace(UnityEngine::Texture cubemap, UnityEngine::CubemapFace cubemapFace) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CubemapHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CubemapHelpers, "", "CubemapHelpers");
