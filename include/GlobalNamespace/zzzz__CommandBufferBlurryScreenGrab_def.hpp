#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__KawaseBlurRendererSO__KernelSize;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferBlurryScreenGrab;
}
// Type: ::CommandBufferBlurryScreenGrab
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15299))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15297))
// CS Name: CommandBufferBlurryScreenGrab
class CORDL_TYPE CommandBufferBlurryScreenGrab : public ::GlobalNamespace::CommandBufferGOCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CommandBufferBlurryScreenGrab() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: " const&", def_value: None }]
constexpr CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferBlurryScreenGrab", modifiers: "&&", def_value: None }]
constexpr CommandBufferBlurryScreenGrab(CommandBufferBlurryScreenGrab&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandBufferBlurryScreenGrab(void* ptr) noexcept : ::GlobalNamespace::CommandBufferGOCore(ptr) {
}


  constexpr CommandBufferBlurryScreenGrab& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandBufferBlurryScreenGrab& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandBufferBlurryScreenGrab& operator=(CommandBufferBlurryScreenGrab&& o) noexcept = default;
  constexpr CommandBufferBlurryScreenGrab& operator=(CommandBufferBlurryScreenGrab const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::KawaseBlurRendererSO __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer))  _kawaseBlurRenderer;

constexpr void __set__kawaseBlurRenderer(::GlobalNamespace::KawaseBlurRendererSO value) ;

constexpr ::GlobalNamespace::KawaseBlurRendererSO __get__kawaseBlurRenderer() const;

 ::GlobalNamespace::____GlobalNamespace__KawaseBlurRendererSO__KernelSize __declspec(property(get=__get__kernelSize, put=__set__kernelSize))  _kernelSize;

constexpr void __set__kernelSize(::GlobalNamespace::____GlobalNamespace__KawaseBlurRendererSO__KernelSize value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__KawaseBlurRendererSO__KernelSize __get__kernelSize() const;

 ::UnityEngine::Rendering::CameraEvent __declspec(property(get=__get__cameraEvent, put=__set__cameraEvent))  _cameraEvent;

constexpr void __set__cameraEvent(::UnityEngine::Rendering::CameraEvent value) ;

constexpr ::UnityEngine::Rendering::CameraEvent __get__cameraEvent() const;

 int32_t __declspec(property(get=__get__downsample, put=__set__downsample))  _downsample;

constexpr void __set__downsample(int32_t value) ;

constexpr int32_t __get__downsample() const;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> __declspec(property(get=__get__cameras, put=__set__cameras))  _cameras;

static void __set__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> __get__cameras() ;


// Methods

/// @brief Method CreateCommandBuffer addr 0x2674ed0 size 0xfc virtual true final false
 ::UnityEngine::Rendering::CommandBuffer CreateCommandBuffer(::UnityEngine::Camera camera) ;

/// @brief Method CamerasDict addr 0x2674fcc size 0x58 virtual true final false
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> CamerasDict() ;

/// @brief Method CommandBufferCameraEvent addr 0x2675024 size 0x8 virtual true final false
 ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent() ;

// Ctor Parameters []
explicit CommandBufferBlurryScreenGrab() ;

/// @brief Method .ctor addr 0x267502c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferBlurryScreenGrab);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferBlurryScreenGrab, "", "CommandBufferBlurryScreenGrab");
