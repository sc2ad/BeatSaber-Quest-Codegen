#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
template<::cordl_internals::il2cpp_reference_type T>
class LinkedPool_1<T>;
}
// Type: UnityEngine.UIElements.UIR::LinkedPool`1
// Type: UnityEngine.UIElements.UIR::LinkedPool`1
namespace UnityEngine::UIElements::UIR {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7500))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 2 })
// CS Name: UnityEngine.UIElements.UIR.LinkedPool`1
class CORDL_TYPE LinkedPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LinkedPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: " const&", def_value: None }]
constexpr LinkedPool_1(LinkedPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedPool_1", modifiers: "&&", def_value: None }]
constexpr LinkedPool_1(LinkedPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedPool_1& operator=(LinkedPool_1&& o) noexcept = default;
  constexpr LinkedPool_1& operator=(LinkedPool_1 const& o) noexcept = default;
                


// Fields

 ::System::Func_1<T> __declspec(property(get=__get_m_CreateFunc, put=__set_m_CreateFunc))  m_CreateFunc;

constexpr void __set_m_CreateFunc(::System::Func_1<T> value) ;

constexpr ::System::Func_1<T> __get_m_CreateFunc() const;

 ::System::Action_1<T> __declspec(property(get=__get_m_ResetAction, put=__set_m_ResetAction))  m_ResetAction;

constexpr void __set_m_ResetAction(::System::Action_1<T> value) ;

constexpr ::System::Action_1<T> __get_m_ResetAction() const;

 int32_t __declspec(property(get=__get_m_Limit, put=__set_m_Limit))  m_Limit;

constexpr void __set_m_Limit(int32_t value) ;

constexpr int32_t __get_m_Limit() const;

 T __declspec(property(get=__get_m_PoolFirst, put=__set_m_PoolFirst))  m_PoolFirst;

constexpr void __set_m_PoolFirst(T value) ;

constexpr T __get_m_PoolFirst() const;

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "createFunc", ty: "::System::Func_1<T>", modifiers: "", def_value: None }, CppParam { name: "resetAction", ty: "::System::Action_1<T>", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "int32_t", modifiers: "", def_value: None }]
explicit LinkedPool_1(::System::Func_1<T> createFunc, ::System::Action_1<T> resetAction, int32_t limit) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Func_1<T> createFunc, ::System::Action_1<T> resetAction, int32_t limit) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 T Get() ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
 void Return(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::LinkedPool_1, "UnityEngine.UIElements.UIR", "LinkedPool`1");
