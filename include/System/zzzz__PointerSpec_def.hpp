#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace System {
class ModifierSpec;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
class PointerSpec;
}
// Type: System::PointerSpec
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2634))
// CS Name: System.PointerSpec
class CORDL_TYPE PointerSpec : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ModifierSpec
constexpr operator  System::ModifierSpec() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PointerSpec() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerSpec", modifiers: " const&", def_value: None }]
constexpr PointerSpec(PointerSpec const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerSpec", modifiers: "&&", def_value: None }]
constexpr PointerSpec(PointerSpec&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerSpec(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerSpec& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerSpec& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerSpec& operator=(PointerSpec&& o) noexcept = default;
  constexpr PointerSpec& operator=(PointerSpec const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_pointer_level, put=__set_pointer_level))  pointer_level;

constexpr void __set_pointer_level(int32_t value) ;

constexpr int32_t __get_pointer_level() const;


// Methods

static System::PointerSpec New_ctor(int32_t pointer_level) ;

/// @brief Method .ctor addr 0x2498644 size 0x8 virtual false final false
 void _ctor(int32_t pointer_level) ;

/// @brief Method Resolve addr 0x249864c size 0x54 virtual true final true
 System::Type Resolve(System::Type type) ;

/// @brief Method Append addr 0x24986a0 size 0x28 virtual true final true
 System::Text::StringBuilder Append(System::Text::StringBuilder sb) ;

/// @brief Method ToString addr 0x24986c8 size 0x1074 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::PointerSpec);
DEFINE_IL2CPP_ARG_TYPE(System::PointerSpec, "System", "PointerSpec");
