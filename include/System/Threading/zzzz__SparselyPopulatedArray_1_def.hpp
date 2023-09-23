#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading {
template<typename T>
struct SparselyPopulatedArrayAddInfo_1;
}
namespace System::Threading {
template<typename T>
class SparselyPopulatedArrayFragment_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class SparselyPopulatedArray_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class SparselyPopulatedArray_1<T>;
}
// Type: System.Threading::SparselyPopulatedArray`1
// Type: System.Threading::SparselyPopulatedArray`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2691))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2691), inst: 2 })
// CS Name: System.Threading.SparselyPopulatedArray`1
class CORDL_TYPE SparselyPopulatedArray_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SparselyPopulatedArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: " const&", def_value: None }]
constexpr SparselyPopulatedArray_1(SparselyPopulatedArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SparselyPopulatedArray_1", modifiers: "&&", def_value: None }]
constexpr SparselyPopulatedArray_1(SparselyPopulatedArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SparselyPopulatedArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SparselyPopulatedArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SparselyPopulatedArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SparselyPopulatedArray_1& operator=(SparselyPopulatedArray_1&& o) noexcept = default;
  constexpr SparselyPopulatedArray_1& operator=(SparselyPopulatedArray_1 const& o) noexcept = default;
                


// Fields

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=__get__head, put=__set__head))  _head;

constexpr void __set__head(System::Threading::SparselyPopulatedArrayFragment_1<T> value) ;

constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> __get__head() const;

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=__get__tail, put=__set__tail))  _tail;

constexpr void __set__tail(System::Threading::SparselyPopulatedArrayFragment_1<T> value) ;

constexpr System::Threading::SparselyPopulatedArrayFragment_1<T> __get__tail() const;


// Properties

 System::Threading::SparselyPopulatedArrayFragment_1<T> __declspec(property(get=get_Tail))  Tail;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit SparselyPopulatedArray_1(int32_t initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t initialSize) ;

/// @brief Method get_Tail addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::SparselyPopulatedArrayFragment_1<T> get_Tail() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::SparselyPopulatedArrayAddInfo_1<T> Add(T element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::SparselyPopulatedArray_1, "System.Threading", "SparselyPopulatedArray`1");
