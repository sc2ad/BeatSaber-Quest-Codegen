#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class SimpleMemoryPool_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class SimpleMemoryPool_1<T>;
}
// Type: ::SimpleMemoryPool`1
// Type: ::SimpleMemoryPool`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13749))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13749), inst: 2 })
// CS Name: SimpleMemoryPool`1
class CORDL_TYPE SimpleMemoryPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SimpleMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: " const&", def_value: None }]
constexpr SimpleMemoryPool_1(SimpleMemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleMemoryPool_1", modifiers: "&&", def_value: None }]
constexpr SimpleMemoryPool_1(SimpleMemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleMemoryPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleMemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleMemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleMemoryPool_1& operator=(SimpleMemoryPool_1&& o) noexcept = default;
  constexpr SimpleMemoryPool_1& operator=(SimpleMemoryPool_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LazyCopyHashSet_1<T> __declspec(property(get=__get__activeElements, put=__set__activeElements))  _activeElements;

constexpr void __set__activeElements(GlobalNamespace::LazyCopyHashSet_1<T> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<T> __get__activeElements() const;

 System::Collections::Generic::List_1<T> __declspec(property(get=__get__inactiveElements, put=__set__inactiveElements))  _inactiveElements;

constexpr void __set__inactiveElements(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get__inactiveElements() const;

 System::Func_1<T> __declspec(property(get=__get__createNewItemFunc, put=__set__createNewItemFunc))  _createNewItemFunc;

constexpr void __set__createNewItemFunc(System::Func_1<T> value) ;

constexpr System::Func_1<T> __get__createNewItemFunc() const;


// Properties

 System::Collections::Generic::List_1<T> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<T> get_items() ;

// Ctor Parameters [CppParam { name: "startCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "createNewItemFunc", ty: "System::Func_1<T>", modifiers: "", def_value: None }]
explicit SimpleMemoryPool_1(int32_t startCapacity, System::Func_1<T> createNewItemFunc) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t startCapacity, System::Func_1<T> createNewItemFunc) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual false final false
 T Spawn() ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual false final false
 void Despawn(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SimpleMemoryPool_1, "", "SimpleMemoryPool`1");
