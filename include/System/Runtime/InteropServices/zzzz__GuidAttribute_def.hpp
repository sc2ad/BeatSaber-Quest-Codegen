#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
class GuidAttribute;
}
// Type: System.Runtime.InteropServices::GuidAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3317))
// CS Name: System.Runtime.InteropServices.GuidAttribute
class CORDL_TYPE GuidAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GuidAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: " const&", def_value: None }]
constexpr GuidAttribute(GuidAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuidAttribute", modifiers: "&&", def_value: None }]
constexpr GuidAttribute(GuidAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuidAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr GuidAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuidAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuidAttribute& operator=(GuidAttribute&& o) noexcept = default;
  constexpr GuidAttribute& operator=(GuidAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__val, put=__set__val))  _val;

constexpr void __set__val(::StringW value) ;

constexpr ::StringW __get__val() const;


// Methods

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit GuidAttribute(::StringW guid) ;

/// @brief Method .ctor addr 0x236ac70 size 0x28 virtual false final false
 void _ctor(::StringW guid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::GuidAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GuidAttribute, "System.Runtime.InteropServices", "GuidAttribute");
