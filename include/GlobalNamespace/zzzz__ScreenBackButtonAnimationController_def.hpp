#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ScreenBackButtonAnimationController__AnimationType;
}
namespace GlobalNamespace {
class ScreenBackButtonAnimationController;
}
// Type: ::AnimationType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13552))
// CS Name: ScreenBackButtonAnimationController::AnimationType
struct CORDL_TYPE GlobalNamespace__ScreenBackButtonAnimationController__AnimationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScreenBackButtonAnimationController__AnimationType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ScreenBackButtonAnimationController__AnimationType(GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const&) = default;
                    constexpr GlobalNamespace__ScreenBackButtonAnimationController__AnimationType(GlobalNamespace__ScreenBackButtonAnimationController__AnimationType&&) = default;
                    constexpr GlobalNamespace__ScreenBackButtonAnimationController__AnimationType& operator=(GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScreenBackButtonAnimationController__AnimationType& operator=(GlobalNamespace__ScreenBackButtonAnimationController__AnimationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScreenBackButtonAnimationController__AnimationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ScreenBackButtonAnimationController__AnimationType_Unwrapped : int32_t {
__FadeIn = 0,
__FadeOut = 1,
__MoveIn = 2,
__MoveOut = 3,
__MoveIn2 = 4,
__MoveOut2 = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ScreenBackButtonAnimationController__AnimationType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ScreenBackButtonAnimationController__AnimationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FadeIn offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const FadeIn;

/// @brief Field FadeOut offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const FadeOut;

/// @brief Field MoveIn offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const MoveIn;

/// @brief Field MoveOut offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const MoveOut;

/// @brief Field MoveIn2 offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const MoveIn2;

/// @brief Field MoveOut2 offset 0
static GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType const MoveOut2;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScreenBackButtonAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13553))
// CS Name: ScreenBackButtonAnimationController
class CORDL_TYPE ScreenBackButtonAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using AnimationType = GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ScreenBackButtonAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: " const&", def_value: None }]
constexpr ScreenBackButtonAnimationController(ScreenBackButtonAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenBackButtonAnimationController", modifiers: "&&", def_value: None }]
constexpr ScreenBackButtonAnimationController(ScreenBackButtonAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenBackButtonAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScreenBackButtonAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenBackButtonAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenBackButtonAnimationController& operator=(ScreenBackButtonAnimationController&& o) noexcept = default;
  constexpr ScreenBackButtonAnimationController& operator=(ScreenBackButtonAnimationController const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t> __declspec(property(get=__get__animationHashes, put=__set__animationHashes))  _animationHashes;

constexpr void __set__animationHashes(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t> __get__animationHashes() const;


// Methods

/// @brief Method Awake addr 0x1fa34e4 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method StartAnimation addr 0x1fa3504 size 0x70 virtual false final false
 void StartAnimation(GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType animationType) ;

// Ctor Parameters []
explicit ScreenBackButtonAnimationController() ;

/// @brief Method .ctor addr 0x1fa3574 size 0x1e0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScreenBackButtonAnimationController__AnimationType, "", "ScreenBackButtonAnimationController/AnimationType");
NEED_NO_BOX(GlobalNamespace::ScreenBackButtonAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenBackButtonAnimationController, "", "ScreenBackButtonAnimationController");
