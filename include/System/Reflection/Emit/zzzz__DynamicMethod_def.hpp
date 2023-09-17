#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Type;
}
namespace System::Reflection {
class ParameterInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class DynamicMethod;
}
// Type: System.Reflection.Emit::DynamicMethod
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3528))
// CS Name: System.Reflection.Emit.DynamicMethod
class CORDL_TYPE DynamicMethod : public ::System::Reflection::MethodInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DynamicMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: " const&", def_value: None }]
constexpr DynamicMethod(DynamicMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicMethod", modifiers: "&&", def_value: None }]
constexpr DynamicMethod(DynamicMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicMethod(void* ptr) noexcept : ::System::Reflection::MethodInfo(ptr) {
}


  constexpr DynamicMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicMethod& operator=(DynamicMethod&& o) noexcept = default;
  constexpr DynamicMethod& operator=(DynamicMethod const& o) noexcept = default;
                


// Properties

 ::System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 ::System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 ::System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;


// Methods

/// @brief Method get_Attributes addr 0x238c900 size 0x40 virtual true final false
 ::System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_DeclaringType addr 0x238c940 size 0x40 virtual true final false
 ::System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x238c980 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method GetParameters addr 0x238c9c0 size 0x40 virtual true final false
 ::ArrayW<::System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method get_MethodHandle addr 0x238ca00 size 0x40 virtual true final false
 ::System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_ReflectedType addr 0x238ca40 size 0x40 virtual true final false
 ::System::Type get_ReflectedType() ;

/// @brief Method GetCustomAttributes addr 0x238ca80 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238cac0 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(::System::Type attributeType, bool inherit) ;

/// @brief Method GetMethodImplementationFlags addr 0x238cb00 size 0x40 virtual true final false
 ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetBaseDefinition addr 0x238cb40 size 0x40 virtual true final false
 ::System::Reflection::MethodInfo GetBaseDefinition() ;

/// @brief Method Invoke addr 0x238cb80 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ::System::Globalization::CultureInfo culture) ;

/// @brief Method IsDefined addr 0x238cbc0 size 0x40 virtual true final false
 bool IsDefined(::System::Type attributeType, bool inherit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Emit::DynamicMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::DynamicMethod, "System.Reflection.Emit", "DynamicMethod");
