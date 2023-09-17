#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
class LongList;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class FixupHolder;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
namespace System::Runtime::Serialization {
class FixupHolderList;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class ValueTypeFixupInfo;
}
namespace System::Runtime::Serialization {
class TypeLoadExceptionHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Type: System.Runtime.Serialization::ObjectHolder
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3214))
// CS Name: System.Runtime.Serialization.ObjectHolder
class CORDL_TYPE ObjectHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ObjectHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolder", modifiers: " const&", def_value: None }]
constexpr ObjectHolder(ObjectHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolder", modifiers: "&&", def_value: None }]
constexpr ObjectHolder(ObjectHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectHolder& operator=(ObjectHolder&& o) noexcept = default;
  constexpr ObjectHolder& operator=(ObjectHolder const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_object, put=__set_m_object))  m_object;

constexpr void __set_m_object(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_object() const;

 int64_t __declspec(property(get=__get_m_id, put=__set_m_id))  m_id;

constexpr void __set_m_id(int64_t value) ;

constexpr int64_t __get_m_id() const;

 int32_t __declspec(property(get=__get_m_missingElementsRemaining, put=__set_m_missingElementsRemaining))  m_missingElementsRemaining;

constexpr void __set_m_missingElementsRemaining(int32_t value) ;

constexpr int32_t __get_m_missingElementsRemaining() const;

 int32_t __declspec(property(get=__get_m_missingDecendents, put=__set_m_missingDecendents))  m_missingDecendents;

constexpr void __set_m_missingDecendents(int32_t value) ;

constexpr int32_t __get_m_missingDecendents() const;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=__get_m_serInfo, put=__set_m_serInfo))  m_serInfo;

constexpr void __set_m_serInfo(::System::Runtime::Serialization::SerializationInfo value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo __get_m_serInfo() const;

 ::System::Runtime::Serialization::ISerializationSurrogate __declspec(property(get=__get_m_surrogate, put=__set_m_surrogate))  m_surrogate;

constexpr void __set_m_surrogate(::System::Runtime::Serialization::ISerializationSurrogate value) ;

constexpr ::System::Runtime::Serialization::ISerializationSurrogate __get_m_surrogate() const;

 ::System::Runtime::Serialization::FixupHolderList __declspec(property(get=__get_m_missingElements, put=__set_m_missingElements))  m_missingElements;

constexpr void __set_m_missingElements(::System::Runtime::Serialization::FixupHolderList value) ;

constexpr ::System::Runtime::Serialization::FixupHolderList __get_m_missingElements() const;

 ::System::Runtime::Serialization::LongList __declspec(property(get=__get_m_dependentObjects, put=__set_m_dependentObjects))  m_dependentObjects;

constexpr void __set_m_dependentObjects(::System::Runtime::Serialization::LongList value) ;

constexpr ::System::Runtime::Serialization::LongList __get_m_dependentObjects() const;

 ::System::Runtime::Serialization::ObjectHolder __declspec(property(get=__get_m_next, put=__set_m_next))  m_next;

constexpr void __set_m_next(::System::Runtime::Serialization::ObjectHolder value) ;

constexpr ::System::Runtime::Serialization::ObjectHolder __get_m_next() const;

 int32_t __declspec(property(get=__get_m_flags, put=__set_m_flags))  m_flags;

constexpr void __set_m_flags(int32_t value) ;

constexpr int32_t __get_m_flags() const;

 bool __declspec(property(get=__get_m_markForFixupWhenAvailable, put=__set_m_markForFixupWhenAvailable))  m_markForFixupWhenAvailable;

constexpr void __set_m_markForFixupWhenAvailable(bool value) ;

constexpr bool __get_m_markForFixupWhenAvailable() const;

 ::System::Runtime::Serialization::ValueTypeFixupInfo __declspec(property(get=__get_m_valueFixup, put=__set_m_valueFixup))  m_valueFixup;

constexpr void __set_m_valueFixup(::System::Runtime::Serialization::ValueTypeFixupInfo value) ;

constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo __get_m_valueFixup() const;

 ::System::Runtime::Serialization::TypeLoadExceptionHolder __declspec(property(get=__get_m_typeLoad, put=__set_m_typeLoad))  m_typeLoad;

constexpr void __set_m_typeLoad(::System::Runtime::Serialization::TypeLoadExceptionHolder value) ;

constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder __get_m_typeLoad() const;

 bool __declspec(property(get=__get_m_reachable, put=__set_m_reachable))  m_reachable;

constexpr void __set_m_reachable(bool value) ;

constexpr bool __get_m_reachable() const;


// Properties

 bool __declspec(property(get=get_IsIncompleteObjectReference, put=set_IsIncompleteObjectReference))  IsIncompleteObjectReference;

 bool __declspec(property(get=get_RequiresDelayedFixup))  RequiresDelayedFixup;

 bool __declspec(property(get=get_RequiresValueTypeFixup))  RequiresValueTypeFixup;

 bool __declspec(property(get=get_ValueTypeFixupPerformed, put=set_ValueTypeFixupPerformed))  ValueTypeFixupPerformed;

 bool __declspec(property(get=get_HasISerializable))  HasISerializable;

 bool __declspec(property(get=get_HasSurrogate))  HasSurrogate;

 bool __declspec(property(get=get_CanSurrogatedObjectValueChange))  CanSurrogatedObjectValueChange;

 bool __declspec(property(get=get_CanObjectValueChange))  CanObjectValueChange;

 int32_t __declspec(property(get=get_DirectlyDependentObjects))  DirectlyDependentObjects;

 int32_t __declspec(property(get=get_TotalDependentObjects))  TotalDependentObjects;

 bool __declspec(property(get=get_Reachable, put=set_Reachable))  Reachable;

 bool __declspec(property(get=get_TypeLoadExceptionReachable))  TypeLoadExceptionReachable;

 ::System::Runtime::Serialization::TypeLoadExceptionHolder __declspec(property(get=get_TypeLoadException, put=set_TypeLoadException))  TypeLoadException;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ObjectValue))  ObjectValue;

 ::System::Runtime::Serialization::SerializationInfo __declspec(property(get=get_SerializationInfo, put=set_SerializationInfo))  SerializationInfo;

 ::System::Runtime::Serialization::ISerializationSurrogate __declspec(property(get=get_Surrogate))  Surrogate;

 ::System::Runtime::Serialization::LongList __declspec(property(get=get_DependentObjects, put=set_DependentObjects))  DependentObjects;

 bool __declspec(property(get=get_RequiresSerInfoFixup, put=set_RequiresSerInfoFixup))  RequiresSerInfoFixup;

 ::System::Runtime::Serialization::ValueTypeFixupInfo __declspec(property(get=get_ValueFixup))  ValueFixup;

 bool __declspec(property(get=get_CompletelyFixed))  CompletelyFixed;

 int64_t __declspec(property(get=get_ContainerID))  ContainerID;


