#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
class SortExtensions;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1<T>;
}
// Type: ::<>c__DisplayClass1_0`1
// Type: ::SortExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12901))
// CS Name: SortExtensions
class CORDL_TYPE SortExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using __c__DisplayClass1_0_1 = ::GlobalNamespace::____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SortExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: " const&", def_value: None }]
constexpr SortExtensions(SortExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortExtensions", modifiers: "&&", def_value: None }]
constexpr SortExtensions(SortExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortExtensions& operator=(SortExtensions&& o) noexcept = default;
  constexpr SortExtensions& operator=(SortExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method InsertSorted addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void InsertSorted(::System::Collections::Generic::List_1<T> list, T item, ::System::Func_2<T,int32_t> getSortIndex) ;

/// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Sort(::System::Collections::Generic::List_1<T> list, ::System::Func_2<T,int32_t> getSortIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass1_0`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12900))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12900), inst: 2 })
// CS Name: SortExtensions::<>c__DisplayClass1_0`1
class CORDL_TYPE ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1(____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1(____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1& operator=(____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1&& o) noexcept = default;
  constexpr ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1& operator=(____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1 const& o) noexcept = default;
                


// Fields

 ::System::Func_2<T,int32_t> __declspec(property(get=__get_getSortIndex, put=__set_getSortIndex))  getSortIndex;

constexpr void __set_getSortIndex(::System::Func_2<T,int32_t> value) ;

constexpr ::System::Func_2<T,int32_t> __get_getSortIndex() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <Sort>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t _Sort_b__0(T a, T b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::____GlobalNamespace__SortExtensions____c__DisplayClass1_0_1, "", "SortExtensions/<>c__DisplayClass1_0`1");
NEED_NO_BOX(::GlobalNamespace::SortExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortExtensions, "", "SortExtensions");
