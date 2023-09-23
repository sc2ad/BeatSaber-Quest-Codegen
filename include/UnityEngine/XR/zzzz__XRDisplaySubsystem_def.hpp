#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::XR {
struct UnityEngine__XR__XRDisplaySubsystem__LateLatchNode;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace UnityEngine::XR {
struct UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct UnityEngine__XR__XRDisplaySubsystem__XRRenderPass;
}
// Type: ::LateLatchNode
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15591))
// CS Name: UnityEngine.XR.XRDisplaySubsystem::LateLatchNode
struct CORDL_TYPE UnityEngine__XR__XRDisplaySubsystem__LateLatchNode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__XRDisplaySubsystem__LateLatchNode(UnityEngine__XR__XRDisplaySubsystem__LateLatchNode const&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__LateLatchNode(UnityEngine__XR__XRDisplaySubsystem__LateLatchNode&&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__LateLatchNode& operator=(UnityEngine__XR__XRDisplaySubsystem__LateLatchNode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__XRDisplaySubsystem__LateLatchNode& operator=(UnityEngine__XR__XRDisplaySubsystem__LateLatchNode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__XRDisplaySubsystem__LateLatchNode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__XRDisplaySubsystem__LateLatchNode_Unwrapped : int32_t {
__Head = 0,
__LeftHand = 1,
__RightHand = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__XRDisplaySubsystem__LateLatchNode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__XRDisplaySubsystem__LateLatchNode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Head offset 0
static UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode const Head;

/// @brief Field LeftHand offset 0
static UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode const LeftHand;

/// @brief Field RightHand offset 0
static UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode const RightHand;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: ::XRRenderPass
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15592))
// CS Name: UnityEngine.XR.XRDisplaySubsystem::XRRenderPass
struct CORDL_TYPE UnityEngine__XR__XRDisplaySubsystem__XRRenderPass : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "renderTarget", ty: "UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty: "UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTarget", ty: "UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty: "UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__XRDisplaySubsystem__XRRenderPass(::cordl_internals::intptr_t displaySubsystemInstance, int32_t renderPassIndex, UnityEngine::Rendering::RenderTargetIdentifier renderTarget, UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass, UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, bool shouldFillOutDepth, int32_t cullingPassIndex) noexcept;


                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRRenderPass(UnityEngine__XR__XRDisplaySubsystem__XRRenderPass const&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRRenderPass(UnityEngine__XR__XRDisplaySubsystem__XRRenderPass&&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRRenderPass& operator=(UnityEngine__XR__XRDisplaySubsystem__XRRenderPass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRRenderPass& operator=(UnityEngine__XR__XRDisplaySubsystem__XRRenderPass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xd8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__XRDisplaySubsystem__XRRenderPass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_displaySubsystemInstance, put=__set_displaySubsystemInstance))  displaySubsystemInstance;

constexpr void __set_displaySubsystemInstance(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_displaySubsystemInstance() const;

 int32_t __declspec(property(get=__get_renderPassIndex, put=__set_renderPassIndex))  renderPassIndex;

constexpr void __set_renderPassIndex(int32_t value) ;

constexpr int32_t __get_renderPassIndex() const;

 UnityEngine::Rendering::RenderTargetIdentifier __declspec(property(get=__get_renderTarget, put=__set_renderTarget))  renderTarget;

constexpr void __set_renderTarget(UnityEngine::Rendering::RenderTargetIdentifier value) ;

constexpr UnityEngine::Rendering::RenderTargetIdentifier __get_renderTarget() const;

 UnityEngine::RenderTextureDescriptor __declspec(property(get=__get_renderTargetDesc, put=__set_renderTargetDesc))  renderTargetDesc;

constexpr void __set_renderTargetDesc(UnityEngine::RenderTextureDescriptor value) ;

constexpr UnityEngine::RenderTextureDescriptor __get_renderTargetDesc() const;

 bool __declspec(property(get=__get_hasMotionVectorPass, put=__set_hasMotionVectorPass))  hasMotionVectorPass;

constexpr void __set_hasMotionVectorPass(bool value) ;

constexpr bool __get_hasMotionVectorPass() const;

 UnityEngine::Rendering::RenderTargetIdentifier __declspec(property(get=__get_motionVectorRenderTarget, put=__set_motionVectorRenderTarget))  motionVectorRenderTarget;

constexpr void __set_motionVectorRenderTarget(UnityEngine::Rendering::RenderTargetIdentifier value) ;

constexpr UnityEngine::Rendering::RenderTargetIdentifier __get_motionVectorRenderTarget() const;

 UnityEngine::RenderTextureDescriptor __declspec(property(get=__get_motionVectorRenderTargetDesc, put=__set_motionVectorRenderTargetDesc))  motionVectorRenderTargetDesc;

constexpr void __set_motionVectorRenderTargetDesc(UnityEngine::RenderTextureDescriptor value) ;

constexpr UnityEngine::RenderTextureDescriptor __get_motionVectorRenderTargetDesc() const;

 bool __declspec(property(get=__get_shouldFillOutDepth, put=__set_shouldFillOutDepth))  shouldFillOutDepth;

constexpr void __set_shouldFillOutDepth(bool value) ;

constexpr bool __get_shouldFillOutDepth() const;

 int32_t __declspec(property(get=__get_cullingPassIndex, put=__set_cullingPassIndex))  cullingPassIndex;

constexpr void __set_cullingPassIndex(int32_t value) ;

constexpr int32_t __get_cullingPassIndex() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: ::XRMirrorViewBlitDesc
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15593))
// CS Name: UnityEngine.XR.XRDisplaySubsystem::XRMirrorViewBlitDesc
struct CORDL_TYPE UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc(::cordl_internals::intptr_t displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept;


                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc(UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc const&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc(UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc&&) = default;
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc& operator=(UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc& operator=(UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_displaySubsystemInstance, put=__set_displaySubsystemInstance))  displaySubsystemInstance;

constexpr void __set_displaySubsystemInstance(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_displaySubsystemInstance() const;

 bool __declspec(property(get=__get_nativeBlitAvailable, put=__set_nativeBlitAvailable))  nativeBlitAvailable;

constexpr void __set_nativeBlitAvailable(bool value) ;

constexpr bool __get_nativeBlitAvailable() const;

 bool __declspec(property(get=__get_nativeBlitInvalidStates, put=__set_nativeBlitInvalidStates))  nativeBlitInvalidStates;

constexpr void __set_nativeBlitInvalidStates(bool value) ;

constexpr bool __get_nativeBlitInvalidStates() const;

 int32_t __declspec(property(get=__get_blitParamsCount, put=__set_blitParamsCount))  blitParamsCount;

constexpr void __set_blitParamsCount(int32_t value) ;

constexpr int32_t __get_blitParamsCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::XRDisplaySubsystem
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15590)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15849), inst: 3778 }), TypeDefinitionIndex(TypeDefinitionIndex(15849))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15594))
// CS Name: UnityEngine.XR.XRDisplaySubsystem
class CORDL_TYPE XRDisplaySubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> {
public:
// Declarations
using XRMirrorViewBlitDesc = UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc;

using XRRenderPass = UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__XRRenderPass;

using LateLatchNode = UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XRDisplaySubsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem", modifiers: " const&", def_value: None }]
constexpr XRDisplaySubsystem(XRDisplaySubsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem", modifiers: "&&", def_value: None }]
constexpr XRDisplaySubsystem(XRDisplaySubsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRDisplaySubsystem(void* ptr) noexcept : UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRDisplaySubsystemDescriptor>(ptr) {
}


  constexpr XRDisplaySubsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRDisplaySubsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRDisplaySubsystem& operator=(XRDisplaySubsystem&& o) noexcept = default;
  constexpr XRDisplaySubsystem& operator=(XRDisplaySubsystem const& o) noexcept = default;
                


// Fields

 System::Action_1<bool> __declspec(property(get=__get_displayFocusChanged, put=__set_displayFocusChanged))  displayFocusChanged;

constexpr void __set_displayFocusChanged(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_displayFocusChanged() const;


// Methods

/// @brief Method InvokeDisplayFocusChanged addr 0x2d3aa00 size 0x20 virtual false final false
 void InvokeDisplayFocusChanged(bool focus) ;

/// @brief Method MarkTransformLateLatched addr 0x2d3aa20 size 0x54 virtual false final false
 void MarkTransformLateLatched(UnityEngine::Transform transform, UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode nodeType) ;

/// @brief Method TryGetAppGPUTimeLastFrame addr 0x2d3aa74 size 0x44 virtual false final false
 bool TryGetAppGPUTimeLastFrame(ByRef<float_t> gpuTimeLastFrame) ;

/// @brief Method TryGetCompositorGPUTimeLastFrame addr 0x2d3aab8 size 0x44 virtual false final false
 bool TryGetCompositorGPUTimeLastFrame(ByRef<float_t> gpuTimeLastFrameCompositor) ;

/// @brief Method TryGetDisplayRefreshRate addr 0x2d3aafc size 0x44 virtual false final false
 bool TryGetDisplayRefreshRate(ByRef<float_t> displayRefreshRate) ;

/// @brief Method TryGetMotionToPhoton addr 0x2d3ab40 size 0x44 virtual false final false
 bool TryGetMotionToPhoton(ByRef<float_t> motionToPhoton) ;

// Ctor Parameters []
explicit XRDisplaySubsystem() ;

/// @brief Method .ctor addr 0x2d3ab84 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
NEED_NO_BOX(UnityEngine::XR::XRDisplaySubsystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem, "UnityEngine.XR", "XRDisplaySubsystem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::UnityEngine__XR__XRDisplaySubsystem__XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
