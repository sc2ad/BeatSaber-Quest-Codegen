#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallerMemberNameAttribute;
}
// Type: System.Runtime.CompilerServices::CallerMemberNameAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3352))
// CS Name: System.Runtime.CompilerServices.CallerMemberNameAttribute
class CORDL_TYPE CallerMemberNameAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CallerMemberNameAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallerMemberNameAttribute", modifiers: " const&", def_value: None }]
constexpr CallerMemberNameAttribute(CallerMemberNameAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallerMemberNameAttribute", modifiers: "&&", def_value: None }]
constexpr CallerMemberNameAttribute(CallerMemberNameAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallerMemberNameAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr CallerMemberNameAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallerMemberNameAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallerMemberNameAttribute& operator=(CallerMemberNameAttribute&& o) noexcept = default;
  constexpr CallerMemberNameAttribute& operator=(CallerMemberNameAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CallerMemberNameAttribute() ;

/// @brief Method .ctor addr 0x236da04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::CallerMemberNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallerMemberNameAttribute, "System.Runtime.CompilerServices", "CallerMemberNameAttribute");
