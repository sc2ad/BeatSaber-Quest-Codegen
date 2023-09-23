#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__VRRenderingParamsSetup__SceneType;
}
namespace GlobalNamespace {
class VRRenderingParamsSetup;
}
// Type: ::SceneType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15336))
// CS Name: VRRenderingParamsSetup::SceneType
struct CORDL_TYPE GlobalNamespace__VRRenderingParamsSetup__SceneType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__VRRenderingParamsSetup__SceneType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__VRRenderingParamsSetup__SceneType(GlobalNamespace__VRRenderingParamsSetup__SceneType const&) = default;
                    constexpr GlobalNamespace__VRRenderingParamsSetup__SceneType(GlobalNamespace__VRRenderingParamsSetup__SceneType&&) = default;
                    constexpr GlobalNamespace__VRRenderingParamsSetup__SceneType& operator=(GlobalNamespace__VRRenderingParamsSetup__SceneType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__VRRenderingParamsSetup__SceneType& operator=(GlobalNamespace__VRRenderingParamsSetup__SceneType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__VRRenderingParamsSetup__SceneType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__VRRenderingParamsSetup__SceneType_Unwrapped : int32_t {
__Undefined = 0,
__Menu = 1,
__Game = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__VRRenderingParamsSetup__SceneType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__VRRenderingParamsSetup__SceneType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType const Undefined;

/// @brief Field Menu offset 0
static GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType const Menu;

/// @brief Field Game offset 0
static GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType const Game;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VRRenderingParamsSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15337))
// CS Name: VRRenderingParamsSetup
class CORDL_TYPE VRRenderingParamsSetup : public UnityEngine::MonoBehaviour {
public:
// Declarations
using SceneType = GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VRRenderingParamsSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: " const&", def_value: None }]
constexpr VRRenderingParamsSetup(VRRenderingParamsSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: "&&", def_value: None }]
constexpr VRRenderingParamsSetup(VRRenderingParamsSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRRenderingParamsSetup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRRenderingParamsSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRRenderingParamsSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRRenderingParamsSetup& operator=(VRRenderingParamsSetup&& o) noexcept = default;
  constexpr VRRenderingParamsSetup& operator=(VRRenderingParamsSetup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get__vrResolutionScale, put=__set__vrResolutionScale))  _vrResolutionScale;

constexpr void __set__vrResolutionScale(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__vrResolutionScale() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__menuVRResolutionScaleMultiplier, put=__set__menuVRResolutionScaleMultiplier))  _menuVRResolutionScaleMultiplier;

constexpr void __set__menuVRResolutionScaleMultiplier(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__menuVRResolutionScaleMultiplier() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__useFixedFoveatedRenderingDuringGameplay, put=__set__useFixedFoveatedRenderingDuringGameplay))  _useFixedFoveatedRenderingDuringGameplay;

constexpr void __set__useFixedFoveatedRenderingDuringGameplay(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__useFixedFoveatedRenderingDuringGameplay() const;

 GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType __declspec(property(get=__get__sceneType, put=__set__sceneType))  _sceneType;

constexpr void __set__sceneType(GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType value) ;

constexpr GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType __get__sceneType() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Methods

/// @brief Method OnEnable addr 0x267b064 size 0x33c virtual false final false
 void OnEnable() ;

// Ctor Parameters []
explicit VRRenderingParamsSetup() ;

/// @brief Method .ctor addr 0x267b3a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__VRRenderingParamsSetup__SceneType, "", "VRRenderingParamsSetup/SceneType");
NEED_NO_BOX(GlobalNamespace::VRRenderingParamsSetup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRRenderingParamsSetup, "", "VRRenderingParamsSetup");