// Methods

// Ctor Parameters [CppParam { name: "objID", ty: "int64_t", modifiers: "", def_value: None }]
explicit ObjectHolder(int64_t objID) ;

/// @brief Method .ctor addr 0x234cbec size 0x34 virtual false final false
 void _ctor(int64_t objID) ;

// Ctor Parameters [CppParam { name: "obj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "objID", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "surrogate", ty: "::System::Runtime::Serialization::ISerializationSurrogate", modifiers: "", def_value: None }, CppParam { name: "idOfContainingObj", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: None }, CppParam { name: "arrayIndex", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit ObjectHolder(::bs_hook::Il2CppWrapperType obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::ISerializationSurrogate surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo field, ::ArrayW<int32_t> arrayIndex) ;

/// @brief Method .ctor addr 0x234f134 size 0x1dc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::ISerializationSurrogate surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo field, ::ArrayW<int32_t> arrayIndex) ;

// Ctor Parameters [CppParam { name: "obj", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objID", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "surrogate", ty: "::System::Runtime::Serialization::ISerializationSurrogate", modifiers: "", def_value: None }, CppParam { name: "idOfContainingObj", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo", modifiers: "", def_value: None }, CppParam { name: "arrayIndex", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit ObjectHolder(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::ISerializationSurrogate surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo field, ::ArrayW<int32_t> arrayIndex) ;

/// @brief Method .ctor addr 0x234ea94 size 0xe4 virtual false final false
 void _ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::ISerializationSurrogate surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo field, ::ArrayW<int32_t> arrayIndex) ;

/// @brief Method IncrementDescendentFixups addr 0x2350490 size 0x10 virtual false final false
 void IncrementDescendentFixups(int32_t amount) ;

/// @brief Method DecrementFixupsRemaining addr 0x234e7cc size 0x24 virtual false final false
 void DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager manager) ;

/// @brief Method RemoveDependency addr 0x234e7f0 size 0x18 virtual false final false
 void RemoveDependency(int64_t id) ;

/// @brief Method AddFixup addr 0x234fb50 size 0xbc virtual false final false
 void AddFixup(::System::Runtime::Serialization::FixupHolder fixup, ::System::Runtime::Serialization::ObjectManager manager) ;

/// @brief Method UpdateDescendentDependencyChain addr 0x23504a0 size 0x60 virtual false final false
 void UpdateDescendentDependencyChain(int32_t amount, ::System::Runtime::Serialization::ObjectManager manager) ;

/// @brief Method AddDependency addr 0x234fc0c size 0x74 virtual false final false
 void AddDependency(int64_t dependentObject) ;

/// @brief Method UpdateData addr 0x234f320 size 0x190 virtual false final false
 void UpdateData(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::ISerializationSurrogate surrogate, int64_t idOfContainer, ::System::Reflection::FieldInfo field, ::ArrayW<int32_t> arrayIndex, ::System::Runtime::Serialization::ObjectManager manager) ;

