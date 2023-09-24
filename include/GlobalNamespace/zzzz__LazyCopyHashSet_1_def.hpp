#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class LazyCopyHashSet_1<T>;
}
// Type: ::LazyCopyHashSet`1
// Type: ::LazyCopyHashSet`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10546))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10546), inst: 2 })
// CS Name: LazyCopyHashSet`1
class CORDL_TYPE LazyCopyHashSet_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILazyCopyHashSet_1<T>
constexpr operator  GlobalNamespace::ILazyCopyHashSet_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LazyCopyHashSet_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: " const&", def_value: None }]
constexpr LazyCopyHashSet_1(LazyCopyHashSet_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LazyCopyHashSet_1", modifiers: "&&", def_value: None }]
constexpr LazyCopyHashSet_1(LazyCopyHashSet_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LazyCopyHashSet_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LazyCopyHashSet_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LazyCopyHashSet_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LazyCopyHashSet_1& operator=(LazyCopyHashSet_1&& o) noexcept = default;
  constexpr LazyCopyHashSet_1& operator=(LazyCopyHashSet_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<T> __declspec(property(get=__get__itemsCopy, put=__set__itemsCopy))  _itemsCopy;

constexpr void __set__itemsCopy(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get__itemsCopy() const;

 System::Collections::Generic::HashSet_1<T> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(System::Collections::Generic::HashSet_1<T> value) ;

constexpr System::Collections::Generic::HashSet_1<T> __get__items() const;

 bool __declspec(property(get=__get__dirty, put=__set__dirty))  _dirty;

constexpr void __set__dirty(bool value) ;

constexpr bool __get__dirty() const;


// Properties

 System::Collections::Generic::List_1<T> __declspec(property(get=get_items))  items;


// Methods

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<T> get_items() ;

static GlobalNamespace::LazyCopyHashSet_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static GlobalNamespace::LazyCopyHashSet_1<T> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(T item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LazyCopyHashSet_1, "", "LazyCopyHashSet`1");
