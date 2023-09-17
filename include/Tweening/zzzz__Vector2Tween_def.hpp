#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace Tweening {
class Vector2Tween;
}
// Type: Tweening::Vector2Tween
namespace Tweening {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(15937)), TypeDefinitionIndex(TypeDefinitionIndex(10184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15932))
// CS Name: Tweening.Vector2Tween
class CORDL_TYPE Vector2Tween : public ::Tweening::Tween_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~Vector2Tween() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: " const&", def_value: None }]
constexpr Vector2Tween(Vector2Tween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: "&&", def_value: None }]
constexpr Vector2Tween(Vector2Tween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector2Tween(void* ptr) noexcept : ::Tweening::Tween_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr Vector2Tween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector2Tween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector2Tween& operator=(Vector2Tween&& o) noexcept = default;
  constexpr Vector2Tween& operator=(Vector2Tween const& o) noexcept = default;
                


// Fields

static ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,::System::Action_1<::UnityEngine::Vector2>,float_t,::GlobalNamespace::EaseType,float_t,::Tweening::Vector2Tween> __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

static void __set_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,::System::Action_1<::UnityEngine::Vector2>,float_t,::GlobalNamespace::EaseType,float_t,::Tweening::Vector2Tween> value) ;

static ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,::System::Action_1<::UnityEngine::Vector2>,float_t,::GlobalNamespace::EaseType,float_t,::Tweening::Vector2Tween> __get_Pool() ;


// Methods

// Ctor Parameters []
explicit Vector2Tween() ;

/// @brief Method .ctor addr 0x287a0c4 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "::System::Action_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Vector2Tween(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2> onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x287a10c size 0xa8 virtual false final false
 void _ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2> onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method GetValue addr 0x287a1b4 size 0x34 virtual true final false
 ::UnityEngine::Vector2 GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
} // end anonymous namespace
NEED_NO_BOX(::Tweening::Vector2Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Vector2Tween, "Tweening", "Vector2Tween");
