#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Reflection {
class MethodBase;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace System {
class Type;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionDelegateFactory;
}
// Type: Newtonsoft.Json.Utilities::ReflectionDelegateFactory
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11793))
// CS Name: Newtonsoft.Json.Utilities.ReflectionDelegateFactory
class CORDL_TYPE ReflectionDelegateFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionDelegateFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: " const&", def_value: None }]
constexpr ReflectionDelegateFactory(ReflectionDelegateFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionDelegateFactory", modifiers: "&&", def_value: None }]
constexpr ReflectionDelegateFactory(ReflectionDelegateFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionDelegateFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionDelegateFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionDelegateFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionDelegateFactory& operator=(ReflectionDelegateFactory&& o) noexcept = default;
  constexpr ReflectionDelegateFactory& operator=(ReflectionDelegateFactory const& o) noexcept = default;
                


// Methods

/// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Func_2<T,::bs_hook::Il2CppWrapperType> CreateGet(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Action_2<T,::bs_hook::Il2CppWrapperType> CreateSet(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method CreateMethodCall addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 Newtonsoft::Json::Utilities::MethodCall_2<T,::bs_hook::Il2CppWrapperType> CreateMethodCall(System::Reflection::MethodBase method) ;

/// @brief Method CreateParameterizedConstructor addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Serialization::ObjectConstructor_1<::bs_hook::Il2CppWrapperType> CreateParameterizedConstructor(System::Reflection::MethodBase method) ;

/// @brief Method CreateDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Func_1<T> CreateDefaultConstructor(System::Type type) ;

/// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Func_2<T,::bs_hook::Il2CppWrapperType> CreateGet(System::Reflection::PropertyInfo propertyInfo) ;

/// @brief Method CreateGet addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Func_2<T,::bs_hook::Il2CppWrapperType> CreateGet(System::Reflection::FieldInfo fieldInfo) ;

/// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Action_2<T,::bs_hook::Il2CppWrapperType> CreateSet(System::Reflection::FieldInfo fieldInfo) ;

/// @brief Method CreateSet addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 System::Action_2<T,::bs_hook::Il2CppWrapperType> CreateSet(System::Reflection::PropertyInfo propertyInfo) ;

// Ctor Parameters []
explicit ReflectionDelegateFactory() ;

/// @brief Method .ctor addr 0x24e24a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::ReflectionDelegateFactory);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::ReflectionDelegateFactory, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
