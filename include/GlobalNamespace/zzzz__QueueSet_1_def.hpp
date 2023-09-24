#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class QueueSet_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class QueueSet_1<T>;
}
// Type: ::QueueSet`1
// Type: ::QueueSet`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13818))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13818), inst: 2 })
// CS Name: QueueSet`1
class CORDL_TYPE QueueSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~QueueSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: " const&", def_value: None }]
constexpr QueueSet_1(QueueSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QueueSet_1", modifiers: "&&", def_value: None }]
constexpr QueueSet_1(QueueSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QueueSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QueueSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QueueSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QueueSet_1& operator=(QueueSet_1&& o) noexcept = default;
  constexpr QueueSet_1& operator=(QueueSet_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::LinkedList_1<T> __declspec(property(get=__get__linkedList, put=__set__linkedList))  _linkedList;

constexpr void __set__linkedList(System::Collections::Generic::LinkedList_1<T> value) ;

constexpr System::Collections::Generic::LinkedList_1<T> __get__linkedList() const;

 System::Collections::Generic::HashSet_1<T> __declspec(property(get=__get__set, put=__set__set))  _set;

constexpr void __set__set(System::Collections::Generic::HashSet_1<T> value) ;

constexpr System::Collections::Generic::HashSet_1<T> __get__set() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
 void Enqueue(T item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 T Dequeue() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

static GlobalNamespace::QueueSet_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::QueueSet_1, "", "QueueSet`1");
