#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Shader;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class GlobalNamespace__PosesRecordingData__ExternalCameraCalibration;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type;
}
namespace GlobalNamespace {
class GlobalNamespace__PlaybackRenderer__PlaybackScreenshot;
}
namespace GlobalNamespace {
class PlaybackRenderer;
}
// Type: ::Type
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6012))
// CS Name: PlaybackRenderer::PlaybackScreenshot::Type
struct CORDL_TYPE GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type const&) = default;
                    constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type&&) = default;
                    constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type& operator=(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type& operator=(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped : int32_t {
__Foreground = 1,
__Background = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Foreground offset 0
static GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type const Foreground;

/// @brief Field Background offset 0
static GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type const Background;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlaybackScreenshot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6013))
// CS Name: PlaybackRenderer::PlaybackScreenshot
class CORDL_TYPE GlobalNamespace__PlaybackRenderer__PlaybackScreenshot : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Type = GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__PlaybackRenderer__PlaybackScreenshot() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlaybackRenderer__PlaybackScreenshot", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PlaybackRenderer__PlaybackScreenshot", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlaybackRenderer__PlaybackScreenshot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot& operator=(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot&& o) noexcept = default;
  constexpr GlobalNamespace__PlaybackRenderer__PlaybackScreenshot& operator=(GlobalNamespace__PlaybackRenderer__PlaybackScreenshot const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 UnityEngine::LayerMask __declspec(property(get=__get__layerMask, put=__set__layerMask))  _layerMask;

constexpr void __set__layerMask(UnityEngine::LayerMask value) ;

constexpr UnityEngine::LayerMask __get__layerMask() const;

 GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type value) ;

constexpr GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type __get__type() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__texture, put=__set__texture))  _texture;

constexpr void __set__texture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__texture() const;

 ::StringW __declspec(property(get=__get__path, put=__set__path))  _path;

constexpr void __set__path(::StringW value) ;

constexpr ::StringW __get__path() const;

 UnityEngine::Color __declspec(property(get=__get__backgroundColor, put=__set__backgroundColor))  _backgroundColor;

constexpr void __set__backgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__backgroundColor() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;

 UnityEngine::RenderTexture __declspec(property(get=get_texture))  texture;

 UnityEngine::LayerMask __declspec(property(get=get_layerMask))  layerMask;

 GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type __declspec(property(get=get_type))  type;

 ::StringW __declspec(property(get=get_path, put=set_path))  path;

 UnityEngine::Color __declspec(property(get=get_backgroundColor))  backgroundColor;


// Methods

/// @brief Method get_name addr 0x21a5fdc size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method get_texture addr 0x21a5fe4 size 0x8 virtual false final false
 UnityEngine::RenderTexture get_texture() ;

/// @brief Method get_layerMask addr 0x21a5fec size 0x8 virtual false final false
 UnityEngine::LayerMask get_layerMask() ;

/// @brief Method get_type addr 0x21a5ff4 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type get_type() ;

/// @brief Method get_path addr 0x21a5ffc size 0x8 virtual false final false
 ::StringW get_path() ;

/// @brief Method set_path addr 0x21a6004 size 0x8 virtual false final false
 void set_path(::StringW value) ;

/// @brief Method get_backgroundColor addr 0x21a600c size 0xc virtual false final false
 UnityEngine::Color get_backgroundColor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "layerMask", ty: "UnityEngine::LayerMask", modifiers: "", def_value: None }, CppParam { name: "type", ty: "GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
explicit GlobalNamespace__PlaybackRenderer__PlaybackScreenshot(::StringW name, UnityEngine::LayerMask layerMask, GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type type, UnityEngine::Color backgroundColor) ;

/// @brief Method .ctor addr 0x21a6018 size 0x68 virtual false final false
 void _ctor(::StringW name, UnityEngine::LayerMask layerMask, GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type type, UnityEngine::Color backgroundColor) ;

/// @brief Method CreateTexture addr 0x21a57ac size 0xc4 virtual false final false
 void CreateTexture(int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlaybackRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6014))
