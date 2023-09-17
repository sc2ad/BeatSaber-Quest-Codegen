#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class TypeInformation;
}
// Type: System.Runtime.Serialization.Formatters.Binary::TypeInformation
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3281))
// CS Name: System.Runtime.Serialization.Formatters.Binary.TypeInformation
class CORDL_TYPE TypeInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TypeInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: " const&", def_value: None }]
constexpr TypeInformation(TypeInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
constexpr TypeInformation(TypeInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeInformation& operator=(TypeInformation&& o) noexcept = default;
  constexpr TypeInformation& operator=(TypeInformation const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_fullTypeName, put=__set_fullTypeName))  fullTypeName;

constexpr void __set_fullTypeName(::StringW value) ;

constexpr ::StringW __get_fullTypeName() const;

 ::StringW __declspec(property(get=__get_assemblyString, put=__set_assemblyString))  assemblyString;

constexpr void __set_assemblyString(::StringW value) ;

constexpr ::StringW __get_assemblyString() const;

 bool __declspec(property(get=__get_hasTypeForwardedFrom, put=__set_hasTypeForwardedFrom))  hasTypeForwardedFrom;

constexpr void __set_hasTypeForwardedFrom(bool value) ;

constexpr bool __get_hasTypeForwardedFrom() const;


// Properties

 ::StringW __declspec(property(get=get_FullTypeName))  FullTypeName;

 ::StringW __declspec(property(get=get_AssemblyString))  AssemblyString;

 bool __declspec(property(get=get_HasTypeForwardedFrom))  HasTypeForwardedFrom;


// Methods

/// @brief Method get_FullTypeName addr 0x235f184 size 0x8 virtual false final false
 ::StringW get_FullTypeName() ;

/// @brief Method get_AssemblyString addr 0x235f18c size 0x8 virtual false final false
 ::StringW get_AssemblyString() ;

/// @brief Method get_HasTypeForwardedFrom addr 0x235f194 size 0x8 virtual false final false
 bool get_HasTypeForwardedFrom() ;

// Ctor Parameters [CppParam { name: "fullTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasTypeForwardedFrom", ty: "bool", modifiers: "", def_value: None }]
explicit TypeInformation(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) ;

/// @brief Method .ctor addr 0x235f19c size 0x3c virtual false final false
 void _ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::TypeInformation, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");
