#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarTweenController;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarTweenController___AppearAnimation_d__53;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarTweenController____c__DisplayClass52_0;
}
// Type: ::<>c__DisplayClass52_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4080))
// CS Name: AvatarTweenController::<>c__DisplayClass52_0
class CORDL_TYPE GlobalNamespace__AvatarTweenController____c__DisplayClass52_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__AvatarTweenController____c__DisplayClass52_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController____c__DisplayClass52_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0(GlobalNamespace__AvatarTweenController____c__DisplayClass52_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0(GlobalNamespace__AvatarTweenController____c__DisplayClass52_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarTweenController____c__DisplayClass52_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0& operator=(GlobalNamespace__AvatarTweenController____c__DisplayClass52_0&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarTweenController____c__DisplayClass52_0& operator=(GlobalNamespace__AvatarTweenController____c__DisplayClass52_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_partTransform, put=__set_partTransform))  partTransform;

constexpr void __set_partTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_partTransform() const;

 UnityEngine::Vector3 __declspec(property(get=__get_originalScale, put=__set_originalScale))  originalScale;

constexpr void __set_originalScale(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_originalScale() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__AvatarTweenController____c__DisplayClass52_0() ;

/// @brief Method .ctor addr 0x20c0f68 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreatePopTween>b__0 addr 0x20c1bfc size 0x38 virtual false final false
 void _CreatePopTween_b__0(float_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<AppearAnimation>d__53
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4081))
// CS Name: AvatarTweenController::<AppearAnimation>d__53
class CORDL_TYPE GlobalNamespace__AvatarTweenController___AppearAnimation_d__53 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__AvatarTweenController___AppearAnimation_d__53() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController___AppearAnimation_d__53", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53(GlobalNamespace__AvatarTweenController___AppearAnimation_d__53 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController___AppearAnimation_d__53", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53(GlobalNamespace__AvatarTweenController___AppearAnimation_d__53&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarTweenController___AppearAnimation_d__53(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53& operator=(GlobalNamespace__AvatarTweenController___AppearAnimation_d__53&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarTweenController___AppearAnimation_d__53& operator=(GlobalNamespace__AvatarTweenController___AppearAnimation_d__53 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::AvatarTweenController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AvatarTweenController value) ;

constexpr GlobalNamespace::AvatarTweenController __get___4__this() const;

 UnityEngine::WaitForSeconds __declspec(property(get=__get__waitYieldInstruction_5__2, put=__set__waitYieldInstruction_5__2))  _waitYieldInstruction_5__2;

constexpr void __set__waitYieldInstruction_5__2(UnityEngine::WaitForSeconds value) ;

constexpr UnityEngine::WaitForSeconds __get__waitYieldInstruction_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AvatarTweenController___AppearAnimation_d__53(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c0f70 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c1c34 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c1c38 size 0x20c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c1e44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c1e4c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c1e8c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DisappearAnimation>d__58
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4082))
// CS Name: AvatarTweenController::<DisappearAnimation>d__58
class CORDL_TYPE GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58(GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58(GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58& operator=(GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58& operator=(GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::AvatarTweenController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AvatarTweenController value) ;

constexpr GlobalNamespace::AvatarTweenController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20c1a68 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20c1e94 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20c1e98 size 0x27c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20c2114 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20c211c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20c215c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AvatarTweenController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4083))
// CS Name: AvatarTweenController
class CORDL_TYPE AvatarTweenController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisappearAnimation_d__58 = GlobalNamespace::GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58;

using _AppearAnimation_d__53 = GlobalNamespace::GlobalNamespace__AvatarTweenController___AppearAnimation_d__53;

using __c__DisplayClass52_0 = GlobalNamespace::GlobalNamespace__AvatarTweenController____c__DisplayClass52_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~AvatarTweenController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: " const&", def_value: None }]
constexpr AvatarTweenController(AvatarTweenController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarTweenController", modifiers: "&&", def_value: None }]
constexpr AvatarTweenController(AvatarTweenController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarTweenController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarTweenController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarTweenController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarTweenController& operator=(AvatarTweenController&& o) noexcept = default;
  constexpr AvatarTweenController& operator=(AvatarTweenController const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__avatarTransform, put=__set__avatarTransform))  _avatarTransform;

constexpr void __set__avatarTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__avatarTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__headParent, put=__set__headParent))  _headParent;

constexpr void __set__headParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headParent() const;

 UnityEngine::Transform __declspec(property(get=__get__leftHandTransform, put=__set__leftHandTransform))  _leftHandTransform;

constexpr void __set__leftHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftHandTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__rightHandTransform, put=__set__rightHandTransform))  _rightHandTransform;

