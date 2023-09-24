#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cmath>
namespace UnityEngine::UIElements {
struct StylePropertyNameCollection;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class TransitionEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class TransitionEventBase_1<T>;
}
// Type: UnityEngine.UIElements::TransitionEventBase`1
// Type: UnityEngine.UIElements::TransitionEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1636 }), TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7287))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7287), inst: 2 })
// CS Name: UnityEngine.UIElements.TransitionEventBase`1
class CORDL_TYPE TransitionEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TransitionEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: " const&", def_value: None }]
constexpr TransitionEventBase_1(TransitionEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransitionEventBase_1", modifiers: "&&", def_value: None }]
constexpr TransitionEventBase_1(TransitionEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransitionEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr TransitionEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransitionEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransitionEventBase_1& operator=(TransitionEventBase_1&& o) noexcept = default;
  constexpr TransitionEventBase_1& operator=(TransitionEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::StylePropertyNameCollection __declspec(property(get=__get__stylePropertyNames_k__BackingField, put=__set__stylePropertyNames_k__BackingField))  _stylePropertyNames_k__BackingField;

constexpr void __set__stylePropertyNames_k__BackingField(UnityEngine::UIElements::StylePropertyNameCollection value) ;

constexpr UnityEngine::UIElements::StylePropertyNameCollection __get__stylePropertyNames_k__BackingField() const;

 double_t __declspec(property(get=__get__elapsedTime_k__BackingField, put=__set__elapsedTime_k__BackingField))  _elapsedTime_k__BackingField;

constexpr void __set__elapsedTime_k__BackingField(double_t value) ;

constexpr double_t __get__elapsedTime_k__BackingField() const;


// Properties

 UnityEngine::UIElements::StylePropertyNameCollection __declspec(property(get=get_stylePropertyNames))  stylePropertyNames;

 double_t __declspec(property(put=set_elapsedTime))  elapsedTime;


// Methods

/// @brief Method get_stylePropertyNames addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::StylePropertyNameCollection get_stylePropertyNames() ;

/// @brief Method set_elapsedTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_elapsedTime(double_t value) ;

static UnityEngine::UIElements::TransitionEventBase_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::StylePropertyName stylePropertyName, double_t elapsedTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::TransitionEventBase_1, "UnityEngine.UIElements", "TransitionEventBase`1");
