#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Type;
}
namespace System {
class RuntimeType;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class Module;
}
// Forward declare root types
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
class System__Reflection__CustomAttributeData__LazyCAttrData;
}
// Type: ::LazyCAttrData
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3505))
// CS Name: System.Reflection.CustomAttributeData::LazyCAttrData
class CORDL_TYPE System__Reflection__CustomAttributeData__LazyCAttrData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Reflection__CustomAttributeData__LazyCAttrData() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__CustomAttributeData__LazyCAttrData", modifiers: " const&", def_value: None }]
constexpr System__Reflection__CustomAttributeData__LazyCAttrData(System__Reflection__CustomAttributeData__LazyCAttrData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Reflection__CustomAttributeData__LazyCAttrData", modifiers: "&&", def_value: None }]
constexpr System__Reflection__CustomAttributeData__LazyCAttrData(System__Reflection__CustomAttributeData__LazyCAttrData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Reflection__CustomAttributeData__LazyCAttrData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Reflection__CustomAttributeData__LazyCAttrData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Reflection__CustomAttributeData__LazyCAttrData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Reflection__CustomAttributeData__LazyCAttrData& operator=(System__Reflection__CustomAttributeData__LazyCAttrData&& o) noexcept = default;
  constexpr System__Reflection__CustomAttributeData__LazyCAttrData& operator=(System__Reflection__CustomAttributeData__LazyCAttrData const& o) noexcept = default;
                


// Fields

 System::Reflection::Assembly __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get_assembly() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_data() const;

 uint32_t __declspec(property(get=__get_data_length, put=__set_data_length))  data_length;

constexpr void __set_data_length(uint32_t value) ;

constexpr uint32_t __get_data_length() const;


// Methods

// Ctor Parameters []
explicit System__Reflection__CustomAttributeData__LazyCAttrData() ;

/// @brief Method .ctor addr 0x238355c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: System.Reflection::CustomAttributeData
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3506))
// CS Name: System.Reflection.CustomAttributeData
class CORDL_TYPE CustomAttributeData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LazyCAttrData = System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CustomAttributeData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeData", modifiers: " const&", def_value: None }]
constexpr CustomAttributeData(CustomAttributeData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeData", modifiers: "&&", def_value: None }]
constexpr CustomAttributeData(CustomAttributeData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomAttributeData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomAttributeData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomAttributeData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomAttributeData& operator=(CustomAttributeData&& o) noexcept = default;
  constexpr CustomAttributeData& operator=(CustomAttributeData const& o) noexcept = default;
                


// Fields

 System::Reflection::ConstructorInfo __declspec(property(get=__get_ctorInfo, put=__set_ctorInfo))  ctorInfo;

constexpr void __set_ctorInfo(System::Reflection::ConstructorInfo value) ;

constexpr System::Reflection::ConstructorInfo __get_ctorInfo() const;

 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> __declspec(property(get=__get_ctorArgs, put=__set_ctorArgs))  ctorArgs;

constexpr void __set_ctorArgs(System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> value) ;

constexpr System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> __get_ctorArgs() const;

 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> __declspec(property(get=__get_namedArgs, put=__set_namedArgs))  namedArgs;

constexpr void __set_namedArgs(System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> value) ;

constexpr System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> __get_namedArgs() const;

 System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData __declspec(property(get=__get_lazyData, put=__set_lazyData))  lazyData;

constexpr void __set_lazyData(System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData value) ;

constexpr System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData __get_lazyData() const;


// Properties

 System::Reflection::ConstructorInfo __declspec(property(get=get_Constructor))  Constructor;

 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> __declspec(property(get=get_ConstructorArguments))  ConstructorArguments;

 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> __declspec(property(get=get_NamedArguments))  NamedArguments;

 System::Type __declspec(property(get=get_AttributeType))  AttributeType;


// Methods

// Ctor Parameters []
explicit CustomAttributeData() ;

/// @brief Method .ctor addr 0x23834bc size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "ctorInfo", ty: "System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "assembly", ty: "System::Reflection::Assembly", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "data_length", ty: "uint32_t", modifiers: "", def_value: None }]
explicit CustomAttributeData(System::Reflection::ConstructorInfo ctorInfo, System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length) ;

/// @brief Method .ctor addr 0x23834c4 size 0x98 virtual false final false
 void _ctor(System::Reflection::ConstructorInfo ctorInfo, System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length) ;

// Ctor Parameters [CppParam { name: "ctorInfo", ty: "System::Reflection::ConstructorInfo", modifiers: "", def_value: None }]
explicit CustomAttributeData(System::Reflection::ConstructorInfo ctorInfo) ;

/// @brief Method .ctor addr 0x237a17c size 0xfc virtual false final false
 void _ctor(System::Reflection::ConstructorInfo ctorInfo) ;

// Ctor Parameters [CppParam { name: "ctorInfo", ty: "System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "ctorArgs", ty: "System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument>", modifiers: "", def_value: None }, CppParam { name: "namedArgs", ty: "System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument>", modifiers: "", def_value: None }]
explicit CustomAttributeData(System::Reflection::ConstructorInfo ctorInfo, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> ctorArgs, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> namedArgs) ;

/// @brief Method .ctor addr 0x237a528 size 0x3c virtual false final false
 void _ctor(System::Reflection::ConstructorInfo ctorInfo, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> ctorArgs, System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> namedArgs) ;

/// @brief Method ResolveArgumentsInternal addr 0x2383564 size 0x4 virtual false final false
static void ResolveArgumentsInternal(System::Reflection::ConstructorInfo ctor, System::Reflection::Assembly assembly, ::cordl_internals::intptr_t data, uint32_t data_length, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> ctorArgs, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> namedArgs) ;

/// @brief Method ResolveArguments addr 0x2383568 size 0x190 virtual false final false
 void ResolveArguments() ;

/// @brief Method get_Constructor addr 0x23836f8 size 0x8 virtual true final false
 System::Reflection::ConstructorInfo get_Constructor() ;

/// @brief Method get_ConstructorArguments addr 0x2383700 size 0x18 virtual true final false
 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeTypedArgument> get_ConstructorArguments() ;

/// @brief Method get_NamedArguments addr 0x2383718 size 0x18 virtual true final false
 System::Collections::Generic::IList_1<System::Reflection::CustomAttributeNamedArgument> get_NamedArguments() ;

/// @brief Method GetCustomAttributes addr 0x2383730 size 0x5c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributes(System::Reflection::Assembly target) ;

/// @brief Method GetCustomAttributes addr 0x238378c size 0x5c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributes(System::Reflection::MemberInfo target) ;

/// @brief Method GetCustomAttributesInternal addr 0x23837e8 size 0x5c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributesInternal(System::RuntimeType target) ;

/// @brief Method GetCustomAttributes addr 0x2383844 size 0x5c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributes(System::Reflection::Module target) ;

/// @brief Method GetCustomAttributes addr 0x23838a0 size 0x5c virtual false final false
static System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData> GetCustomAttributes(System::Reflection::ParameterInfo target) ;

/// @brief Method get_AttributeType addr 0x23838fc size 0x20 virtual false final false
 System::Type get_AttributeType() ;

/// @brief Method ToString addr 0x238391c size 0x570 virtual true final false
 ::StringW ToString() ;

/// @brief Method UnboxValues addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> UnboxValues(::ArrayW<::bs_hook::Il2CppWrapperType> values) ;

/// @brief Method Equals addr 0x2383e8c size 0x680 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x238450c size 0x2f8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::CustomAttributeData);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeData, "System.Reflection", "CustomAttributeData");
NEED_NO_BOX(System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::System__Reflection__CustomAttributeData__LazyCAttrData, "System.Reflection", "CustomAttributeData/LazyCAttrData");
