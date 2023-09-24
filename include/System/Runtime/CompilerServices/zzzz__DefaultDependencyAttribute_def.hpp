#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System::Runtime::CompilerServices {
struct LoadHint;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class DefaultDependencyAttribute;
}
// Type: System.Runtime.CompilerServices::DefaultDependencyAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3404))
// CS Name: System.Runtime.CompilerServices.DefaultDependencyAttribute
class CORDL_TYPE DefaultDependencyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultDependencyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultDependencyAttribute(DefaultDependencyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDependencyAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultDependencyAttribute(DefaultDependencyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDependencyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DefaultDependencyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDependencyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDependencyAttribute& operator=(DefaultDependencyAttribute&& o) noexcept = default;
  constexpr DefaultDependencyAttribute& operator=(DefaultDependencyAttribute const& o) noexcept = default;
                


// Fields

 System::Runtime::CompilerServices::LoadHint __declspec(property(get=__get_loadHint, put=__set_loadHint))  loadHint;

constexpr void __set_loadHint(System::Runtime::CompilerServices::LoadHint value) ;

constexpr System::Runtime::CompilerServices::LoadHint __get_loadHint() const;


// Methods

static System::Runtime::CompilerServices::DefaultDependencyAttribute New_ctor(System::Runtime::CompilerServices::LoadHint loadHintArgument) ;

/// @brief Method .ctor addr 0x23709dc size 0x28 virtual false final false
 void _ctor(System::Runtime::CompilerServices::LoadHint loadHintArgument) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::DefaultDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DefaultDependencyAttribute, "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
