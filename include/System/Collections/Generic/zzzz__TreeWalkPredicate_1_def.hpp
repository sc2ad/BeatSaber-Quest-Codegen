#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class System__Collections__Generic__SortedSet_1__Node;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class TreeWalkPredicate_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class TreeWalkPredicate_1<T>;
}
namespace System::Collections::Generic {
template<>
class TreeWalkPredicate_1<uint32_t>;
}
// Type: System.Collections.Generic::TreeWalkPredicate`1
// Type: System.Collections.Generic::TreeWalkPredicate`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(8394))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8394), inst: 2 })
// CS Name: System.Collections.Generic.TreeWalkPredicate`1
class CORDL_TYPE TreeWalkPredicate_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TreeWalkPredicate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: " const&", def_value: None }]
constexpr TreeWalkPredicate_1(TreeWalkPredicate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
constexpr TreeWalkPredicate_1(TreeWalkPredicate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TreeWalkPredicate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TreeWalkPredicate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TreeWalkPredicate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TreeWalkPredicate_1& operator=(TreeWalkPredicate_1&& o) noexcept = default;
  constexpr TreeWalkPredicate_1& operator=(TreeWalkPredicate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TreeWalkPredicate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<T> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::TreeWalkPredicate`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8394)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8394), inst: 729 })
// CS Name: System.Collections.Generic.TreeWalkPredicate`1
class CORDL_TYPE TreeWalkPredicate_1<uint32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TreeWalkPredicate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: " const&", def_value: None }]
constexpr TreeWalkPredicate_1(TreeWalkPredicate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
constexpr TreeWalkPredicate_1(TreeWalkPredicate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TreeWalkPredicate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TreeWalkPredicate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TreeWalkPredicate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TreeWalkPredicate_1& operator=(TreeWalkPredicate_1&& o) noexcept = default;
  constexpr TreeWalkPredicate_1& operator=(TreeWalkPredicate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TreeWalkPredicate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(System::Collections::Generic::System__Collections__Generic__SortedSet_1__Node<uint32_t> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::TreeWalkPredicate_1, "System.Collections.Generic", "TreeWalkPredicate`1");
