#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
namespace System::Runtime::Serialization {
class FixupHolder;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectManager;
}
// Type: System.Runtime.Serialization::ObjectManager
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3213))
// CS Name: System.Runtime.Serialization.ObjectManager
class CORDL_TYPE ObjectManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: " const&", def_value: None }]
constexpr ObjectManager(ObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectManager", modifiers: "&&", def_value: None }]
constexpr ObjectManager(ObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectManager& operator=(ObjectManager&& o) noexcept = default;
  constexpr ObjectManager& operator=(ObjectManager const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::DeserializationEventHandler __declspec(property(get=__get_m_onDeserializationHandler, put=__set_m_onDeserializationHandler))  m_onDeserializationHandler;

constexpr void __set_m_onDeserializationHandler(System::Runtime::Serialization::DeserializationEventHandler value) ;

constexpr System::Runtime::Serialization::DeserializationEventHandler __get_m_onDeserializationHandler() const;

 System::Runtime::Serialization::SerializationEventHandler __declspec(property(get=__get_m_onDeserializedHandler, put=__set_m_onDeserializedHandler))  m_onDeserializedHandler;

constexpr void __set_m_onDeserializedHandler(System::Runtime::Serialization::SerializationEventHandler value) ;

constexpr System::Runtime::Serialization::SerializationEventHandler __get_m_onDeserializedHandler() const;

 ::ArrayW<System::Runtime::Serialization::ObjectHolder> __declspec(property(get=__get_m_objects, put=__set_m_objects))  m_objects;

constexpr void __set_m_objects(::ArrayW<System::Runtime::Serialization::ObjectHolder> value) ;

constexpr ::ArrayW<System::Runtime::Serialization::ObjectHolder> __get_m_objects() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_topObject, put=__set_m_topObject))  m_topObject;

constexpr void __set_m_topObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_topObject() const;

 System::Runtime::Serialization::ObjectHolderList __declspec(property(get=__get_m_specialFixupObjects, put=__set_m_specialFixupObjects))  m_specialFixupObjects;

constexpr void __set_m_specialFixupObjects(System::Runtime::Serialization::ObjectHolderList value) ;

constexpr System::Runtime::Serialization::ObjectHolderList __get_m_specialFixupObjects() const;

 int64_t __declspec(property(get=__get_m_fixupCount, put=__set_m_fixupCount))  m_fixupCount;

constexpr void __set_m_fixupCount(int64_t value) ;

constexpr int64_t __get_m_fixupCount() const;

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get_m_selector, put=__set_m_selector))  m_selector;

constexpr void __set_m_selector(System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr System::Runtime::Serialization::ISurrogateSelector __get_m_selector() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_m_context() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TopObject, put=set_TopObject))  TopObject;

 System::Runtime::Serialization::ObjectHolderList __declspec(property(get=get_SpecialFixupObjects))  SpecialFixupObjects;


// Methods

// Ctor Parameters [CppParam { name: "selector", ty: "System::Runtime::Serialization::ISurrogateSelector", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }, CppParam { name: "checkSecurity", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isCrossAppDomain", ty: "bool", modifiers: "", def_value: None }]
explicit ObjectManager(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) ;

/// @brief Method .ctor addr 0x234c9e4 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain) ;

