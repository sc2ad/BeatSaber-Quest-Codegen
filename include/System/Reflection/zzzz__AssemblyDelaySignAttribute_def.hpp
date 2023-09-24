#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyDelaySignAttribute;
}
// Type: System.Reflection::AssemblyDelaySignAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3441))
// CS Name: System.Reflection.AssemblyDelaySignAttribute
class CORDL_TYPE AssemblyDelaySignAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyDelaySignAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyDelaySignAttribute(AssemblyDelaySignAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyDelaySignAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyDelaySignAttribute(AssemblyDelaySignAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyDelaySignAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyDelaySignAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyDelaySignAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyDelaySignAttribute& operator=(AssemblyDelaySignAttribute&& o) noexcept = default;
  constexpr AssemblyDelaySignAttribute& operator=(AssemblyDelaySignAttribute const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__DelaySign_k__BackingField, put=__set__DelaySign_k__BackingField))  _DelaySign_k__BackingField;

constexpr void __set__DelaySign_k__BackingField(bool value) ;

constexpr bool __get__DelaySign_k__BackingField() const;


// Methods

static System::Reflection::AssemblyDelaySignAttribute New_ctor(bool delaySign) ;

/// @brief Method .ctor addr 0x2378d20 size 0x28 virtual false final false
 void _ctor(bool delaySign) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyDelaySignAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDelaySignAttribute, "System.Reflection", "AssemblyDelaySignAttribute");
