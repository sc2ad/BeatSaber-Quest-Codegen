#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class AnimationClip;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine {
struct PlayMode;
}
namespace UnityEngine {
class AnimationState;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class ____UnityEngine__Animation__Enumerator;
}
// Type: ::Enumerator
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15035))
// CS Name: UnityEngine.Animation::Enumerator
class CORDL_TYPE ____UnityEngine__Animation__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__Animation__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Animation__Enumerator", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Animation__Enumerator(____UnityEngine__Animation__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Animation__Enumerator", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Animation__Enumerator(____UnityEngine__Animation__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Animation__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Animation__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Animation__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Animation__Enumerator& operator=(____UnityEngine__Animation__Enumerator&& o) noexcept = default;
  constexpr ____UnityEngine__Animation__Enumerator& operator=(____UnityEngine__Animation__Enumerator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Animation __declspec(property(get=__get_m_Outer, put=__set_m_Outer))  m_Outer;

constexpr void __set_m_Outer(::UnityEngine::Animation value) ;

constexpr ::UnityEngine::Animation __get_m_Outer() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::UnityEngine::Animation", modifiers: "", def_value: None }]
explicit ____UnityEngine__Animation__Enumerator(::UnityEngine::Animation outer) ;

/// @brief Method .ctor addr 0x2b1a7c4 size 0x30 virtual false final false
 void _ctor(::UnityEngine::Animation outer) ;

/// @brief Method get_Current addr 0x2b1a8b0 size 0x4c virtual true final true
 ::bs_hook::Il2CppWrapperType get_Current() ;

/// @brief Method MoveNext addr 0x2b1a8fc size 0x60 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x2b1a95c size 0xc virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Animation
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15036))
// CS Name: UnityEngine.Animation
class CORDL_TYPE Animation : public ::UnityEngine::Behaviour {
public:
// Declarations
using Enumerator = ::UnityEngine::____UnityEngine__Animation__Enumerator;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Animation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: " const&", def_value: None }]
constexpr Animation(Animation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Animation", modifiers: "&&", def_value: None }]
constexpr Animation(Animation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Animation(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr Animation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Animation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Animation& operator=(Animation&& o) noexcept = default;
  constexpr Animation& operator=(Animation const& o) noexcept = default;
                


// Properties

 ::UnityEngine::AnimationClip __declspec(property(get=get_clip))  clip;

 ::UnityEngine::AnimationState __declspec(property(get=get_Item))  Item;

 bool __declspec(property(get=get_animatePhysics))  animatePhysics;


// Methods

/// @brief Method get_clip addr 0x2b1a410 size 0x3c virtual false final false
 ::UnityEngine::AnimationClip get_clip() ;

/// @brief Method Rewind addr 0x2b1a44c size 0x3c virtual false final false
 void Rewind() ;

/// @brief Method Rewind addr 0x2b1a488 size 0x44 virtual false final false
 void Rewind(::StringW name) ;

/// @brief Method RewindNamed addr 0x2b1a4cc size 0x44 virtual false final false
 void RewindNamed(::StringW name) ;

/// @brief Method Sample addr 0x2b1a510 size 0x3c virtual false final false
 void Sample() ;

/// @brief Method get_Item addr 0x2b1a54c size 0x44 virtual false final false
 ::UnityEngine::AnimationState get_Item(::StringW name) ;

/// @brief Method Play addr 0x2b1a5d4 size 0x40 virtual false final false
 bool Play() ;

/// @brief Method Play addr 0x2b1a614 size 0x44 virtual false final false
 bool Play(::UnityEngine::PlayMode mode) ;

/// @brief Method PlayDefaultAnimation addr 0x2b1a658 size 0x44 virtual false final false
 bool PlayDefaultAnimation(::UnityEngine::PlayMode mode) ;

/// @brief Method CrossFade addr 0x2b1a69c size 0x58 virtual false final false
 void CrossFade(::StringW animation, float_t fadeLength) ;

/// @brief Method CrossFade addr 0x2b1a6f4 size 0x64 virtual false final false
 void CrossFade(::StringW animation, float_t fadeLength, ::UnityEngine::PlayMode mode) ;

/// @brief Method GetEnumerator addr 0x2b1a758 size 0x6c virtual true final true
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method GetState addr 0x2b1a590 size 0x44 virtual false final false
 ::UnityEngine::AnimationState GetState(::StringW name) ;

/// @brief Method GetStateAtIndex addr 0x2b1a7f4 size 0x44 virtual false final false
 ::UnityEngine::AnimationState GetStateAtIndex(int32_t index) ;

/// @brief Method GetStateCount addr 0x2b1a838 size 0x3c virtual false final false
 int32_t GetStateCount() ;

/// @brief Method get_animatePhysics addr 0x2b1a874 size 0x3c virtual false final false
 bool get_animatePhysics() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Animation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animation, "UnityEngine", "Animation");
NEED_NO_BOX(::UnityEngine::____UnityEngine__Animation__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__Animation__Enumerator, "UnityEngine", "Animation/Enumerator");
