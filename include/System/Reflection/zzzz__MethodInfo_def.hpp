#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace System {
class Delegate;
}
namespace System::Reflection {
struct MemberTypes;
}
// Forward declare root types
namespace System::Reflection {
class MethodInfo;
}
// Type: System.Reflection::MethodInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3471))
// CS Name: System.Reflection.MethodInfo
class CORDL_TYPE MethodInfo : public System::Reflection::MethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MethodInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: " const&", def_value: None }]
constexpr MethodInfo(MethodInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodInfo", modifiers: "&&", def_value: None }]
constexpr MethodInfo(MethodInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodInfo(void* ptr) noexcept : System::Reflection::MethodBase(ptr) {
}


  constexpr MethodInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodInfo& operator=(MethodInfo&& o) noexcept = default;
  constexpr MethodInfo& operator=(MethodInfo const& o) noexcept = default;
                


// Properties

 System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 System::Reflection::ParameterInfo __declspec(property(get=get_ReturnParameter))  ReturnParameter;

 System::Type __declspec(property(get=get_ReturnType))  ReturnType;

 int32_t __declspec(property(get=get_GenericParameterCount))  GenericParameterCount;


// Methods

// Ctor Parameters []
explicit MethodInfo() ;

/// @brief Method .ctor addr 0x237b6dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x237b6e4 size 0x8 virtual true final false
 System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_ReturnParameter addr 0x237b6ec size 0x28 virtual true final false
 System::Reflection::ParameterInfo get_ReturnParameter() ;

/// @brief Method get_ReturnType addr 0x237b714 size 0x28 virtual true final false
 System::Type get_ReturnType() ;

/// @brief Method GetGenericArguments addr 0x237b73c size 0x50 virtual true final false
 ::ArrayW<System::Type> GetGenericArguments() ;

/// @brief Method GetGenericMethodDefinition addr 0x237b78c size 0x50 virtual true final false
 System::Reflection::MethodInfo GetGenericMethodDefinition() ;

/// @brief Method MakeGenericMethod addr 0x237b7dc size 0x50 virtual true final false
 System::Reflection::MethodInfo MakeGenericMethod(::ArrayW<System::Type> typeArguments) ;

/// @brief Method GetBaseDefinition addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodInfo GetBaseDefinition() ;

/// @brief Method CreateDelegate addr 0x237b82c size 0x50 virtual true final false
 System::Delegate CreateDelegate(System::Type delegateType, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method Equals addr 0x237b87c size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x237b884 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x237b038 size 0x2c virtual false final false
static bool op_Equality(System::Reflection::MethodInfo left, System::Reflection::MethodInfo right) ;

/// @brief Method op_Inequality addr 0x237affc size 0x3c virtual false final false
static bool op_Inequality(System::Reflection::MethodInfo left, System::Reflection::MethodInfo right) ;

/// @brief Method get_GenericParameterCount addr 0x237b88c size 0x28 virtual true final false
 int32_t get_GenericParameterCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::MethodInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodInfo, "System.Reflection", "MethodInfo");
