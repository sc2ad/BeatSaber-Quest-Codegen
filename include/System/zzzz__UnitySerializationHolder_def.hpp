#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Reflection {
class RuntimeAssembly;
}
// Forward declare root types
namespace System {
class UnitySerializationHolder;
}
// Type: System::UnitySerializationHolder
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2573))
// CS Name: System.UnitySerializationHolder
class CORDL_TYPE UnitySerializationHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~UnitySerializationHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializationHolder", modifiers: " const&", def_value: None }]
constexpr UnitySerializationHolder(UnitySerializationHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnitySerializationHolder", modifiers: "&&", def_value: None }]
constexpr UnitySerializationHolder(UnitySerializationHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnitySerializationHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnitySerializationHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnitySerializationHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnitySerializationHolder& operator=(UnitySerializationHolder&& o) noexcept = default;
  constexpr UnitySerializationHolder& operator=(UnitySerializationHolder const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Type> __declspec(property(get=__get_m_instantiation, put=__set_m_instantiation))  m_instantiation;

constexpr void __set_m_instantiation(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get_m_instantiation() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_elementTypes, put=__set_m_elementTypes))  m_elementTypes;

constexpr void __set_m_elementTypes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_elementTypes() const;

 int32_t __declspec(property(get=__get_m_genericParameterPosition, put=__set_m_genericParameterPosition))  m_genericParameterPosition;

constexpr void __set_m_genericParameterPosition(int32_t value) ;

constexpr int32_t __get_m_genericParameterPosition() const;

 System::Type __declspec(property(get=__get_m_declaringType, put=__set_m_declaringType))  m_declaringType;

constexpr void __set_m_declaringType(System::Type value) ;

constexpr System::Type __get_m_declaringType() const;

 System::Reflection::MethodBase __declspec(property(get=__get_m_declaringMethod, put=__set_m_declaringMethod))  m_declaringMethod;

constexpr void __set_m_declaringMethod(System::Reflection::MethodBase value) ;

constexpr System::Reflection::MethodBase __get_m_declaringMethod() const;

 ::StringW __declspec(property(get=__get_m_data, put=__set_m_data))  m_data;

constexpr void __set_m_data(::StringW value) ;

constexpr ::StringW __get_m_data() const;

 ::StringW __declspec(property(get=__get_m_assemblyName, put=__set_m_assemblyName))  m_assemblyName;

constexpr void __set_m_assemblyName(::StringW value) ;

constexpr ::StringW __get_m_assemblyName() const;

 int32_t __declspec(property(get=__get_m_unityType, put=__set_m_unityType))  m_unityType;

constexpr void __set_m_unityType(int32_t value) ;

constexpr int32_t __get_m_unityType() const;


// Methods

/// @brief Method AddElementTypes addr 0x2484374 size 0x3cc virtual false final false
static System::RuntimeType AddElementTypes(System::Runtime::Serialization::SerializationInfo info, System::RuntimeType type) ;

/// @brief Method MakeElementTypes addr 0x2484740 size 0xf8 virtual false final false
 System::Type MakeElementTypes(System::Type type) ;

/// @brief Method GetUnitySerializationInfo addr 0x2484838 size 0x154 virtual false final false
static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo info, int32_t unityType) ;

/// @brief Method GetUnitySerializationInfo addr 0x248498c size 0x388 virtual false final false
static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo info, System::RuntimeType type) ;

/// @brief Method GetUnitySerializationInfo addr 0x2484d14 size 0x18c virtual false final false
static void GetUnitySerializationInfo(System::Runtime::Serialization::SerializationInfo info, int32_t unityType, ::StringW data, System::Reflection::RuntimeAssembly assembly) ;

static System::UnitySerializationHolder New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2484ea0 size 0x3f4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ThrowInsufficientInformation addr 0x2485294 size 0x9c virtual false final false
 void ThrowInsufficientInformation(::StringW field) ;

/// @brief Method GetObjectData addr 0x24853a0 size 0x58 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x24853f8 size 0x50c virtual true final false
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::UnitySerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(System::UnitySerializationHolder, "System", "UnitySerializationHolder");
