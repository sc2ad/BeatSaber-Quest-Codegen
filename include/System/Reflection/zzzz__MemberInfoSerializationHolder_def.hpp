#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class ISerializable;
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
struct MemberTypes;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
// Forward declare root types
namespace System::Reflection {
class MemberInfoSerializationHolder;
}
// Type: System.Reflection::MemberInfoSerializationHolder
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3501))
// CS Name: System.Reflection.MemberInfoSerializationHolder
class CORDL_TYPE MemberInfoSerializationHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::Runtime::Serialization::IObjectReference
constexpr operator  ::System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemberInfoSerializationHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: " const&", def_value: None }]
constexpr MemberInfoSerializationHolder(MemberInfoSerializationHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberInfoSerializationHolder", modifiers: "&&", def_value: None }]
constexpr MemberInfoSerializationHolder(MemberInfoSerializationHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberInfoSerializationHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemberInfoSerializationHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberInfoSerializationHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberInfoSerializationHolder& operator=(MemberInfoSerializationHolder&& o) noexcept = default;
  constexpr MemberInfoSerializationHolder& operator=(MemberInfoSerializationHolder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_memberName, put=__set_m_memberName))  m_memberName;

constexpr void __set_m_memberName(::StringW value) ;

constexpr ::StringW __get_m_memberName() const;

 ::System::RuntimeType __declspec(property(get=__get_m_reflectedType, put=__set_m_reflectedType))  m_reflectedType;

constexpr void __set_m_reflectedType(::System::RuntimeType value) ;

constexpr ::System::RuntimeType __get_m_reflectedType() const;

 ::StringW __declspec(property(get=__get_m_signature, put=__set_m_signature))  m_signature;

constexpr void __set_m_signature(::StringW value) ;

constexpr ::StringW __get_m_signature() const;

 ::StringW __declspec(property(get=__get_m_signature2, put=__set_m_signature2))  m_signature2;

constexpr void __set_m_signature2(::StringW value) ;

constexpr ::StringW __get_m_signature2() const;

 ::System::Reflection::MemberTypes __declspec(property(get=__get_m_memberType, put=__set_m_memberType))  m_memberType;

constexpr void __set_m_memberType(::System::Reflection::MemberTypes value) ;

constexpr ::System::Reflection::MemberTypes __get_m_memberType() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_m_info, put=__set_m_info))  m_info;

constexpr void __set_m_info(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get_m_info() const;


// Methods

/// @brief Method GetSerializationInfo addr 0x2380cec size 0x10 virtual false final false
static void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo info, ::StringW name, ::System::RuntimeType reflectedClass, ::StringW signature, ::System::Reflection::MemberTypes type) ;

/// @brief Method GetSerializationInfo addr 0x2380cfc size 0x314 virtual false final false
static void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo info, ::StringW name, ::System::RuntimeType reflectedClass, ::StringW signature, ::StringW signature2, ::System::Reflection::MemberTypes type, ::ArrayW<::System::Type> genericArguments) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit MemberInfoSerializationHolder(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2381010 size 0x324 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x2381334 size 0x60 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x2381394 size 0x808 virtual true final false
 ::bs_hook::Il2CppWrapperType GetRealObject(::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::MemberInfoSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfoSerializationHolder, "System.Reflection", "MemberInfoSerializationHolder");