constexpr void __set__rightHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightHandTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__bodyTransform, put=__set__bodyTransform))  _bodyTransform;

constexpr void __set__bodyTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__bodyTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__headInnerTransform, put=__set__headInnerTransform))  _headInnerTransform;

constexpr void __set__headInnerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headInnerTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__leftHandInnerTransform, put=__set__leftHandInnerTransform))  _leftHandInnerTransform;

constexpr void __set__leftHandInnerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftHandInnerTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__rightHandInnerTransform, put=__set__rightHandInnerTransform))  _rightHandInnerTransform;

constexpr void __set__rightHandInnerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightHandInnerTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__bodyInnerTransform, put=__set__bodyInnerTransform))  _bodyInnerTransform;

constexpr void __set__bodyInnerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__bodyInnerTransform() const;

 float_t __declspec(property(get=__get__popDuration, put=__set__popDuration))  _popDuration;

constexpr void __set__popDuration(float_t value) ;

constexpr float_t __get__popDuration() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__popEaseType, put=__set__popEaseType))  _popEaseType;

constexpr void __set__popEaseType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__popEaseType() const;

 float_t __declspec(property(get=__get__headPopAmount, put=__set__headPopAmount))  _headPopAmount;

constexpr void __set__headPopAmount(float_t value) ;

constexpr float_t __get__headPopAmount() const;

 float_t __declspec(property(get=__get__handsPopAmount, put=__set__handsPopAmount))  _handsPopAmount;

constexpr void __set__handsPopAmount(float_t value) ;

constexpr float_t __get__handsPopAmount() const;

 float_t __declspec(property(get=__get__clothesPopAmount, put=__set__clothesPopAmount))  _clothesPopAmount;

constexpr void __set__clothesPopAmount(float_t value) ;

constexpr float_t __get__clothesPopAmount() const;

 float_t __declspec(property(get=__get__allPopAmount, put=__set__allPopAmount))  _allPopAmount;

constexpr void __set__allPopAmount(float_t value) ;

constexpr float_t __get__allPopAmount() const;

 float_t __declspec(property(get=__get__appearDuration, put=__set__appearDuration))  _appearDuration;

constexpr void __set__appearDuration(float_t value) ;

constexpr float_t __get__appearDuration() const;

 float_t __declspec(property(get=__get__appearSpacing, put=__set__appearSpacing))  _appearSpacing;

constexpr void __set__appearSpacing(float_t value) ;

constexpr float_t __get__appearSpacing() const;

 float_t __declspec(property(get=__get__appearHeight, put=__set__appearHeight))  _appearHeight;

constexpr void __set__appearHeight(float_t value) ;

constexpr float_t __get__appearHeight() const;

 UnityEngine::Vector3 __declspec(property(get=__get__squashFactor, put=__set__squashFactor))  _squashFactor;

constexpr void __set__squashFactor(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__squashFactor() const;

 float_t __declspec(property(get=__get__disappearDuration, put=__set__disappearDuration))  _disappearDuration;

constexpr void __set__disappearDuration(float_t value) ;

constexpr float_t __get__disappearDuration() const;

 float_t __declspec(property(get=__get__disappearHeight, put=__set__disappearHeight))  _disappearHeight;

constexpr void __set__disappearHeight(float_t value) ;

constexpr float_t __get__disappearHeight() const;

 UnityEngine::Vector3 __declspec(property(get=__get__disappearSquash, put=__set__disappearSquash))  _disappearSquash;

constexpr void __set__disappearSquash(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__disappearSquash() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__disappearScaleEase, put=__set__disappearScaleEase))  _disappearScaleEase;

