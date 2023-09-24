#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::Pool {
template<typename T>
class IObjectPool_1;
}
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::Pool {
template<::cordl_internals::il2cpp_reference_type T>
class ObjectPool_1<T>;
}
// Type: UnityEngine.Pool::ObjectPool`1
// Type: UnityEngine.Pool::ObjectPool`1
namespace UnityEngine::Pool {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10382))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10382), inst: 2 })
// CS Name: UnityEngine.Pool.ObjectPool`1
class CORDL_TYPE ObjectPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to UnityEngine::Pool::IObjectPool_1<T>
constexpr operator  UnityEngine::Pool::IObjectPool_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

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

 System::Collections::Generic::List_1<T> __declspec(property(get=__get_m_List, put=__set_m_List))  m_List;

constexpr void __set_m_List(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get_m_List() const;

 System::Func_1<T> __declspec(property(get=__get_m_CreateFunc, put=__set_m_CreateFunc))  m_CreateFunc;

constexpr void __set_m_CreateFunc(System::Func_1<T> value) ;

constexpr System::Func_1<T> __get_m_CreateFunc() const;

 System::Action_1<T> __declspec(property(get=__get_m_ActionOnGet, put=__set_m_ActionOnGet))  m_ActionOnGet;

constexpr void __set_m_ActionOnGet(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get_m_ActionOnGet() const;

 System::Action_1<T> __declspec(property(get=__get_m_ActionOnRelease, put=__set_m_ActionOnRelease))  m_ActionOnRelease;

constexpr void __set_m_ActionOnRelease(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get_m_ActionOnRelease() const;

 System::Action_1<T> __declspec(property(get=__get_m_ActionOnDestroy, put=__set_m_ActionOnDestroy))  m_ActionOnDestroy;

constexpr void __set_m_ActionOnDestroy(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get_m_ActionOnDestroy() const;

 int32_t __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize))  m_MaxSize;

constexpr void __set_m_MaxSize(int32_t value) ;

constexpr int32_t __get_m_MaxSize() const;

 bool __declspec(property(get=__get_m_CollectionCheck, put=__set_m_CollectionCheck))  m_CollectionCheck;

constexpr void __set_m_CollectionCheck(bool value) ;

constexpr bool __get_m_CollectionCheck() const;

 int32_t __declspec(property(get=__get__CountAll_k__BackingField, put=__set__CountAll_k__BackingField))  _CountAll_k__BackingField;

constexpr void __set__CountAll_k__BackingField(int32_t value) ;

constexpr int32_t __get__CountAll_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_CountAll, put=set_CountAll))  CountAll;

 int32_t __declspec(property(get=get_CountInactive))  CountInactive;


// Methods

/// @brief Method get_CountAll addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_CountAll() ;

/// @brief Method set_CountAll addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_CountAll(int32_t value) ;

/// @brief Method get_CountInactive addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_CountInactive() ;

static UnityEngine::Pool::ObjectPool_1<T> New_ctor(System::Func_1<T> createFunc, System::Action_1<T> actionOnGet, System::Action_1<T> actionOnRelease, System::Action_1<T> actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<T> createFunc, System::Action_1<T> actionOnGet, System::Action_1<T> actionOnRelease, System::Action_1<T> actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final true
 T Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Pool::PooledObject_1<T> Get(ByRef<T> v) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final true
 void Release(T element) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Pool::ObjectPool_1, "UnityEngine.Pool", "ObjectPool`1");
