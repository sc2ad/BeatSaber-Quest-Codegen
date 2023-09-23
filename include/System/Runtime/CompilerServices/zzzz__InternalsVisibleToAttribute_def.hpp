#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class InternalsVisibleToAttribute;
}
// Type: System.Runtime.CompilerServices::InternalsVisibleToAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3407))
// CS Name: System.Runtime.CompilerServices.InternalsVisibleToAttribute
class CORDL_TYPE InternalsVisibleToAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InternalsVisibleToAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: " const&", def_value: None }]
constexpr InternalsVisibleToAttribute(InternalsVisibleToAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalsVisibleToAttribute", modifiers: "&&", def_value: None }]
constexpr InternalsVisibleToAttribute(InternalsVisibleToAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalsVisibleToAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr InternalsVisibleToAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalsVisibleToAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalsVisibleToAttribute& operator=(InternalsVisibleToAttribute&& o) noexcept = default;
  constexpr InternalsVisibleToAttribute& operator=(InternalsVisibleToAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__assemblyName, put=__set__assemblyName))  _assemblyName;

constexpr void __set__assemblyName(::StringW value) ;

constexpr ::StringW __get__assemblyName() const;

 bool __declspec(property(get=__get__allInternalsVisible, put=__set__allInternalsVisible))  _allInternalsVisible;

constexpr void __set__allInternalsVisible(bool value) ;

constexpr bool __get__allInternalsVisible() const;


// Properties

 bool __declspec(property(put=set_AllInternalsVisible))  AllInternalsVisible;


// Methods

// Ctor Parameters [CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }]
explicit InternalsVisibleToAttribute(::StringW assemblyName) ;

/// @brief Method .ctor addr 0x2370a5c size 0x30 virtual false final false
 void _ctor(::StringW assemblyName) ;

/// @brief Method set_AllInternalsVisible addr 0x2370a8c size 0xc virtual false final false
 void set_AllInternalsVisible(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::InternalsVisibleToAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::InternalsVisibleToAttribute, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
