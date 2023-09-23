#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class FlickeringNeonSign;
}
namespace GlobalNamespace {
class GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16;
}
// Type: ::<FlickeringCoroutine>d__16
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5084))
// CS Name: FlickeringNeonSign::<FlickeringCoroutine>d__16
class CORDL_TYPE GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16(GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16(GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16& operator=(GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16&& o) noexcept = default;
  constexpr GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16& operator=(GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::FlickeringNeonSign __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::FlickeringNeonSign value) ;

constexpr GlobalNamespace::FlickeringNeonSign __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16(int32_t __1__state) ;

/// @brief Method .ctor addr 0x22692ec size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2269438 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x226943c size 0x118 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2269554 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x226955c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x226959c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FlickeringNeonSign
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5085))
// CS Name: FlickeringNeonSign
class CORDL_TYPE FlickeringNeonSign : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _FlickeringCoroutine_d__16 = GlobalNamespace::GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~FlickeringNeonSign() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: " const&", def_value: None }]
constexpr FlickeringNeonSign(FlickeringNeonSign const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "&&", def_value: None }]
constexpr FlickeringNeonSign(FlickeringNeonSign&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlickeringNeonSign(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlickeringNeonSign& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlickeringNeonSign& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlickeringNeonSign& operator=(FlickeringNeonSign&& o) noexcept = default;
  constexpr FlickeringNeonSign& operator=(FlickeringNeonSign const& o) noexcept = default;
                


// Fields

 UnityEngine::SpriteRenderer __declspec(property(get=__get__flickeringSprite, put=__set__flickeringSprite))  _flickeringSprite;

constexpr void __set__flickeringSprite(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__flickeringSprite() const;

 GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__light, put=__set__light))  _light;

constexpr void __set__light(GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr GlobalNamespace::TubeBloomPrePassLight __get__light() const;

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__particleSystems() const;

 float_t __declspec(property(get=__get__minOnDelay, put=__set__minOnDelay))  _minOnDelay;

constexpr void __set__minOnDelay(float_t value) ;

constexpr float_t __get__minOnDelay() const;

 float_t __declspec(property(get=__get__maxOnDelay, put=__set__maxOnDelay))  _maxOnDelay;

constexpr void __set__maxOnDelay(float_t value) ;

constexpr float_t __get__maxOnDelay() const;

 float_t __declspec(property(get=__get__minOffDelay, put=__set__minOffDelay))  _minOffDelay;

constexpr void __set__minOffDelay(float_t value) ;

constexpr float_t __get__minOffDelay() const;

 float_t __declspec(property(get=__get__maxOffDelay, put=__set__maxOffDelay))  _maxOffDelay;

constexpr void __set__maxOffDelay(float_t value) ;

constexpr float_t __get__maxOffDelay() const;

 UnityEngine::Color __declspec(property(get=__get__spriteOnColor, put=__set__spriteOnColor))  _spriteOnColor;

constexpr void __set__spriteOnColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__spriteOnColor() const;

 UnityEngine::Color __declspec(property(get=__get__lightOnColor, put=__set__lightOnColor))  _lightOnColor;

constexpr void __set__lightOnColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__lightOnColor() const;

 UnityEngine::Material __declspec(property(get=__get__onMaterial, put=__set__onMaterial))  _onMaterial;

constexpr void __set__onMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__onMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__offMaterial, put=__set__offMaterial))  _offMaterial;

constexpr void __set__offMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__offMaterial() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__sparksAudioClips, put=__set__sparksAudioClips))  _sparksAudioClips;

constexpr void __set__sparksAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__sparksAudioClips() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__sparksAudioClipPicker, put=__set__sparksAudioClipPicker))  _sparksAudioClipPicker;

constexpr void __set__sparksAudioClipPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__sparksAudioClipPicker() const;


// Methods

/// @brief Method Awake addr 0x22691a4 size 0x84 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2269228 size 0x3c virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x2269264 size 0x20 virtual false final false
 void OnEnable() ;

/// @brief Method FlickeringCoroutine addr 0x2269284 size 0x68 virtual false final false
 System::Collections::IEnumerator FlickeringCoroutine() ;

/// @brief Method SetOn addr 0x2269314 size 0x110 virtual false final false
 void SetOn(bool on) ;

// Ctor Parameters []
explicit FlickeringNeonSign() ;

/// @brief Method .ctor addr 0x2269424 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlickeringNeonSign);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlickeringNeonSign, "", "FlickeringNeonSign");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlickeringNeonSign___FlickeringCoroutine_d__16, "", "FlickeringNeonSign/<FlickeringCoroutine>d__16");
