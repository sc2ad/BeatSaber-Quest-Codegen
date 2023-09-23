#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace System::Collections::Generic {
class EnumerableHelpers;
}
// Type: System.Collections.Generic::EnumerableHelpers
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3831))
// CS Name: System.Collections.Generic.EnumerableHelpers
class CORDL_TYPE EnumerableHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnumerableHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableHelpers", modifiers: " const&", def_value: None }]
constexpr EnumerableHelpers(EnumerableHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumerableHelpers", modifiers: "&&", def_value: None }]
constexpr EnumerableHelpers(EnumerableHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumerableHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnumerableHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumerableHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumerableHelpers& operator=(EnumerableHelpers&& o) noexcept = default;
  constexpr EnumerableHelpers& operator=(EnumerableHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ToArray(System::Collections::Generic::IEnumerable_1<T> source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
NEED_NO_BOX(System::Collections::Generic::EnumerableHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::EnumerableHelpers, "System.Collections.Generic", "EnumerableHelpers");
