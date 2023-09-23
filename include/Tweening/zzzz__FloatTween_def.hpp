#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include <cmath>
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace Tweening {
class FloatTween;
}
// Type: Tweening::FloatTween
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15937)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15931))
// CS Name: Tweening.FloatTween
class CORDL_TYPE FloatTween : public Tweening::Tween_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~FloatTween() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: " const&", def_value: None }]
constexpr FloatTween(FloatTween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatTween", modifiers: "&&", def_value: None }]
constexpr FloatTween(FloatTween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatTween(void* ptr) noexcept : Tweening::Tween_1<float_t>(ptr) {
}


  constexpr FloatTween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatTween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatTween& operator=(FloatTween&& o) noexcept = default;
  constexpr FloatTween& operator=(FloatTween const& o) noexcept = default;
                


// Fields

static Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween> __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

static void __set_Pool(Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween> value) ;

static Zenject::StaticMemoryPool_7<float_t,float_t,System::Action_1<float_t>,float_t,GlobalNamespace::EaseType,float_t,Tweening::FloatTween> __get_Pool() ;


// Methods

// Ctor Parameters []
explicit FloatTween() ;

/// @brief Method .ctor addr 0x2879e94 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit FloatTween(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x2879edc size 0x90 virtual false final false
 void _ctor(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method GetValue addr 0x2879f6c size 0x2c virtual true final false
 float_t GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
NEED_NO_BOX(Tweening::FloatTween);
DEFINE_IL2CPP_ARG_TYPE(Tweening::FloatTween, "Tweening", "FloatTween");