// CS Name: PlaybackRenderer
class CORDL_TYPE PlaybackRenderer : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PlaybackScreenshot = GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PlaybackRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: " const&", def_value: None }]
constexpr PlaybackRenderer(PlaybackRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlaybackRenderer", modifiers: "&&", def_value: None }]
constexpr PlaybackRenderer(PlaybackRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlaybackRenderer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlaybackRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlaybackRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlaybackRenderer& operator=(PlaybackRenderer&& o) noexcept = default;
  constexpr PlaybackRenderer& operator=(PlaybackRenderer const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_texturesReadyEvent, put=__set_texturesReadyEvent))  texturesReadyEvent;

constexpr void __set_texturesReadyEvent(System::Action value) ;

constexpr System::Action __get_texturesReadyEvent() const;

 UnityEngine::Shader __declspec(property(get=__get__clearBackgroundShader, put=__set__clearBackgroundShader))  _clearBackgroundShader;

constexpr void __set__clearBackgroundShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__clearBackgroundShader() const;

 bool __declspec(property(get=__get__isSetup, put=__set__isSetup))  _isSetup;

constexpr void __set__isSetup(bool value) ;

constexpr bool __get__isSetup() const;

 UnityEngine::Transform __declspec(property(get=__get__hmd, put=__set__hmd))  _hmd;

constexpr void __set__hmd(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__hmd() const;

 UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get__camera() const;

 GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration __declspec(property(get=__get__cameraCalibration, put=__set__cameraCalibration))  _cameraCalibration;

constexpr void __set__cameraCalibration(GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration value) ;

constexpr GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration __get__cameraCalibration() const;

 UnityEngine::GameObject __declspec(property(get=__get__clipQuad, put=__set__clipQuad))  _clipQuad;

constexpr void __set__clipQuad(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__clipQuad() const;

 UnityEngine::Material __declspec(property(get=__get__clipMaterial, put=__set__clipMaterial))  _clipMaterial;

constexpr void __set__clipMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__clipMaterial() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __declspec(property(get=__get__screenshots, put=__set__screenshots))  _screenshots;

constexpr void __set__screenshots(::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __get__screenshots() const;


// Properties

 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> __declspec(property(get=get_screenshots))  screenshots;


// Methods

/// @brief Method add_texturesReadyEvent addr 0x21a5268 size 0x9c virtual false final false
 void add_texturesReadyEvent(System::Action value) ;

/// @brief Method remove_texturesReadyEvent addr 0x21a5304 size 0x9c virtual false final false
 void remove_texturesReadyEvent(System::Action value) ;

/// @brief Method get_screenshots addr 0x21a53a0 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> get_screenshots() ;

/// @brief Method Setup addr 0x21a4930 size 0x88 virtual false final false
 void Setup(UnityEngine::Camera hmdCamera, UnityEngine::Camera camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration cameraCalibration, int32_t textureWidth, int32_t textureHeight, ::ArrayW<GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot> screenshots) ;

/// @brief Method CreateClipQuad addr 0x21a54b8 size 0x280 virtual false final false
 void CreateClipQuad() ;

/// @brief Method InitCamera addr 0x21a53a8 size 0x110 virtual false final false
 void InitCamera(UnityEngine::Camera camera, GlobalNamespace::GlobalNamespace__PosesRecordingData__ExternalCameraCalibration cameraCalibration) ;

/// @brief Method CreateTextures addr 0x21a5738 size 0x74 virtual false final false
 void CreateTextures(int32_t width, int32_t height) ;

/// @brief Method GetDistanceToHMD addr 0x21a5870 size 0x26c virtual false final false
 float_t GetDistanceToHMD() ;

/// @brief Method OrientClipQuad addr 0x21a5adc size 0x140 virtual false final false
 void OrientClipQuad() ;

/// @brief Method RenderForeground addr 0x21a5c1c size 0x1c0 virtual false final false
 void RenderForeground(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot screenshot) ;

/// @brief Method RenderBackground addr 0x21a5ddc size 0x154 virtual false final false
 void RenderBackground(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot screenshot) ;

/// @brief Method LateUpdate addr 0x21a5f30 size 0xa4 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit PlaybackRenderer() ;

/// @brief Method .ctor addr 0x21a5fd4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot__Type, "", "PlaybackRenderer/PlaybackScreenshot/Type");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlaybackRenderer__PlaybackScreenshot, "", "PlaybackRenderer/PlaybackScreenshot");
NEED_NO_BOX(GlobalNamespace::PlaybackRenderer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlaybackRenderer, "", "PlaybackRenderer");
