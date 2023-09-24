#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class SparselyPopulatedArrayFragment_1<T>;
}
// Type: System.Threading::SparselyPopulatedArrayFragment`1
// Type: System.Threading::SparselyPopulatedArrayFragment`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2693))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2693), inst: 2 })
// CS Name: System.Threading.SparselyPopulatedArrayFragment`1
class CORDL_TYPE SparselyPopulatedArrayFragment_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SparselyPopulatedArrayFragment_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: " const&", def_value: None }]
constexpr SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArrayFragment_1", modifiers: "&&", def_value: None }]
constexpr SparselyPopulatedArrayFragment_1(SparselyPopulatedArrayFragment_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SparselyPopulatedArrayFragment_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SparselyPopulatedArrayFragment_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SparselyPopulatedArrayFragment_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SparselyPopulatedArrayFragment_1& operator=(SparselyPopulatedArrayFragment_1&& o) noexcept = default;
  constexpr SparselyPopulatedArrayFragment_1& operator=(SparselyPopulatedArrayFragment_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__elements() const;

 int32_t __declspec(property(get=__get__freeCount, put=__set__freeCount))  _freeCount;

constexpr void __set__freeCount(int32_t value) ;

constexpr int32_t __get__freeCount() const;

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Threading::SparselyPopulatedArrayFragment_1<T> value) ;

constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> __get__next() const;

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=__get__prev, put=__set__prev))  _prev;

constexpr void __set__prev(System::Threading::SparselyPopulatedArrayFragment_1<T> value) ;

constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> __get__prev() const;


// Properties

 T __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Length))  Length;

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=get_Prev))  Prev;


// Methods

static System::Threading::SparselyPopulatedArrayFragment_1<T> New_ctor(int32_t size) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size) ;

static System::Threading::SparselyPopulatedArrayFragment_1<T> New_ctor(int32_t size, System::Threading::SparselyPopulatedArrayFragment_1<T> prev) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size, System::Threading::SparselyPopulatedArrayFragment_1<T> prev) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Item(int32_t index) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Prev addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::SparselyPopulatedArrayFragment_1<T> get_Prev() ;

/// @brief Method SafeAtomicRemove addr 0x0 size 0xffffffffffffffff virtual false final false
 T SafeAtomicRemove(int32_t index, T expectedElement) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SparselyPopulatedArrayFragment_1, "System.Threading", "SparselyPopulatedArrayFragment`1");
