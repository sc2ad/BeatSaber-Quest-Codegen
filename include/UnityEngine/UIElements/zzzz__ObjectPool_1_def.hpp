#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class ObjectPool_1<T>;
}
// Type: UnityEngine.UIElements::ObjectPool`1
// Type: UnityEngine.UIElements::ObjectPool`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6829))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6829), inst: 2 })
// CS Name: UnityEngine.UIElements.ObjectPool`1
class CORDL_TYPE ObjectPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ObjectPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: " const&", def_value: None }]
constexpr ObjectPool_1(ObjectPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
constexpr ObjectPool_1(ObjectPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectPool_1& operator=(ObjectPool_1&& o) noexcept = default;
  constexpr ObjectPool_1& operator=(ObjectPool_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Stack_1<T> __declspec(property(get=__get_m_Stack, put=__set_m_Stack))  m_Stack;

constexpr void __set_m_Stack(System::Collections::Generic::Stack_1<T> value) ;

constexpr System::Collections::Generic::Stack_1<T> __get_m_Stack() const;

 int32_t __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(int32_t value) ;

constexpr int32_t __get_m_MaxSize() const;


// Properties

 int32_t __declspec(property(get=get_maxSize, put=set_maxSize))  maxSize;


// Methods

/// @brief Method get_maxSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_maxSize() ;

/// @brief Method set_maxSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_maxSize(int32_t value) ;

static UnityEngine::UIElements::ObjectPool_1<T> New_ctor(int32_t maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxSize) ;

/// @brief Method Size addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Size() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
 T Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release(T element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::ObjectPool_1, "UnityEngine.UIElements", "ObjectPool`1");
