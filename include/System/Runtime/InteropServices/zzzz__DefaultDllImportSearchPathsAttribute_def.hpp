#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System::Runtime::InteropServices {
struct DllImportSearchPath;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class DefaultDllImportSearchPathsAttribute;
}
// Type: System.Runtime.InteropServices::DefaultDllImportSearchPathsAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3323))
// CS Name: System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
class CORDL_TYPE DefaultDllImportSearchPathsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultDllImportSearchPathsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: " const&", def_value: None }]
constexpr DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDllImportSearchPathsAttribute", modifiers: "&&", def_value: None }]
constexpr DefaultDllImportSearchPathsAttribute(DefaultDllImportSearchPathsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDllImportSearchPathsAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr DefaultDllImportSearchPathsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDllImportSearchPathsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDllImportSearchPathsAttribute& operator=(DefaultDllImportSearchPathsAttribute&& o) noexcept = default;
  constexpr DefaultDllImportSearchPathsAttribute& operator=(DefaultDllImportSearchPathsAttribute const& o) noexcept = default;
                


// Fields

 ::System::Runtime::InteropServices::DllImportSearchPath __declspec(property(get=__get__paths, put=__set__paths))  _paths;

constexpr void __set__paths(::System::Runtime::InteropServices::DllImportSearchPath value) ;

constexpr ::System::Runtime::InteropServices::DllImportSearchPath __get__paths() const;


// Methods

// Ctor Parameters [CppParam { name: "paths", ty: "::System::Runtime::InteropServices::DllImportSearchPath", modifiers: "", def_value: None }]
explicit DefaultDllImportSearchPathsAttribute(::System::Runtime::InteropServices::DllImportSearchPath paths) ;

/// @brief Method .ctor addr 0x236acb8 size 0x28 virtual false final false
 void _ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
