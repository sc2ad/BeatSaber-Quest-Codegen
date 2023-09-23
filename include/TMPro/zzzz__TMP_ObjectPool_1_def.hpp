#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace TMPro {
template<typename T>
class TMP_ObjectPool_1;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type T>
class TMP_ObjectPool_1<T>;
}
// Type: TMPro::TMP_ObjectPool`1
// Type: TMPro::TMP_ObjectPool`1
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12348), inst: 2 })
// CS Name: TMPro.TMP_ObjectPool`1
class CORDL_TYPE TMP_ObjectPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMP_ObjectPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: " const&", def_value: None }]
constexpr TMP_ObjectPool_1(TMP_ObjectPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "&&", def_value: None }]
constexpr TMP_ObjectPool_1(TMP_ObjectPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_ObjectPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_ObjectPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_ObjectPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_ObjectPool_1& operator=(TMP_ObjectPool_1&& o) noexcept = default;
  constexpr TMP_ObjectPool_1& operator=(TMP_ObjectPool_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Stack_1<T> __declspec(property(get=__get_m_Stack, put=__set_m_Stack))  m_Stack;

constexpr void __set_m_Stack(System::Collections::Generic::Stack_1<T> value) ;

constexpr System::Collections::Generic::Stack_1<T> __get_m_Stack() const;

 UnityEngine::Events::UnityAction_1<T> __declspec(property(get=__get_m_ActionOnGet, put=__set_m_ActionOnGet))  m_ActionOnGet;

constexpr void __set_m_ActionOnGet(UnityEngine::Events::UnityAction_1<T> value) ;

constexpr UnityEngine::Events::UnityAction_1<T> __get_m_ActionOnGet() const;

 UnityEngine::Events::UnityAction_1<T> __declspec(property(get=__get_m_ActionOnRelease, put=__set_m_ActionOnRelease))  m_ActionOnRelease;

constexpr void __set_m_ActionOnRelease(UnityEngine::Events::UnityAction_1<T> value) ;

constexpr UnityEngine::Events::UnityAction_1<T> __get_m_ActionOnRelease() const;

 int32_t __declspec(property(get=__get__countAll_k__BackingField, put=__set__countAll_k__BackingField))  _countAll_k__BackingField;

constexpr void __set__countAll_k__BackingField(int32_t value) ;

constexpr int32_t __get__countAll_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_countAll, put=set_countAll))  countAll;

 int32_t __declspec(property(get=get_countActive))  countActive;

 int32_t __declspec(property(get=get_countInactive))  countInactive;


// Methods

/// @brief Method get_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_countAll() ;

/// @brief Method set_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_countAll(int32_t value) ;

/// @brief Method get_countActive addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_countActive() ;

/// @brief Method get_countInactive addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_countInactive() ;

// Ctor Parameters [CppParam { name: "actionOnGet", ty: "UnityEngine::Events::UnityAction_1<T>", modifiers: "", def_value: None }, CppParam { name: "actionOnRelease", ty: "UnityEngine::Events::UnityAction_1<T>", modifiers: "", def_value: None }]
explicit TMP_ObjectPool_1(UnityEngine::Events::UnityAction_1<T> actionOnGet, UnityEngine::Events::UnityAction_1<T> actionOnRelease) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Events::UnityAction_1<T> actionOnGet, UnityEngine::Events::UnityAction_1<T> actionOnRelease) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 T Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release(T element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMP_ObjectPool_1, "TMPro", "TMP_ObjectPool`1");
