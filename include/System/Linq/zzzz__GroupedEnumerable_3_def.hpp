#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Linq {
template<typename TSource,typename TKey,typename TElement>
class GroupedEnumerable_3;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
class GroupedEnumerable_3<TSource,TKey,TElement>;
}
// Type: System.Linq::GroupedEnumerable`3
// Type: System.Linq::GroupedEnumerable`3
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSource,::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14570))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14570), inst: 5155 })
// CS Name: System.Linq.GroupedEnumerable`3
class CORDL_TYPE GroupedEnumerable_3<TSource,TKey,TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GroupedEnumerable_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: " const&", def_value: None }]
constexpr GroupedEnumerable_3(GroupedEnumerable_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupedEnumerable_3", modifiers: "&&", def_value: None }]
constexpr GroupedEnumerable_3(GroupedEnumerable_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupedEnumerable_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupedEnumerable_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupedEnumerable_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupedEnumerable_3& operator=(GroupedEnumerable_3&& o) noexcept = default;
  constexpr GroupedEnumerable_3& operator=(GroupedEnumerable_3 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IEnumerable_1<TSource> __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::System::Collections::Generic::IEnumerable_1<TSource> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<TSource> __get_source() const;

 ::System::Func_2<TSource,TKey> __declspec(property(get=__get_keySelector, put=__set_keySelector))  keySelector;

constexpr void __set_keySelector(::System::Func_2<TSource,TKey> value) ;

constexpr ::System::Func_2<TSource,TKey> __get_keySelector() const;

 ::System::Func_2<TSource,TElement> __declspec(property(get=__get_elementSelector, put=__set_elementSelector))  elementSelector;

constexpr void __set_elementSelector(::System::Func_2<TSource,TElement> value) ;

constexpr ::System::Func_2<TSource,TElement> __get_elementSelector() const;

 ::System::Collections::Generic::IEqualityComparer_1<TKey> __declspec(property(get=__get_comparer, put=__set_comparer))  comparer;

constexpr void __set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey> value) ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey> __get_comparer() const;


// Methods

// Ctor Parameters [CppParam { name: "source", ty: "::System::Collections::Generic::IEnumerable_1<TSource>", modifiers: "", def_value: None }, CppParam { name: "keySelector", ty: "::System::Func_2<TSource,TKey>", modifiers: "", def_value: None }, CppParam { name: "elementSelector", ty: "::System::Func_2<TSource,TElement>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::Generic::IEqualityComparer_1<TKey>", modifiers: "", def_value: None }]
explicit GroupedEnumerable_3(::System::Collections::Generic::IEnumerable_1<TSource> source, ::System::Func_2<TSource,TKey> keySelector, ::System::Func_2<TSource,TElement> elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TSource> source, ::System::Func_2<TSource,TKey> keySelector, ::System::Func_2<TSource,TElement> elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey> comparer) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::GroupedEnumerable_3, "System.Linq", "GroupedEnumerable`3");
