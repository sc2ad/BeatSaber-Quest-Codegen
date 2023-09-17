#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCubemapCapture;
}
// Type: ::OVRCubemapCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8886))
// CS Name: OVRCubemapCapture
class CORDL_TYPE OVRCubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRCubemapCapture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: " const&", def_value: None }]
constexpr OVRCubemapCapture(OVRCubemapCapture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: "&&", def_value: None }]
constexpr OVRCubemapCapture(OVRCubemapCapture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRCubemapCapture(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRCubemapCapture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRCubemapCapture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRCubemapCapture& operator=(OVRCubemapCapture&& o) noexcept = default;
  constexpr OVRCubemapCapture& operator=(OVRCubemapCapture const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_autoTriggerAfterLaunch, put=__set_autoTriggerAfterLaunch))  autoTriggerAfterLaunch;

constexpr void __set_autoTriggerAfterLaunch(bool value) ;

constexpr bool __get_autoTriggerAfterLaunch() const;

 float_t __declspec(property(get=__get_autoTriggerDelay, put=__set_autoTriggerDelay))  autoTriggerDelay;

constexpr void __set_autoTriggerDelay(float_t value) ;

constexpr float_t __get_autoTriggerDelay() const;

 float_t __declspec(property(get=__get_autoTriggerElapse, put=__set_autoTriggerElapse))  autoTriggerElapse;

constexpr void __set_autoTriggerElapse(float_t value) ;

constexpr float_t __get_autoTriggerElapse() const;

 ::UnityEngine::KeyCode __declspec(property(get=__get_triggeredByKey, put=__set_triggeredByKey))  triggeredByKey;

constexpr void __set_triggeredByKey(::UnityEngine::KeyCode value) ;

constexpr ::UnityEngine::KeyCode __get_triggeredByKey() const;

 ::StringW __declspec(property(get=__get_pathName, put=__set_pathName))  pathName;

constexpr void __set_pathName(::StringW value) ;

constexpr ::StringW __get_pathName() const;

 int32_t __declspec(property(get=__get_cubemapSize, put=__set_cubemapSize))  cubemapSize;

constexpr void __set_cubemapSize(int32_t value) ;

constexpr int32_t __get_cubemapSize() const;


// Methods

/// @brief Method Update addr 0x261dbfc size 0xa8 virtual false final false
 void Update() ;

/// @brief Method TriggerCubemapCapture addr 0x261dca4 size 0x2b0 virtual false final false
static void TriggerCubemapCapture(::UnityEngine::Vector3 capturePos, int32_t cubemapSize, ::StringW pathName) ;

/// @brief Method RenderIntoCubemap addr 0x261df54 size 0x580 virtual false final false
static void RenderIntoCubemap(::UnityEngine::Camera ownerCamera, ::UnityEngine::Cubemap outCubemap) ;

/// @brief Method SaveCubemapCapture addr 0x261e4d4 size 0x774 virtual false final false
static bool SaveCubemapCapture(::UnityEngine::Cubemap cubemap, ::StringW pathName) ;

// Ctor Parameters []
explicit OVRCubemapCapture() ;

/// @brief Method .ctor addr 0x261ec48 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRCubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCubemapCapture, "", "OVRCubemapCapture");
