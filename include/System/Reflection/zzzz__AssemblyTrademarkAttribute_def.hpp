#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Reflection {
class AssemblyTrademarkAttribute;
}
// Type: System.Reflection::AssemblyTrademarkAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3449))
// CS Name: System.Reflection.AssemblyTrademarkAttribute
class CORDL_TYPE AssemblyTrademarkAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssemblyTrademarkAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTrademarkAttribute", modifiers: " const&", def_value: None }]
constexpr AssemblyTrademarkAttribute(AssemblyTrademarkAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTrademarkAttribute", modifiers: "&&", def_value: None }]
constexpr AssemblyTrademarkAttribute(AssemblyTrademarkAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssemblyTrademarkAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr AssemblyTrademarkAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssemblyTrademarkAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssemblyTrademarkAttribute& operator=(AssemblyTrademarkAttribute&& o) noexcept = default;
  constexpr AssemblyTrademarkAttribute& operator=(AssemblyTrademarkAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Trademark_k__BackingField, put=__set__Trademark_k__BackingField))  _Trademark_k__BackingField;

constexpr void __set__Trademark_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Trademark_k__BackingField() const;


// Methods

static System::Reflection::AssemblyTrademarkAttribute New_ctor(::StringW trademark) ;

/// @brief Method .ctor addr 0x2378e88 size 0x28 virtual false final false
 void _ctor(::StringW trademark) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::AssemblyTrademarkAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTrademarkAttribute, "System.Reflection", "AssemblyTrademarkAttribute");
