#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Type_def.hpp"
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System::Reflection {
class TypeInfo;
}
// Type: System.Reflection::TypeInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2493))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3494))
// CS Name: System.Reflection.TypeInfo
class CORDL_TYPE TypeInfo : public System::Type {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: " const&", def_value: None }]
constexpr TypeInfo(TypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInfo", modifiers: "&&", def_value: None }]
constexpr TypeInfo(TypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInfo(void* ptr) noexcept : System::Type(ptr) {
}


  constexpr TypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInfo& operator=(TypeInfo&& o) noexcept = default;
  constexpr TypeInfo& operator=(TypeInfo const& o) noexcept = default;
                


// Fields

/// @brief Field DeclaredOnlyLookup offset 0
static System::Reflection::BindingFlags const DeclaredOnlyLookup;


// Methods

static System::Reflection::TypeInfo New_ctor() ;

/// @brief Method .ctor addr 0x237f61c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeInfo, "System.Reflection", "TypeInfo");
