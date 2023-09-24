#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace TMPro {
class TMP_Text;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
class TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;
}
namespace TMPro {
struct TMP_MeshInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAnimator;
}
namespace TMPro {
class TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;
}
// Type: ::<DoSpriteAnimationInternal>d__7
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12360))
// CS Name: TMPro.TMP_SpriteAnimator::<DoSpriteAnimationInternal>d__7
class CORDL_TYPE TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x228};

virtual ~TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7(TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7(TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7& operator=(TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7&& o) noexcept = default;
  constexpr TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7& operator=(TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 TMPro::TMP_SpriteAnimator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(TMPro::TMP_SpriteAnimator value) ;

constexpr TMPro::TMP_SpriteAnimator __get___4__this() const;

 int32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(int32_t value) ;

constexpr int32_t __get_start() const;

 int32_t __declspec(property(get=__get_end, put=__set_end))  end;

constexpr void __set_end(int32_t value) ;

constexpr int32_t __get_end() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset))  spriteAsset;

constexpr void __set_spriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_spriteAsset() const;

 int32_t __declspec(property(get=__get_currentCharacter, put=__set_currentCharacter))  currentCharacter;

constexpr void __set_currentCharacter(int32_t value) ;

constexpr int32_t __get_currentCharacter() const;

 int32_t __declspec(property(get=__get_framerate, put=__set_framerate))  framerate;

constexpr void __set_framerate(int32_t value) ;

constexpr int32_t __get_framerate() const;

 int32_t __declspec(property(get=__get__currentFrame_5__2, put=__set__currentFrame_5__2))  _currentFrame_5__2;

constexpr void __set__currentFrame_5__2(int32_t value) ;

constexpr int32_t __get__currentFrame_5__2() const;

 TMPro::TMP_CharacterInfo __declspec(property(get=__get__charInfo_5__3, put=__set__charInfo_5__3))  _charInfo_5__3;

constexpr void __set__charInfo_5__3(TMPro::TMP_CharacterInfo value) ;

constexpr TMPro::TMP_CharacterInfo __get__charInfo_5__3() const;

 int32_t __declspec(property(get=__get__materialIndex_5__4, put=__set__materialIndex_5__4))  _materialIndex_5__4;

constexpr void __set__materialIndex_5__4(int32_t value) ;

constexpr int32_t __get__materialIndex_5__4() const;

 int32_t __declspec(property(get=__get__vertexIndex_5__5, put=__set__vertexIndex_5__5))  _vertexIndex_5__5;

constexpr void __set__vertexIndex_5__5(int32_t value) ;

constexpr int32_t __get__vertexIndex_5__5() const;

 TMPro::TMP_MeshInfo __declspec(property(get=__get__meshInfo_5__6, put=__set__meshInfo_5__6))  _meshInfo_5__6;

constexpr void __set__meshInfo_5__6(TMPro::TMP_MeshInfo value) ;

constexpr TMPro::TMP_MeshInfo __get__meshInfo_5__6() const;

 float_t __declspec(property(get=__get__baseSpriteScale_5__7, put=__set__baseSpriteScale_5__7))  _baseSpriteScale_5__7;

constexpr void __set__baseSpriteScale_5__7(float_t value) ;

constexpr float_t __get__baseSpriteScale_5__7() const;

 float_t __declspec(property(get=__get__elapsedTime_5__8, put=__set__elapsedTime_5__8))  _elapsedTime_5__8;

constexpr void __set__elapsedTime_5__8(float_t value) ;

constexpr float_t __get__elapsedTime_5__8() const;

 float_t __declspec(property(get=__get__targetTime_5__9, put=__set__targetTime_5__9))  _targetTime_5__9;

constexpr void __set__targetTime_5__9(float_t value) ;

constexpr float_t __get__targetTime_5__9() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static TMPro::TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aaa804 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aaa8ac size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aaa8b0 size 0x8e0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aab1b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aab1bc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aab1fc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_SpriteAnimator
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12361))
// CS Name: TMPro.TMP_SpriteAnimator
class CORDL_TYPE TMP_SpriteAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoSpriteAnimationInternal_d__7 = TMPro::TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TMP_SpriteAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: " const&", def_value: None }]
constexpr TMP_SpriteAnimator(TMP_SpriteAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: "&&", def_value: None }]
constexpr TMP_SpriteAnimator(TMP_SpriteAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SpriteAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TMP_SpriteAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SpriteAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SpriteAnimator& operator=(TMP_SpriteAnimator&& o) noexcept = default;
  constexpr TMP_SpriteAnimator& operator=(TMP_SpriteAnimator const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,bool> __declspec(property(get=__get_m_animations, put=__set_m_animations))  m_animations;

constexpr void __set_m_animations(System::Collections::Generic::Dictionary_2<int32_t,bool> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,bool> __get_m_animations() const;

 TMPro::TMP_Text __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent))  m_TextComponent;

constexpr void __set_m_TextComponent(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get_m_TextComponent() const;


// Methods

/// @brief Method Awake addr 0x2aaa5c8 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2aaa618 size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2aaa61c size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method StopAllAnimations addr 0x2aaa620 size 0x5c virtual false final false
 void StopAllAnimations() ;

/// @brief Method DoSpriteAnimation addr 0x2aaa67c size 0xe8 virtual false final false
 void DoSpriteAnimation(int32_t currentCharacter, TMPro::TMP_SpriteAsset spriteAsset, int32_t start, int32_t end, int32_t framerate) ;

/// @brief Method DoSpriteAnimationInternal addr 0x2aaa764 size 0xa0 virtual false final false
 System::Collections::IEnumerator DoSpriteAnimationInternal(int32_t currentCharacter, TMPro::TMP_SpriteAsset spriteAsset, int32_t start, int32_t end, int32_t framerate) ;

static TMPro::TMP_SpriteAnimator New_ctor() ;

/// @brief Method .ctor addr 0x2aaa82c size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SpriteAnimator);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAnimator, "TMPro", "TMP_SpriteAnimator");
NEED_NO_BOX(TMPro::TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7, "TMPro", "TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7");
