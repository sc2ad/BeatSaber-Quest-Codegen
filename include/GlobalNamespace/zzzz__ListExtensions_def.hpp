#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Random;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ListExtensions;
}
// Type: ::ListExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5956))
// CS Name: ListExtensions
class CORDL_TYPE ListExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ListExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: " const&", def_value: None }]
constexpr ListExtensions(ListExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListExtensions", modifiers: "&&", def_value: None }]
constexpr ListExtensions(ListExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ListExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListExtensions& operator=(ListExtensions&& o) noexcept = default;
  constexpr ListExtensions& operator=(ListExtensions const& o) noexcept = default;
                


// Fields

static System::Random __declspec(property(get=__get__random, put=__set__random))  _random;

static void __set__random(System::Random value) ;

static System::Random __get__random() ;


// Methods

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(System::Collections::Generic::IReadOnlyList_1<T> self, T item) ;

/// @brief Method ShuffleInPlace addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void ShuffleInPlace(System::Collections::Generic::IList_1<T> list) ;

/// @brief Method InsertIntoSortedListFromEnd addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void InsertIntoSortedListFromEnd(System::Collections::Generic::List_1<T> sortedList, T newItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ListExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListExtensions, "", "ListExtensions");
