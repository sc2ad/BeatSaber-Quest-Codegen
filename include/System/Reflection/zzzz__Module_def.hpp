#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::InteropServices {
class _Module;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class TypeFilter;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::Reflection {
class Module;
}
// Type: System.Reflection::Module
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3473))
// CS Name: System.Reflection.Module
class CORDL_TYPE Module : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Reflection::ICustomAttributeProvider
constexpr operator  System::Reflection::ICustomAttributeProvider() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::InteropServices::_Module
constexpr operator  System::Runtime::InteropServices::_Module() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Module() = default;

// Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: " const&", def_value: None }]
constexpr Module(Module const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: "&&", def_value: None }]
constexpr Module(Module&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Module(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Module& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Module& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Module& operator=(Module&& o) noexcept = default;
  constexpr Module& operator=(Module const& o) noexcept = default;
                


// Fields

static System::Reflection::TypeFilter __declspec(property(get=__get_FilterTypeName, put=__set_FilterTypeName))  FilterTypeName;

static void __set_FilterTypeName(System::Reflection::TypeFilter value) ;

static System::Reflection::TypeFilter __get_FilterTypeName() ;

static System::Reflection::TypeFilter __declspec(property(get=__get_FilterTypeNameIgnoreCase, put=__set_FilterTypeNameIgnoreCase))  FilterTypeNameIgnoreCase;

static void __set_FilterTypeNameIgnoreCase(System::Reflection::TypeFilter value) ;

static System::Reflection::TypeFilter __get_FilterTypeNameIgnoreCase() ;

/// @brief Field DefaultLookup offset 0
static System::Reflection::BindingFlags const DefaultLookup;


// Properties

 System::Reflection::Assembly __declspec(property(get=get_Assembly))  Assembly;

 System::Guid __declspec(property(get=get_ModuleVersionId))  ModuleVersionId;

 ::StringW __declspec(property(get=get_ScopeName))  ScopeName;


// Methods

static System::Reflection::Module New_ctor() ;

/// @brief Method .ctor addr 0x237b960 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Assembly addr 0x237b968 size 0x28 virtual true final false
 System::Reflection::Assembly get_Assembly() ;

/// @brief Method get_ModuleVersionId addr 0x237b990 size 0x28 virtual true final false
 System::Guid get_ModuleVersionId() ;

/// @brief Method get_ScopeName addr 0x237b9b8 size 0x28 virtual true final false
 ::StringW get_ScopeName() ;

/// @brief Method IsResource addr 0x237b9e0 size 0x28 virtual true final false
 bool IsResource() ;

/// @brief Method IsDefined addr 0x237ba08 size 0x28 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x237ba30 size 0x28 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x237ba58 size 0x28 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetObjectData addr 0x237ba80 size 0x28 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x237baa8 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x237bab0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x237bab8 size 0x2c virtual false final false
static bool op_Equality(System::Reflection::Module left, System::Reflection::Module right) ;

/// @brief Method ToString addr 0x237bae4 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method FilterTypeNameImpl addr 0x237baf0 size 0x134 virtual false final false
static bool FilterTypeNameImpl(System::Type cls, ::bs_hook::Il2CppWrapperType filterCriteria) ;

/// @brief Method FilterTypeNameIgnoreCaseImpl addr 0x237bc24 size 0x164 virtual false final false
static bool FilterTypeNameIgnoreCaseImpl(System::Type cls, ::bs_hook::Il2CppWrapperType filterCriteria) ;

/// @brief Method GetModuleVersionId addr 0x237bd88 size 0x40 virtual true final false
 System::Guid GetModuleVersionId() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::Module);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Module, "System.Reflection", "Module");
