#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ModifierSpec;
}
// Forward declare root types
namespace System {
class ArraySpec;
}
// Type: System::ArraySpec
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2633))
// CS Name: System.ArraySpec
class CORDL_TYPE ArraySpec : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ModifierSpec
constexpr operator  System::ModifierSpec() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ArraySpec() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySpec", modifiers: " const&", def_value: None }]
constexpr ArraySpec(ArraySpec const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArraySpec", modifiers: "&&", def_value: None }]
constexpr ArraySpec(ArraySpec&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArraySpec(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArraySpec& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArraySpec& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArraySpec& operator=(ArraySpec&& o) noexcept = default;
  constexpr ArraySpec& operator=(ArraySpec const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_dimensions, put=__set_dimensions))  dimensions;

constexpr void __set_dimensions(int32_t value) ;

constexpr int32_t __get_dimensions() const;

 bool __declspec(property(get=__get_bound, put=__set_bound))  bound;

constexpr void __set_bound(bool value) ;

constexpr bool __get_bound() const;


// Methods

static System::ArraySpec New_ctor(int32_t dimensions, bool bound) ;

/// @brief Method .ctor addr 0x24984bc size 0x10 virtual false final false
 void _ctor(int32_t dimensions, bool bound) ;

/// @brief Method Resolve addr 0x24984cc size 0x64 virtual true final true
 System::Type Resolve(System::Type type) ;

/// @brief Method Append addr 0x2498530 size 0xa0 virtual true final true
 System::Text::StringBuilder Append(System::Text::StringBuilder sb) ;

/// @brief Method ToString addr 0x24985d0 size 0x74 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ArraySpec);
DEFINE_IL2CPP_ARG_TYPE(System::ArraySpec, "System", "ArraySpec");
