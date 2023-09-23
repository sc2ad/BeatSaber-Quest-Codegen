#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class CommandBufferOwners;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferGOCore;
}
// Type: ::CommandBufferGOCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15299))
// CS Name: CommandBufferGOCore
class CORDL_TYPE CommandBufferGOCore : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CommandBufferGOCore() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: " const&", def_value: None }]
constexpr CommandBufferGOCore(CommandBufferGOCore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBufferGOCore", modifiers: "&&", def_value: None }]
constexpr CommandBufferGOCore(CommandBufferGOCore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandBufferGOCore(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CommandBufferGOCore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandBufferGOCore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandBufferGOCore& operator=(CommandBufferGOCore&& o) noexcept = default;
  constexpr CommandBufferGOCore& operator=(CommandBufferGOCore const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> __declspec(property(get=__get__cameras, put=__set__cameras))  _cameras;

constexpr void __set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> __get__cameras() const;

static UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

static void __set__material(UnityEngine::Material value) ;

static UnityEngine::Material __get__material() ;

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;


// Methods

/// @brief Method OnEnable addr 0x2675404 size 0x414 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2675818 size 0x404 virtual false final false
 void OnDisable() ;

/// @brief Method OnWillRenderObject addr 0x2675cc4 size 0x1b4 virtual true final false
 void OnWillRenderObject() ;

/// @brief Method CommandBufferCameraEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent() ;

/// @brief Method CreateCommandBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Rendering::CommandBuffer CreateCommandBuffer(UnityEngine::Camera camera) ;

/// @brief Method CamerasDict addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::Dictionary_2<UnityEngine::Camera,GlobalNamespace::CommandBufferOwners> CamerasDict() ;

// Ctor Parameters []
explicit CommandBufferGOCore() ;

/// @brief Method .ctor addr 0x2675040 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CommandBufferGOCore);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGOCore, "", "CommandBufferGOCore");
