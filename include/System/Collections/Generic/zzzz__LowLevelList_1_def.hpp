#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class LowLevelList_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class LowLevelList_1<T>;
}
// Type: System.Collections.Generic::LowLevelList`1
// Type: System.Collections.Generic::LowLevelList`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3844))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3844), inst: 2 })
// CS Name: System.Collections.Generic.LowLevelList`1
class CORDL_TYPE LowLevelList_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LowLevelList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelList_1", modifiers: " const&", def_value: None }]
constexpr LowLevelList_1(LowLevelList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LowLevelList_1", modifiers: "&&", def_value: None }]
constexpr LowLevelList_1(LowLevelList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LowLevelList_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LowLevelList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LowLevelList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LowLevelList_1& operator=(LowLevelList_1&& o) noexcept = default;
  constexpr LowLevelList_1& operator=(LowLevelList_1 const& o) noexcept = default;
                


// Fields

/// @brief Field _defaultCapacity offset 0
static constexpr int32_t  _defaultCapacity{4};

 ::ArrayW<T> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__items() const;

 int32_t __declspec(property(get=__get__size, put=__set__size))  _size;

constexpr void __set__size(int32_t value) ;

constexpr int32_t __get__size() const;

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

static ::ArrayW<T> __declspec(property(get=__get_s_emptyArray, put=__set_s_emptyArray))  s_emptyArray;

static void __set_s_emptyArray(::ArrayW<T> value) ;

static ::ArrayW<T> __get_s_emptyArray() ;


// Properties

 int32_t __declspec(property(get=get_Capacity, put=set_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Count))  Count;

 T __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters []
explicit LowLevelList_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit LowLevelList_1(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method set_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Capacity(int32_t value) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_Item(int32_t index, T value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method EnsureCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void EnsureCapacity(int32_t min) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddRange(::System::Collections::Generic::IEnumerable_1<T> collection) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t IndexOf(T item) ;

/// @brief Method Insert addr 0x0 size 0xffffffffffffffff virtual true final true
 void Insert(int32_t index, T item) ;

/// @brief Method InsertRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertRange(int32_t index, ::System::Collections::Generic::IEnumerable_1<T> collection) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method RemoveAll addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t RemoveAll(::System::Predicate_1<T> match) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(int32_t index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelList_1, "System.Collections.Generic", "LowLevelList`1");
