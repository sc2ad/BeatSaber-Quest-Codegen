#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::ComponentModel {
struct EditorBrowsableState;
}
// Forward declare root types
namespace System::ComponentModel {
class EditorBrowsableAttribute;
}
// Type: System.ComponentModel::EditorBrowsableAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8235))
// CS Name: System.ComponentModel.EditorBrowsableAttribute
class CORDL_TYPE EditorBrowsableAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EditorBrowsableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorBrowsableAttribute", modifiers: " const&", def_value: None }]
constexpr EditorBrowsableAttribute(EditorBrowsableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditorBrowsableAttribute", modifiers: "&&", def_value: None }]
constexpr EditorBrowsableAttribute(EditorBrowsableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditorBrowsableAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr EditorBrowsableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditorBrowsableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditorBrowsableAttribute& operator=(EditorBrowsableAttribute&& o) noexcept = default;
  constexpr EditorBrowsableAttribute& operator=(EditorBrowsableAttribute const& o) noexcept = default;
                


// Fields

 System::ComponentModel::EditorBrowsableState __declspec(property(get=__get_browsableState, put=__set_browsableState))  browsableState;

constexpr void __set_browsableState(System::ComponentModel::EditorBrowsableState value) ;

constexpr System::ComponentModel::EditorBrowsableState __get_browsableState() const;


// Methods

// Ctor Parameters [CppParam { name: "state", ty: "System::ComponentModel::EditorBrowsableState", modifiers: "", def_value: None }]
explicit EditorBrowsableAttribute(System::ComponentModel::EditorBrowsableState state) ;

/// @brief Method .ctor addr 0x2770fa4 size 0x28 virtual false final false
 void _ctor(System::ComponentModel::EditorBrowsableState state) ;

/// @brief Method Equals addr 0x2770fcc size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2771058 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::EditorBrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EditorBrowsableAttribute, "System.ComponentModel", "EditorBrowsableAttribute");
