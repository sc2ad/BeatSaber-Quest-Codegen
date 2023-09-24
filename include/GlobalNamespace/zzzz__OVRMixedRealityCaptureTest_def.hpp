#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Fovf;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureTest;
}
// Type: ::CameraMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8932))
// CS Name: OVRMixedRealityCaptureTest::CameraMode
struct CORDL_TYPE GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode(GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode const&) = default;
                    constexpr GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode(GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode&&) = default;
                    constexpr GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode& operator=(GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode& operator=(GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode_Unwrapped : int32_t {
__Normal = 0,
__OverrideFov = 1,
__ThirdPerson = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode const Normal;

/// @brief Field OverrideFov offset 0
static GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode const OverrideFov;

/// @brief Field ThirdPerson offset 0
static GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode const ThirdPerson;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRMixedRealityCaptureTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8933))
// CS Name: OVRMixedRealityCaptureTest
class CORDL_TYPE OVRMixedRealityCaptureTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
using CameraMode = GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRMixedRealityCaptureTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: " const&", def_value: None }]
constexpr OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "&&", def_value: None }]
constexpr OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMixedRealityCaptureTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMixedRealityCaptureTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMixedRealityCaptureTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMixedRealityCaptureTest& operator=(OVRMixedRealityCaptureTest&& o) noexcept = default;
  constexpr OVRMixedRealityCaptureTest& operator=(OVRMixedRealityCaptureTest const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_inited, put=__set_inited))  inited;

constexpr void __set_inited(bool value) ;

constexpr bool __get_inited() const;

 GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode __declspec(property(get=__get_currentMode, put=__set_currentMode))  currentMode;

constexpr void __set_currentMode(GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode __get_currentMode() const;

 UnityEngine::Camera __declspec(property(get=__get_defaultExternalCamera, put=__set_defaultExternalCamera))  defaultExternalCamera;

constexpr void __set_defaultExternalCamera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get_defaultExternalCamera() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf __declspec(property(get=__get_defaultFov, put=__set_defaultFov))  defaultFov;

constexpr void __set_defaultFov(GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__Fovf __get_defaultFov() const;


// Methods

/// @brief Method Start addr 0x2628010 size 0xb0 virtual false final false
 void Start() ;

/// @brief Method Initialize addr 0x26280c0 size 0x224 virtual false final false
 void Initialize() ;

/// @brief Method UpdateDefaultExternalCamera addr 0x26282e4 size 0x428 virtual false final false
 void UpdateDefaultExternalCamera() ;

/// @brief Method Update addr 0x262870c size 0x738 virtual false final false
 void Update() ;

static GlobalNamespace::OVRMixedRealityCaptureTest New_ctor() ;

/// @brief Method .ctor addr 0x2628e44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMixedRealityCaptureTest__CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
NEED_NO_BOX(GlobalNamespace::OVRMixedRealityCaptureTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureTest, "", "OVRMixedRealityCaptureTest");
