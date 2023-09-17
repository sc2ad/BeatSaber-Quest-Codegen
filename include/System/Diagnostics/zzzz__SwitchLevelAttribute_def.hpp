#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class SwitchLevelAttribute;
}
// Type: System.Diagnostics::SwitchLevelAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7787))
// CS Name: System.Diagnostics.SwitchLevelAttribute
class CORDL_TYPE SwitchLevelAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SwitchLevelAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: " const&", def_value: None }]
constexpr SwitchLevelAttribute(SwitchLevelAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SwitchLevelAttribute", modifiers: "&&", def_value: None }]
constexpr SwitchLevelAttribute(SwitchLevelAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SwitchLevelAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SwitchLevelAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SwitchLevelAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SwitchLevelAttribute& operator=(SwitchLevelAttribute&& o) noexcept = default;
  constexpr SwitchLevelAttribute& operator=(SwitchLevelAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::System::Type value) ;

constexpr ::System::Type __get_type() const;


// Properties

 ::System::Type __declspec(property(put=set_SwitchLevelType))  SwitchLevelType;


// Methods

// Ctor Parameters [CppParam { name: "switchLevelType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit SwitchLevelAttribute(::System::Type switchLevelType) ;

/// @brief Method .ctor addr 0x27da2d8 size 0x2c virtual false final false
 void _ctor(::System::Type switchLevelType) ;

/// @brief Method set_SwitchLevelType addr 0x27da304 size 0xc0 virtual false final false
 void set_SwitchLevelType(::System::Type value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::SwitchLevelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SwitchLevelAttribute, "System.Diagnostics", "SwitchLevelAttribute");