/// @brief Method MarkForCompletionWhenAvailable addr 0x234e86c size 0xc virtual false final false
 void MarkForCompletionWhenAvailable() ;

/// @brief Method SetFlags addr 0x234d438 size 0xb8 virtual false final false
 void SetFlags() ;

/// @brief Method get_IsIncompleteObjectReference addr 0x234d048 size 0xc virtual false final false
 bool get_IsIncompleteObjectReference() ;

/// @brief Method set_IsIncompleteObjectReference addr 0x234e0a0 size 0x1c virtual false final false
 void set_IsIncompleteObjectReference(bool value) ;

/// @brief Method get_RequiresDelayedFixup addr 0x234f310 size 0x10 virtual false final false
 bool get_RequiresDelayedFixup() ;

/// @brief Method get_RequiresValueTypeFixup addr 0x234d79c size 0xc virtual false final false
 bool get_RequiresValueTypeFixup() ;

/// @brief Method get_ValueTypeFixupPerformed addr 0x234d7a8 size 0x38 virtual false final false
 bool get_ValueTypeFixupPerformed() ;

/// @brief Method set_ValueTypeFixupPerformed addr 0x234e818 size 0x14 virtual false final false
 void set_ValueTypeFixupPerformed(bool value) ;

/// @brief Method get_HasISerializable addr 0x234e6dc size 0xc virtual false final false
 bool get_HasISerializable() ;

/// @brief Method get_HasSurrogate addr 0x234d28c size 0xc virtual false final false
 bool get_HasSurrogate() ;

/// @brief Method get_CanSurrogatedObjectValueChange addr 0x234d298 size 0xa8 virtual false final false
 bool get_CanSurrogatedObjectValueChange() ;

/// @brief Method get_CanObjectValueChange addr 0x234d028 size 0x20 virtual false final false
 bool get_CanObjectValueChange() ;

/// @brief Method get_DirectlyDependentObjects addr 0x2350638 size 0x8 virtual false final false
 int32_t get_DirectlyDependentObjects() ;

/// @brief Method get_TotalDependentObjects addr 0x234f4b0 size 0xc virtual false final false
 int32_t get_TotalDependentObjects() ;

/// @brief Method get_Reachable addr 0x2350640 size 0x8 virtual false final false
 bool get_Reachable() ;

/// @brief Method set_Reachable addr 0x2350648 size 0xc virtual false final false
 void set_Reachable(bool value) ;

/// @brief Method get_TypeLoadExceptionReachable addr 0x234e808 size 0x10 virtual false final false
 bool get_TypeLoadExceptionReachable() ;

/// @brief Method get_TypeLoadException addr 0x2350654 size 0x8 virtual false final false
 ::System::Runtime::Serialization::TypeLoadExceptionHolder get_TypeLoadException() ;

/// @brief Method set_TypeLoadException addr 0x235065c size 0x8 virtual false final false
 void set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder value) ;

/// @brief Method get_ObjectValue addr 0x2350664 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_ObjectValue() ;

/// @brief Method SetObjectValue addr 0x234d340 size 0xf8 virtual false final false
 void SetObjectValue(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Serialization::ObjectManager manager) ;

/// @brief Method get_SerializationInfo addr 0x235066c size 0x8 virtual false final false
 ::System::Runtime::Serialization::SerializationInfo get_SerializationInfo() ;

/// @brief Method set_SerializationInfo addr 0x2350674 size 0x8 virtual false final false
 void set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo value) ;

/// @brief Method get_Surrogate addr 0x235067c size 0x8 virtual false final false
 ::System::Runtime::Serialization::ISerializationSurrogate get_Surrogate() ;

/// @brief Method get_DependentObjects addr 0x2350684 size 0x8 virtual false final false
 ::System::Runtime::Serialization::LongList get_DependentObjects() ;

/// @brief Method set_DependentObjects addr 0x235068c size 0x8 virtual false final false
 void set_DependentObjects(::System::Runtime::Serialization::LongList value) ;

/// @brief Method get_RequiresSerInfoFixup addr 0x234f998 size 0x1c virtual false final false
 bool get_RequiresSerInfoFixup() ;

/// @brief Method set_RequiresSerInfoFixup addr 0x234d780 size 0x1c virtual false final false
 void set_RequiresSerInfoFixup(bool value) ;

/// @brief Method get_ValueFixup addr 0x2350694 size 0x8 virtual false final false
 ::System::Runtime::Serialization::ValueTypeFixupInfo get_ValueFixup() ;

/// @brief Method get_CompletelyFixed addr 0x234d004 size 0x24 virtual false final false
 bool get_CompletelyFixed() ;

/// @brief Method get_ContainerID addr 0x2350598 size 0x18 virtual false final false
 int64_t get_ContainerID() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolder, "System.Runtime.Serialization", "ObjectHolder");
