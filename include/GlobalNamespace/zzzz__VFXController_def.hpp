#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Animation;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class VFXController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__VFXController___MainCoroutine_d__9;
}
// Type: ::<MainCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13849))
// CS Name: VFXController::<MainCoroutine>d__9
class CORDL_TYPE ____GlobalNamespace__VFXController___MainCoroutine_d__9 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____GlobalNamespace__VFXController___MainCoroutine_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VFXController___MainCoroutine_d__9", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9(____GlobalNamespace__VFXController___MainCoroutine_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__VFXController___MainCoroutine_d__9", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9(____GlobalNamespace__VFXController___MainCoroutine_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__VFXController___MainCoroutine_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9& operator=(____GlobalNamespace__VFXController___MainCoroutine_d__9&& o) noexcept = default;
  constexpr ____GlobalNamespace__VFXController___MainCoroutine_d__9& operator=(____GlobalNamespace__VFXController___MainCoroutine_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::VFXController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::VFXController value) ;

constexpr ::GlobalNamespace::VFXController __get___4__this() const;

 bool __declspec(property(get=__get_deactivateAfterDuration, put=__set_deactivateAfterDuration))  deactivateAfterDuration;

constexpr void __set_deactivateAfterDuration(bool value) ;

constexpr bool __get_deactivateAfterDuration() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__VFXController___MainCoroutine_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f7d634 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f7d664 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f7d668 size 0x184 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f7d7ec size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f7d7f4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f7d834 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::VFXController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13850))
// CS Name: VFXController
class CORDL_TYPE VFXController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MainCoroutine_d__9 = ::GlobalNamespace::____GlobalNamespace__VFXController___MainCoroutine_d__9;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~VFXController() = default;

// Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: " const&", def_value: None }]
constexpr VFXController(VFXController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VFXController", modifiers: "&&", def_value: None }]
constexpr VFXController(VFXController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VFXController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VFXController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VFXController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VFXController& operator=(VFXController&& o) noexcept = default;
  constexpr VFXController& operator=(VFXController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem> __get__particleSystems() const;

 ::UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(::UnityEngine::Animation value) ;

constexpr ::UnityEngine::Animation __get__animation() const;

 bool __declspec(property(get=__get__deactivateAfterAnimationDuration, put=__set__deactivateAfterAnimationDuration))  _deactivateAfterAnimationDuration;

constexpr void __set__deactivateAfterAnimationDuration(bool value) ;

constexpr bool __get__deactivateAfterAnimationDuration() const;


// Properties

 ::UnityEngine::Animation __declspec(property(get=get_animation))  animation;

 ::ArrayW<::UnityEngine::ParticleSystem> __declspec(property(get=get_particleSystems))  particleSystems;


// Methods

/// @brief Method get_animation addr 0x1f7d464 size 0x8 virtual false final false
 ::UnityEngine::Animation get_animation() ;

/// @brief Method get_particleSystems addr 0x1f7d46c size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::ParticleSystem> get_particleSystems() ;

/// @brief Method Awake addr 0x1f7d474 size 0x24 virtual false final false
 void Awake() ;

/// @brief Method Play addr 0x1f7d498 size 0x110 virtual false final false
 void Play() ;

/// @brief Method MainCoroutine addr 0x1f7d5a8 size 0x8c virtual false final false
 ::System::Collections::IEnumerator MainCoroutine(bool deactivateAfterDuration, float_t duration) ;

// Ctor Parameters []
explicit VFXController() ;

/// @brief Method .ctor addr 0x1f7d65c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VFXController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VFXController, "", "VFXController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__VFXController___MainCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__VFXController___MainCoroutine_d__9, "", "VFXController/<MainCoroutine>d__9");
