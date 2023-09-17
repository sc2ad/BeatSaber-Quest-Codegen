#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Module;
}
// Forward declare root types
namespace System::Reflection {
class MemberInfo;
}
// Type: System.Reflection::MemberInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3466))
// CS Name: System.Reflection.MemberInfo
class CORDL_TYPE MemberInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Reflection::ICustomAttributeProvider
constexpr operator  ::System::Reflection::ICustomAttributeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemberInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfo", modifiers: " const&", def_value: None }]
constexpr MemberInfo(MemberInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfo", modifiers: "&&", def_value: None }]
constexpr MemberInfo(MemberInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberInfo& operator=(MemberInfo&& o) noexcept = default;
  constexpr MemberInfo& operator=(MemberInfo const& o) noexcept = default;
                


// Properties

 ::System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;

 ::System::Reflection::Module __declspec(property(get=get_Module))  Module;

 int32_t __declspec(property(get=get_MetadataToken))  MetadataToken;


// Methods

// Ctor Parameters []
explicit MemberInfo() ;

/// @brief Method .ctor addr 0x2379148 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_DeclaringType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_DeclaringType() ;

/// @brief Method get_ReflectedType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_ReflectedType() ;

/// @brief Method get_Module addr 0x237a75c size 0xd4 virtual true final false
 ::System::Reflection::Module get_Module() ;

/// @brief Method IsDefined addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsDefined(::System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(::System::Type attributeType, bool inherit) ;

/// @brief Method get_MetadataToken addr 0x237a830 size 0x40 virtual true final false
 int32_t get_MetadataToken() ;

/// @brief Method Equals addr 0x23792b0 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x23792c0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x237a870 size 0x35c virtual false final false
static bool op_Equality(::System::Reflection::MemberInfo left, ::System::Reflection::MemberInfo right) ;

/// @brief Method op_Inequality addr 0x237ae00 size 0x18 virtual false final false
static bool op_Inequality(::System::Reflection::MemberInfo left, ::System::Reflection::MemberInfo right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::MemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfo, "System.Reflection", "MemberInfo");
