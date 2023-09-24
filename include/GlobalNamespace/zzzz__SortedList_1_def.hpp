#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SortedList_2_def.hpp"
namespace GlobalNamespace {
template<typename T>
class ISortedListItemProcessor_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TBase>
class SortedList_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TBase>
class SortedList_1<TBase>;
}
// Type: ::SortedList`1
// Type: ::SortedList`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TBase>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14961), inst: 4828 }), TypeDefinitionIndex(TypeDefinitionIndex(14960)), TypeDefinitionIndex(TypeDefinitionIndex(14961))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14960), inst: 2 })
// CS Name: SortedList`1
class CORDL_TYPE SortedList_1<TBase> : public GlobalNamespace::SortedList_2<TBase,TBase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SortedList_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: " const&", def_value: None }]
constexpr SortedList_1(SortedList_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortedList_1", modifiers: "&&", def_value: None }]
constexpr SortedList_1(SortedList_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortedList_1(void* ptr) noexcept : GlobalNamespace::SortedList_2<TBase,TBase>(ptr) {
}


  constexpr SortedList_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortedList_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortedList_1& operator=(SortedList_1&& o) noexcept = default;
  constexpr SortedList_1& operator=(SortedList_1 const& o) noexcept = default;
                


// Methods

static GlobalNamespace::SortedList_1<TBase> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static GlobalNamespace::SortedList_1<TBase> New_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::SortedList_1, "", "SortedList`1");
