#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class SortedList;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Net {
class PathList;
}
namespace System::Net {
class ____System__Net__PathList__PathListComparer;
}
// Type: ::PathListComparer
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7982))
// CS Name: System.Net.PathList::PathListComparer
class CORDL_TYPE ____System__Net__PathList__PathListComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__PathList__PathListComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__PathList__PathListComparer", modifiers: " const&", def_value: None }]
constexpr ____System__Net__PathList__PathListComparer(____System__Net__PathList__PathListComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__PathList__PathListComparer", modifiers: "&&", def_value: None }]
constexpr ____System__Net__PathList__PathListComparer(____System__Net__PathList__PathListComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__PathList__PathListComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__PathList__PathListComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__PathList__PathListComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__PathList__PathListComparer& operator=(____System__Net__PathList__PathListComparer&& o) noexcept = default;
  constexpr ____System__Net__PathList__PathListComparer& operator=(____System__Net__PathList__PathListComparer const& o) noexcept = default;
                


// Fields

static ::System::Net::____System__Net__PathList__PathListComparer __declspec(property(get=__get_StaticInstance, put=__set_StaticInstance))  StaticInstance;

static void __set_StaticInstance(::System::Net::____System__Net__PathList__PathListComparer value) ;

static ::System::Net::____System__Net__PathList__PathListComparer __get_StaticInstance() ;


// Methods

/// @brief Method System.Collections.IComparer.Compare addr 0x2821c58 size 0x168 virtual true final true
 int32_t System_Collections_IComparer_Compare(::bs_hook::Il2CppWrapperType ol, ::bs_hook::Il2CppWrapperType or) ;

// Ctor Parameters []
explicit ____System__Net__PathList__PathListComparer() ;

/// @brief Method .ctor addr 0x2821dc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::PathList
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7983))
// CS Name: System.Net.PathList
class CORDL_TYPE PathList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PathListComparer = ::System::Net::____System__Net__PathList__PathListComparer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PathList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: " const&", def_value: None }]
constexpr PathList(PathList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathList", modifiers: "&&", def_value: None }]
constexpr PathList(PathList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PathList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathList& operator=(PathList&& o) noexcept = default;
  constexpr PathList& operator=(PathList const& o) noexcept = default;
                


// Fields

 ::System::Collections::SortedList __declspec(property(get=__get_m_list, put=__set_m_list))  m_list;

constexpr void __set_m_list(::System::Collections::SortedList value) ;

constexpr ::System::Collections::SortedList __get_m_list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Collections::ICollection __declspec(property(get=get_Values))  Values;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Item, put=set_Item))  Item;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_SyncRoot))  SyncRoot;


// Methods

// Ctor Parameters []
explicit PathList() ;

/// @brief Method .ctor addr 0x281e1b0 size 0xa8 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x281feb8 size 0x24 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetCookiesCount addr 0x281e258 size 0x444 virtual false final false
 int32_t GetCookiesCount() ;

/// @brief Method get_Values addr 0x281fd28 size 0x24 virtual false final false
 ::System::Collections::ICollection get_Values() ;

/// @brief Method get_Item addr 0x281e6c0 size 0x24 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Item(::StringW s) ;

/// @brief Method set_Item addr 0x281e6e4 size 0x100 virtual false final false
 void set_Item(::StringW s, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetEnumerator addr 0x28214fc size 0x24 virtual false final false
 ::System::Collections::IEnumerator GetEnumerator() ;

/// @brief Method get_SyncRoot addr 0x281e69c size 0x24 virtual false final false
 ::bs_hook::Il2CppWrapperType get_SyncRoot() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::PathList);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::PathList, "System.Net", "PathList");
NEED_NO_BOX(::System::Net::____System__Net__PathList__PathListComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__PathList__PathListComparer, "System.Net", "PathList/PathListComparer");