/// @brief Method CanCallGetType addr 0x234ca64 size 0x8 virtual false final false
 bool CanCallGetType(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method set_TopObject addr 0x234ca6c size 0x8 virtual false final false
 void set_TopObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_TopObject addr 0x234ca74 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_TopObject() ;

/// @brief Method get_SpecialFixupObjects addr 0x234ca7c size 0x6c virtual false final false
 System::Runtime::Serialization::ObjectHolderList get_SpecialFixupObjects() ;

/// @brief Method FindObjectHolder addr 0x234caf0 size 0x58 virtual false final false
 System::Runtime::Serialization::ObjectHolder FindObjectHolder(int64_t objectID) ;

/// @brief Method FindOrCreateObjectHolder addr 0x234cb48 size 0xa4 virtual false final false
 System::Runtime::Serialization::ObjectHolder FindOrCreateObjectHolder(int64_t objectID) ;

/// @brief Method AddObjectHolder addr 0x234cc20 size 0x12c virtual false final false
 void AddObjectHolder(System::Runtime::Serialization::ObjectHolder holder) ;

/// @brief Method GetCompletionInfo addr 0x234cd4c size 0x2b8 virtual false final false
 bool GetCompletionInfo(System::Runtime::Serialization::FixupHolder fixup, ByRef<System::Runtime::Serialization::ObjectHolder> holder, ByRef<::bs_hook::Il2CppWrapperType> member, bool bThrowIfMissing) ;

/// @brief Method FixupSpecialObject addr 0x234d054 size 0x238 virtual false final false
 void FixupSpecialObject(System::Runtime::Serialization::ObjectHolder holder) ;

/// @brief Method ResolveObjectReference addr 0x234de18 size 0x288 virtual false final false
 bool ResolveObjectReference(System::Runtime::Serialization::ObjectHolder holder) ;

/// @brief Method DoValueTypeFixup addr 0x234d7e0 size 0x560 virtual false final false
 bool DoValueTypeFixup(System::Reflection::FieldInfo memberToFix, System::Runtime::Serialization::ObjectHolder holder, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompleteObject addr 0x234e0bc size 0x620 virtual false final false
 void CompleteObject(System::Runtime::Serialization::ObjectHolder holder, bool bObjectFullyComplete) ;

/// @brief Method DoNewlyRegisteredObjectFixups addr 0x234dd40 size 0xd8 virtual false final false
 void DoNewlyRegisteredObjectFixups(System::Runtime::Serialization::ObjectHolder holder) ;

/// @brief Method GetObject addr 0x234e8e0 size 0xb4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetObject(int64_t objectID) ;

/// @brief Method RegisterString addr 0x234e994 size 0x100 virtual false final false
 void RegisterString(::StringW obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo info, int64_t idOfContainingObj, System::Reflection::MemberInfo member) ;

/// @brief Method RegisterObject addr 0x234eb78 size 0x5bc virtual false final false
 void RegisterObject(::bs_hook::Il2CppWrapperType obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo info, int64_t idOfContainingObj, System::Reflection::MemberInfo member, ::ArrayW<int32_t> arrayIndex) ;

/// @brief Method CompleteISerializableObject addr 0x234d4f0 size 0x290 virtual false final false
 void CompleteISerializableObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetConstructor addr 0x234f4bc size 0x138 virtual false final false
static System::Reflection::RuntimeConstructorInfo GetConstructor(System::RuntimeType t) ;

/// @brief Method DoFixups addr 0x234f5f4 size 0x304 virtual true final false
 void DoFixups() ;

/// @brief Method RegisterFixup addr 0x234fa70 size 0xe0 virtual false final false
 void RegisterFixup(System::Runtime::Serialization::FixupHolder fixup, int64_t objectToBeFixed, int64_t objectRequired) ;

/// @brief Method RecordFixup addr 0x234fc80 size 0x2a0 virtual true final false
 void RecordFixup(int64_t objectToBeFixed, System::Reflection::MemberInfo member, int64_t objectRequired) ;

/// @brief Method RecordDelayedFixup addr 0x234ff5c size 0x168 virtual true final false
 void RecordDelayedFixup(int64_t objectToBeFixed, ::StringW memberName, int64_t objectRequired) ;

/// @brief Method RecordArrayElementFixup addr 0x23500c4 size 0x168 virtual true final false
 void RecordArrayElementFixup(int64_t arrayToBeFixed, ::ArrayW<int32_t> indices, int64_t objectRequired) ;

/// @brief Method RaiseDeserializationEvent addr 0x235022c size 0x4c virtual true final false
 void RaiseDeserializationEvent() ;

/// @brief Method AddOnDeserialization addr 0x2350278 size 0x80 virtual true final false
 void AddOnDeserialization(System::Runtime::Serialization::DeserializationEventHandler handler) ;

/// @brief Method AddOnDeserialized addr 0x23502f8 size 0x90 virtual true final false
 void AddOnDeserialized(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method RaiseOnDeserializedEvent addr 0x2350388 size 0x84 virtual true final false
 void RaiseOnDeserializedEvent(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method RaiseOnDeserializingEvent addr 0x235040c size 0x84 virtual false final false
 void RaiseOnDeserializingEvent(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ObjectManager);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectManager, "System.Runtime.Serialization", "ObjectManager");
