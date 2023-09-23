#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
namespace System::Runtime::CompilerServices {
struct CompilationRelaxations;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CompilationRelaxationsAttribute;
}
// Type: System.Runtime.CompilerServices::CompilationRelaxationsAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3406))
// CS Name: System.Runtime.CompilerServices.CompilationRelaxationsAttribute
class CORDL_TYPE CompilationRelaxationsAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CompilationRelaxationsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompilationRelaxationsAttribute", modifiers: " const&", def_value: None }]
constexpr CompilationRelaxationsAttribute(CompilationRelaxationsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompilationRelaxationsAttribute", modifiers: "&&", def_value: None }]
constexpr CompilationRelaxationsAttribute(CompilationRelaxationsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompilationRelaxationsAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CompilationRelaxationsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompilationRelaxationsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompilationRelaxationsAttribute& operator=(CompilationRelaxationsAttribute&& o) noexcept = default;
  constexpr CompilationRelaxationsAttribute& operator=(CompilationRelaxationsAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_relaxations, put=__set_m_relaxations))  m_relaxations;

constexpr void __set_m_relaxations(int32_t value) ;

constexpr int32_t __get_m_relaxations() const;


// Properties

 int32_t __declspec(property(get=get_CompilationRelaxations))  CompilationRelaxations;


// Methods

// Ctor Parameters [CppParam { name: "relaxations", ty: "int32_t", modifiers: "", def_value: None }]
explicit CompilationRelaxationsAttribute(int32_t relaxations) ;

/// @brief Method .ctor addr 0x2370a04 size 0x28 virtual false final false
 void _ctor(int32_t relaxations) ;

// Ctor Parameters [CppParam { name: "relaxations", ty: "System::Runtime::CompilerServices::CompilationRelaxations", modifiers: "", def_value: None }]
explicit CompilationRelaxationsAttribute(System::Runtime::CompilerServices::CompilationRelaxations relaxations) ;

/// @brief Method .ctor addr 0x2370a2c size 0x28 virtual false final false
 void _ctor(System::Runtime::CompilerServices::CompilationRelaxations relaxations) ;

/// @brief Method get_CompilationRelaxations addr 0x2370a54 size 0x8 virtual false final false
 int32_t get_CompilationRelaxations() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::CompilationRelaxationsAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilationRelaxationsAttribute, "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
