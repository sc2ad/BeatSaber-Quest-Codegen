#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace ModestTree {
class MiscExtensions;
}
// Type: ModestTree::MiscExtensions
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10557))
// CS Name: ModestTree.MiscExtensions
class CORDL_TYPE MiscExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MiscExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscExtensions", modifiers: " const&", def_value: None }]
constexpr MiscExtensions(MiscExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscExtensions", modifiers: "&&", def_value: None }]
constexpr MiscExtensions(MiscExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MiscExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscExtensions& operator=(MiscExtensions&& o) noexcept = default;
  constexpr MiscExtensions& operator=(MiscExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Fmt addr 0x2d421f8 size 0x1b4 virtual false final false
static ::StringW Fmt(::StringW s, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(::System::Collections::Generic::IList_1<T> list, T item) ;

/// @brief Method Join addr 0x2d42ffc size 0x64 virtual false final false
static ::StringW Join(::System::Collections::Generic::IEnumerable_1<::StringW> values, ::StringW separator) ;

/// @brief Method AllocFreeAddRange addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AllocFreeAddRange(::System::Collections::Generic::IList_1<T> list, ::System::Collections::Generic::IList_1<T> items) ;

/// @brief Method RemoveWithConfirm addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RemoveWithConfirm(::System::Collections::Generic::IList_1<T> list, T item) ;

/// @brief Method RemoveWithConfirm addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RemoveWithConfirm(::System::Collections::Generic::LinkedList_1<T> list, T item) ;

/// @brief Method RemoveWithConfirm addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TVal>
static void RemoveWithConfirm(::System::Collections::Generic::IDictionary_2<TKey,TVal> dictionary, TKey key) ;

/// @brief Method RemoveWithConfirm addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void RemoveWithConfirm(::System::Collections::Generic::HashSet_1<T> set, T item) ;

/// @brief Method GetValueAndRemove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TVal>
static TVal GetValueAndRemove(::System::Collections::Generic::IDictionary_2<TKey,TVal> dictionary, TKey key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
} // end anonymous namespace
NEED_NO_BOX(::ModestTree::MiscExtensions);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::MiscExtensions, "ModestTree", "MiscExtensions");
