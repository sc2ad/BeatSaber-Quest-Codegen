#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryAssemblyInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3253))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
class CORDL_TYPE BinaryAssemblyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BinaryAssemblyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssemblyInfo", modifiers: " const&", def_value: None }]
constexpr BinaryAssemblyInfo(BinaryAssemblyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryAssemblyInfo", modifiers: "&&", def_value: None }]
constexpr BinaryAssemblyInfo(BinaryAssemblyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryAssemblyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryAssemblyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryAssemblyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryAssemblyInfo& operator=(BinaryAssemblyInfo&& o) noexcept = default;
  constexpr BinaryAssemblyInfo& operator=(BinaryAssemblyInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_assemblyString, put=__set_assemblyString))  assemblyString;

constexpr void __set_assemblyString(::StringW value) ;

constexpr ::StringW __get_assemblyString() const;

 System::Reflection::Assembly __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get_assembly() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo New_ctor(::StringW assemblyString) ;

/// @brief Method .ctor addr 0x2355728 size 0x28 virtual false final false
 void _ctor(::StringW assemblyString) ;

static System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo New_ctor(::StringW assemblyString, System::Reflection::Assembly assembly) ;

/// @brief Method .ctor addr 0x2355750 size 0x2c virtual false final false
 void _ctor(::StringW assemblyString, System::Reflection::Assembly assembly) ;

/// @brief Method GetAssembly addr 0x235577c size 0x11c virtual false final false
 System::Reflection::Assembly GetAssembly() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo");
