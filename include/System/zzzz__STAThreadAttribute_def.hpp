#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class STAThreadAttribute;
}
// Type: System::STAThreadAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2481))
// CS Name: System.STAThreadAttribute
class CORDL_TYPE STAThreadAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~STAThreadAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "STAThreadAttribute", modifiers: " const&", def_value: None }]
constexpr STAThreadAttribute(STAThreadAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "STAThreadAttribute", modifiers: "&&", def_value: None }]
constexpr STAThreadAttribute(STAThreadAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit STAThreadAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr STAThreadAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr STAThreadAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr STAThreadAttribute& operator=(STAThreadAttribute&& o) noexcept = default;
  constexpr STAThreadAttribute& operator=(STAThreadAttribute const& o) noexcept = default;
                


// Methods

static System::STAThreadAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2457b64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::STAThreadAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::STAThreadAttribute, "System", "STAThreadAttribute");
