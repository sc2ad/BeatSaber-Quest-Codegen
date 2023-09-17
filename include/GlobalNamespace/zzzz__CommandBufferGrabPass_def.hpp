#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__CommandBufferGOCore_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferGrabPass;
}
// Type: ::CommandBufferGrabPass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15299))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15298))
// CS Name: CommandBufferGrabPass
class CORDL_TYPE CommandBufferGrabPass : public ::GlobalNamespace::CommandBufferGOCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CommandBufferGrabPass() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: " const&", def_value: None }]
constexpr CommandBufferGrabPass(CommandBufferGrabPass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGrabPass", modifiers: "&&", def_value: None }]
constexpr CommandBufferGrabPass(CommandBufferGrabPass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandBufferGrabPass(void* ptr) noexcept : ::GlobalNamespace::CommandBufferGOCore(ptr) {
}


  constexpr CommandBufferGrabPass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandBufferGrabPass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandBufferGrabPass& operator=(CommandBufferGrabPass&& o) noexcept = default;
  constexpr CommandBufferGrabPass& operator=(CommandBufferGrabPass const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__textureName, put=__set__textureName))  _textureName;

constexpr void __set__textureName(::StringW value) ;

constexpr ::StringW __get__textureName() const;

 ::UnityEngine::Rendering::CameraEvent __declspec(property(get=__get__cameraEvent, put=__set__cameraEvent))  _cameraEvent;

constexpr void __set__cameraEvent(::UnityEngine::Rendering::CameraEvent value) ;

constexpr ::UnityEngine::Rendering::CameraEvent __get__cameraEvent() const;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> __declspec(property(get=__get__cameras, put=__set__cameras))  _cameras;

static void __set__cameras(::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> value) ;

static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> __get__cameras() ;


// Methods

/// @brief Method CreateCommandBuffer addr 0x26750d4 size 0x1ec virtual true final false
 ::UnityEngine::Rendering::CommandBuffer CreateCommandBuffer(::UnityEngine::Camera camera) ;

/// @brief Method CamerasDict addr 0x26752c0 size 0x58 virtual true final false
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera,::GlobalNamespace::CommandBufferOwners> CamerasDict() ;

/// @brief Method CommandBufferCameraEvent addr 0x2675318 size 0x8 virtual true final false
 ::UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent() ;

// Ctor Parameters []
explicit CommandBufferGrabPass() ;

/// @brief Method .ctor addr 0x2675320 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferGrabPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferGrabPass, "", "CommandBufferGrabPass");
