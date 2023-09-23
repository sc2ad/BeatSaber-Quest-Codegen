#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::ProBuilder {
template<::cordl_internals::il2cpp_reference_type T>
class ObjectPool_1<T>;
}
// Type: UnityEngine.ProBuilder::ObjectPool`1
// Type: UnityEngine.ProBuilder::ObjectPool`1
namespace UnityEngine::ProBuilder {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12089))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12089), inst: 2 })
// CS Name: UnityEngine.ProBuilder.ObjectPool`1
class CORDL_TYPE ObjectPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

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

 bool __declspec(property(get=__get_m_IsDisposed, put=__set_m_IsDisposed))  m_IsDisposed;

constexpr void __set_m_IsDisposed(bool value) ;

constexpr bool __get_m_IsDisposed() const;

 System::Collections::Generic::Queue_1<T> __declspec(property(get=__get_m_Pool, put=__set_m_Pool))  m_Pool;

constexpr void __set_m_Pool(System::Collections::Generic::Queue_1<T> value) ;

constexpr System::Collections::Generic::Queue_1<T> __get_m_Pool() const;

 int32_t __declspec(property(get=__get_desiredSize, put=__set_desiredSize))  desiredSize;

constexpr void __set_desiredSize(int32_t value) ;

constexpr int32_t __get_desiredSize() const;

 System::Func_1<T> __declspec(property(get=__get_constructor, put=__set_constructor))  constructor;

constexpr void __set_constructor(System::Func_1<T> value) ;

constexpr System::Func_1<T> __get_constructor() const;

 System::Action_1<T> __declspec(property(get=__get_destructor, put=__set_destructor))  destructor;

constexpr void __set_destructor(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get_destructor() const;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "desiredSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "constructor", ty: "System::Func_1<T>", modifiers: "", def_value: None }, CppParam { name: "destructor", ty: "System::Action_1<T>", modifiers: "", def_value: None }, CppParam { name: "lazyInitialization", ty: "bool", modifiers: "", def_value: None }]
explicit ObjectPool_1(int32_t initialSize, int32_t desiredSize, System::Func_1<T> constructor, System::Action_1<T> destructor, bool lazyInitialization) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t initialSize, int32_t desiredSize, System::Func_1<T> constructor, System::Action_1<T> destructor, bool lazyInitialization) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 T Dequeue() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(T obj) ;

/// @brief Method Empty addr 0x0 size 0xffffffffffffffff virtual false final false
 void Empty() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::ObjectPool_1, "UnityEngine.ProBuilder", "ObjectPool`1");
