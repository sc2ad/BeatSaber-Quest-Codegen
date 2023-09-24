#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System {
class RuntimeType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SafeSerializationEventArgs;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SafeSerializationManager;
}
// Type: System.Runtime.Serialization::SafeSerializationManager
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3223))
// CS Name: System.Runtime.Serialization.SafeSerializationManager
class CORDL_TYPE SafeSerializationManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SafeSerializationManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationManager", modifiers: " const&", def_value: None }]
constexpr SafeSerializationManager(SafeSerializationManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeSerializationManager", modifiers: "&&", def_value: None }]
constexpr SafeSerializationManager(SafeSerializationManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeSerializationManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SafeSerializationManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeSerializationManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeSerializationManager& operator=(SafeSerializationManager&& o) noexcept = default;
  constexpr SafeSerializationManager& operator=(SafeSerializationManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_serializedStates, put=__set_m_serializedStates))  m_serializedStates;

constexpr void __set_m_serializedStates(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> __get_m_serializedStates() const;

 System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_m_savedSerializationInfo, put=__set_m_savedSerializationInfo))  m_savedSerializationInfo;

constexpr void __set_m_savedSerializationInfo(System::Runtime::Serialization::SerializationInfo value) ;

constexpr System::Runtime::Serialization::SerializationInfo __get_m_savedSerializationInfo() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_realObject, put=__set_m_realObject))  m_realObject;

constexpr void __set_m_realObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_realObject() const;

 System::RuntimeType __declspec(property(get=__get_m_realType, put=__set_m_realType))  m_realType;

constexpr void __set_m_realType(System::RuntimeType value) ;

constexpr System::RuntimeType __get_m_realType() const;

 System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs> __declspec(property(get=__get_SerializeObjectState, put=__set_SerializeObjectState))  SerializeObjectState;

constexpr void __set_SerializeObjectState(System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs> value) ;

constexpr System::EventHandler_1<System::Runtime::Serialization::SafeSerializationEventArgs> __get_SerializeObjectState() const;

/// @brief Field RealTypeSerializationName offset 0
static constexpr ::ConstString  RealTypeSerializationName{u"CLR_SafeSerializationManager_RealType"};


// Properties

 bool __declspec(property(get=get_IsActive))  IsActive;


// Methods

static System::Runtime::Serialization::SafeSerializationManager New_ctor() ;

/// @brief Method .ctor addr 0x2350c18 size 0x8 virtual false final false
 void _ctor() ;

static System::Runtime::Serialization::SafeSerializationManager New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2350c20 size 0x1e4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_IsActive addr 0x2351120 size 0x10 virtual false final false
 bool get_IsActive() ;

/// @brief Method CompleteSerialization addr 0x2351130 size 0x174 virtual false final false
 void CompleteSerialization(::bs_hook::Il2CppWrapperType serializedObject, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method CompleteDeserialization addr 0x2351460 size 0x3a0 virtual false final false
 void CompleteDeserialization(::bs_hook::Il2CppWrapperType deserializedObject) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2351800 size 0xb0 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IObjectReference.GetRealObject addr 0x23518b0 size 0x2c0 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialized addr 0x2351b70 size 0x9c virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SafeSerializationManager);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SafeSerializationManager, "System.Runtime.Serialization", "SafeSerializationManager");