constexpr void __set__disappearScaleEase(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__disappearScaleEase() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__disappearPositionEase, put=__set__disappearPositionEase))  _disappearPositionEase;

constexpr void __set__disappearPositionEase(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__disappearPositionEase() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__popHeadTween, put=__set__popHeadTween))  _popHeadTween;

constexpr void __set__popHeadTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__popHeadTween() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__popLeftHandTween, put=__set__popLeftHandTween))  _popLeftHandTween;

constexpr void __set__popLeftHandTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__popLeftHandTween() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__popRightHandTween, put=__set__popRightHandTween))  _popRightHandTween;

constexpr void __set__popRightHandTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__popRightHandTween() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__popClothesTween, put=__set__popClothesTween))  _popClothesTween;

constexpr void __set__popClothesTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__popClothesTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearHeadPositionTween, put=__set__appearHeadPositionTween))  _appearHeadPositionTween;

constexpr void __set__appearHeadPositionTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearHeadPositionTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearHeadScaleTween, put=__set__appearHeadScaleTween))  _appearHeadScaleTween;

constexpr void __set__appearHeadScaleTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearHeadScaleTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearBodyPositionTween, put=__set__appearBodyPositionTween))  _appearBodyPositionTween;

constexpr void __set__appearBodyPositionTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearBodyPositionTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearBodyScaleTween, put=__set__appearBodyScaleTween))  _appearBodyScaleTween;

constexpr void __set__appearBodyScaleTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearBodyScaleTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearRightHandPositionTween, put=__set__appearRightHandPositionTween))  _appearRightHandPositionTween;

constexpr void __set__appearRightHandPositionTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearRightHandPositionTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearRightHandScaleTween, put=__set__appearRightHandScaleTween))  _appearRightHandScaleTween;

constexpr void __set__appearRightHandScaleTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearRightHandScaleTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearLeftHandPositionTween, put=__set__appearLeftHandPositionTween))  _appearLeftHandPositionTween;

constexpr void __set__appearLeftHandPositionTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearLeftHandPositionTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__appearLeftHandScaleTween, put=__set__appearLeftHandScaleTween))  _appearLeftHandScaleTween;

constexpr void __set__appearLeftHandScaleTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__appearLeftHandScaleTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__disappearScaleTween, put=__set__disappearScaleTween))  _disappearScaleTween;

constexpr void __set__disappearScaleTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__disappearScaleTween() const;

 Tweening::Tween_1<UnityEngine::Vector3> __declspec(property(get=__get__disappearPositionTween, put=__set__disappearPositionTween))  _disappearPositionTween;

constexpr void __set__disappearPositionTween(Tweening::Tween_1<UnityEngine::Vector3> value) ;

constexpr Tweening::Tween_1<UnityEngine::Vector3> __get__disappearPositionTween() const;

 UnityEngine::Vector3 __declspec(property(get=__get__avatarLocalPosition, put=__set__avatarLocalPosition))  _avatarLocalPosition;

constexpr void __set__avatarLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__avatarLocalPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__avatarLocalScale, put=__set__avatarLocalScale))  _avatarLocalScale;

