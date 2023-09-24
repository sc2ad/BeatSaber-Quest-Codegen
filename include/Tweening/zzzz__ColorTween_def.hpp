#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Tweening {
class ColorTween;
}
// Type: Tweening::ColorTween
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10192)), TypeDefinitionIndex(TypeDefinitionIndex(15937)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 280 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15934))
// CS Name: Tweening.ColorTween
class CORDL_TYPE ColorTween : public Tweening::Tween_1<UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ColorTween() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTween", modifiers: " const&", def_value: None }]
constexpr ColorTween(ColorTween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTween", modifiers: "&&", def_value: None }]
constexpr ColorTween(ColorTween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorTween(void* ptr) noexcept : Tweening::Tween_1<UnityEngine::Color>(ptr) {
}


  constexpr ColorTween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorTween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorTween& operator=(ColorTween&& o) noexcept = default;
  constexpr ColorTween& operator=(ColorTween const& o) noexcept = default;
                


// Fields

static Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween> __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

static void __set_Pool(Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween> value) ;

static Zenject::StaticMemoryPool_7<UnityEngine::Color,UnityEngine::Color,System::Action_1<UnityEngine::Color>,float_t,GlobalNamespace::EaseType,float_t,Tweening::ColorTween> __get_Pool() ;


// Methods

static Tweening::ColorTween New_ctor() ;

/// @brief Method .ctor addr 0x287a598 size 0x48 virtual false final false
 void _ctor() ;

static Tweening::ColorTween New_ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x287a5e0 size 0xd0 virtual false final false
 void _ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method GetValue addr 0x287a6b0 size 0x48 virtual true final false
 UnityEngine::Color GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
NEED_NO_BOX(Tweening::ColorTween);
DEFINE_IL2CPP_ARG_TYPE(Tweening::ColorTween, "Tweening", "ColorTween");
