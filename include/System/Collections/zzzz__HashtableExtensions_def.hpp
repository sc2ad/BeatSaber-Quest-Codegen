#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Collections {
class HashtableExtensions;
}
// Type: System.Collections::HashtableExtensions
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8357))
// CS Name: System.Collections.HashtableExtensions
class CORDL_TYPE HashtableExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashtableExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: " const&", def_value: None }]
constexpr HashtableExtensions(HashtableExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashtableExtensions", modifiers: "&&", def_value: None }]
constexpr HashtableExtensions(HashtableExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashtableExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashtableExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashtableExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashtableExtensions& operator=(HashtableExtensions&& o) noexcept = default;
  constexpr HashtableExtensions& operator=(HashtableExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryGetValue(System::Collections::Hashtable table, ::bs_hook::Il2CppWrapperType key, ByRef<T> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::HashtableExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::HashtableExtensions, "System.Collections", "HashtableExtensions");