constexpr void __set__avatarLocalScale(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__avatarLocalScale() const;


// Methods

/// @brief Method Awake addr 0x20c0a98 size 0x4c virtual false final false
 void Awake() ;

/// @brief Method OnDisable addr 0x20c0ae4 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method PresentAvatar addr 0x20c0b7c size 0x28 virtual false final false
 void PresentAvatar() ;

/// @brief Method HideAvatar addr 0x20c0c0c size 0x28 virtual false final false
 void HideAvatar() ;

/// @brief Method PopAll addr 0x20c0c9c size 0x2c virtual false final false
 void PopAll() ;

/// @brief Method PopHead addr 0x20c0e28 size 0x8 virtual false final false
 void PopHead() ;

/// @brief Method PopHands addr 0x20c0e30 size 0x8 virtual false final false
 void PopHands() ;

/// @brief Method PopClothes addr 0x20c0e38 size 0x8 virtual false final false
 void PopClothes() ;

/// @brief Method PopHead addr 0x20c0cc8 size 0x60 virtual false final false
 void PopHead(float_t popAmount) ;

/// @brief Method PopHands addr 0x20c0d88 size 0xa0 virtual false final false
 void PopHands(float_t popAmount) ;

/// @brief Method PopClothes addr 0x20c0d28 size 0x60 virtual false final false
 void PopClothes(float_t popAmount) ;

/// @brief Method CreatePopTween addr 0x20c0e40 size 0x128 virtual false final false
 Tweening::Tween_1<float_t> CreatePopTween(UnityEngine::Transform partTransform, float_t popAmount) ;

/// @brief Method AppearAnimation addr 0x20c0ba4 size 0x68 virtual false final false
 System::Collections::IEnumerator AppearAnimation() ;

/// @brief Method AppearBody addr 0x20c0f98 size 0x2b0 virtual false final false
 void AppearBody() ;

/// @brief Method AppearHead addr 0x20c1248 size 0x2b0 virtual false final false
 void AppearHead() ;

/// @brief Method AppearLeftHand addr 0x20c14f8 size 0x2b8 virtual false final false
 void AppearLeftHand() ;

/// @brief Method AppearRightHand addr 0x20c17b0 size 0x2b8 virtual false final false
 void AppearRightHand() ;

/// @brief Method DisappearAnimation addr 0x20c0c34 size 0x68 virtual false final false
 System::Collections::IEnumerator DisappearAnimation() ;

/// @brief Method StopAll addr 0x20c0ae8 size 0x94 virtual false final false
 void StopAll() ;

// Ctor Parameters []
explicit AvatarTweenController() ;

/// @brief Method .ctor addr 0x20c1a90 size 0x54 virtual false final false
 void _ctor() ;

/// @brief Method <AppearBody>b__54_0 addr 0x20c1ae4 size 0x1c virtual false final false
 void _AppearBody_b__54_0(UnityEngine::Vector3 val) ;

/// @brief Method <AppearBody>b__54_1 addr 0x20c1b00 size 0x1c virtual false final false
 void _AppearBody_b__54_1(UnityEngine::Vector3 val) ;

/// @brief Method <AppearHead>b__55_0 addr 0x20c1b1c size 0x1c virtual false final false
 void _AppearHead_b__55_0(UnityEngine::Vector3 val) ;

/// @brief Method <AppearHead>b__55_1 addr 0x20c1b38 size 0x1c virtual false final false
 void _AppearHead_b__55_1(UnityEngine::Vector3 val) ;

/// @brief Method <AppearLeftHand>b__56_0 addr 0x20c1b54 size 0x1c virtual false final false
 void _AppearLeftHand_b__56_0(UnityEngine::Vector3 val) ;

/// @brief Method <AppearLeftHand>b__56_1 addr 0x20c1b70 size 0x1c virtual false final false
 void _AppearLeftHand_b__56_1(UnityEngine::Vector3 val) ;

/// @brief Method <AppearRightHand>b__57_0 addr 0x20c1b8c size 0x1c virtual false final false
 void _AppearRightHand_b__57_0(UnityEngine::Vector3 val) ;

/// @brief Method <AppearRightHand>b__57_1 addr 0x20c1ba8 size 0x1c virtual false final false
 void _AppearRightHand_b__57_1(UnityEngine::Vector3 val) ;

/// @brief Method <DisappearAnimation>b__58_0 addr 0x20c1bc4 size 0x1c virtual false final false
 void _DisappearAnimation_b__58_0(UnityEngine::Vector3 val) ;

/// @brief Method <DisappearAnimation>b__58_1 addr 0x20c1be0 size 0x1c virtual false final false
 void _DisappearAnimation_b__58_1(UnityEngine::Vector3 val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarTweenController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarTweenController, "", "AvatarTweenController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarTweenController___AppearAnimation_d__53);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarTweenController___AppearAnimation_d__53, "", "AvatarTweenController/<AppearAnimation>d__53");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarTweenController___DisappearAnimation_d__58, "", "AvatarTweenController/<DisappearAnimation>d__58");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarTweenController____c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarTweenController____c__DisplayClass52_0, "", "AvatarTweenController/<>c__DisplayClass52_0");
