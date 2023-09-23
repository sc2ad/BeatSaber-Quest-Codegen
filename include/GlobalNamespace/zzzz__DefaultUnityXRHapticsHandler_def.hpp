#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultUnityXRHapticsHandler;
}
// Type: ::DefaultUnityXRHapticsHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13914))
// CS Name: DefaultUnityXRHapticsHandler
class CORDL_TYPE DefaultUnityXRHapticsHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IUnityXRHapticsHandler
constexpr operator  GlobalNamespace::IUnityXRHapticsHandler() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultUnityXRHapticsHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: " const&", def_value: None }]
constexpr DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultUnityXRHapticsHandler", modifiers: "&&", def_value: None }]
constexpr DefaultUnityXRHapticsHandler(DefaultUnityXRHapticsHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultUnityXRHapticsHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultUnityXRHapticsHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultUnityXRHapticsHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultUnityXRHapticsHandler& operator=(DefaultUnityXRHapticsHandler&& o) noexcept = default;
  constexpr DefaultUnityXRHapticsHandler& operator=(DefaultUnityXRHapticsHandler const& o) noexcept = default;
                


// Fields

 UnityEngine::XR::XRNode __declspec(property(get=__get__node, put=__set__node))  _node;

constexpr void __set__node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get__node() const;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "UnityEngine::XR::XRNode", modifiers: "", def_value: None }]
explicit DefaultUnityXRHapticsHandler(UnityEngine::XR::XRNode node) ;

/// @brief Method .ctor addr 0x1f84ed4 size 0x28 virtual false final false
 void _ctor(UnityEngine::XR::XRNode node) ;

/// @brief Method Destroy addr 0x1f84efc size 0x4 virtual false final false
 void Destroy() ;

/// @brief Method TriggerHapticPulse addr 0x1f84f00 size 0x4c virtual true final true
 void TriggerHapticPulse(float_t strength, float_t duration) ;

/// @brief Method StopHaptics addr 0x1f84f4c size 0x30 virtual true final true
 void StopHaptics() ;

/// @brief Method Dispose addr 0x1f84f7c size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DefaultUnityXRHapticsHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultUnityXRHapticsHandler, "", "DefaultUnityXRHapticsHandler");
