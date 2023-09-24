#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class System__DelegateSerializationHolder__DelegateEntry;
}
namespace System {
class Delegate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DelegateSerializationHolder;
}
namespace System {
class System__DelegateSerializationHolder__DelegateEntry;
}
// Type: ::DelegateEntry
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2589))
// CS Name: System.DelegateSerializationHolder::DelegateEntry
class CORDL_TYPE System__DelegateSerializationHolder__DelegateEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~System__DelegateSerializationHolder__DelegateEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DelegateSerializationHolder__DelegateEntry", modifiers: " const&", def_value: None }]
constexpr System__DelegateSerializationHolder__DelegateEntry(System__DelegateSerializationHolder__DelegateEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__DelegateSerializationHolder__DelegateEntry", modifiers: "&&", def_value: None }]
constexpr System__DelegateSerializationHolder__DelegateEntry(System__DelegateSerializationHolder__DelegateEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__DelegateSerializationHolder__DelegateEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__DelegateSerializationHolder__DelegateEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__DelegateSerializationHolder__DelegateEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__DelegateSerializationHolder__DelegateEntry& operator=(System__DelegateSerializationHolder__DelegateEntry&& o) noexcept = default;
  constexpr System__DelegateSerializationHolder__DelegateEntry& operator=(System__DelegateSerializationHolder__DelegateEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::StringW __declspec(property(get=__get_assembly, put=__set_assembly))  assembly;

constexpr void __set_assembly(::StringW value) ;

constexpr ::StringW __get_assembly() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_target, put=__set_target))  target;

constexpr void __set_target(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_target() const;

 ::StringW __declspec(property(get=__get_targetTypeAssembly, put=__set_targetTypeAssembly))  targetTypeAssembly;

constexpr void __set_targetTypeAssembly(::StringW value) ;

constexpr ::StringW __get_targetTypeAssembly() const;

 ::StringW __declspec(property(get=__get_targetTypeName, put=__set_targetTypeName))  targetTypeName;

constexpr void __set_targetTypeName(::StringW value) ;

constexpr ::StringW __get_targetTypeName() const;

 ::StringW __declspec(property(get=__get_methodName, put=__set_methodName))  methodName;

constexpr void __set_methodName(::StringW value) ;

constexpr ::StringW __get_methodName() const;

 System::System__DelegateSerializationHolder__DelegateEntry __declspec(property(get=__get_delegateEntry, put=__set_delegateEntry))  delegateEntry;

constexpr void __set_delegateEntry(System::System__DelegateSerializationHolder__DelegateEntry value) ;

constexpr System::System__DelegateSerializationHolder__DelegateEntry __get_delegateEntry() const;


// Methods

static System::System__DelegateSerializationHolder__DelegateEntry New_ctor(System::Delegate del, ::StringW targetLabel) ;

/// @brief Method .ctor addr 0x248bae8 size 0x11c virtual false final false
 void _ctor(System::Delegate del, ::StringW targetLabel) ;

/// @brief Method DeserializeDelegate addr 0x248b870 size 0x278 virtual false final false
 System::Delegate DeserializeDelegate(System::Runtime::Serialization::SerializationInfo info, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::DelegateSerializationHolder
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2590))
// CS Name: System.DelegateSerializationHolder
class CORDL_TYPE DelegateSerializationHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DelegateEntry = System::System__DelegateSerializationHolder__DelegateEntry;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DelegateSerializationHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: " const&", def_value: None }]
constexpr DelegateSerializationHolder(DelegateSerializationHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: "&&", def_value: None }]
constexpr DelegateSerializationHolder(DelegateSerializationHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegateSerializationHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelegateSerializationHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegateSerializationHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegateSerializationHolder& operator=(DelegateSerializationHolder&& o) noexcept = default;
  constexpr DelegateSerializationHolder& operator=(DelegateSerializationHolder const& o) noexcept = default;
                


// Fields

 System::Delegate __declspec(property(get=__get__delegate, put=__set__delegate))  _delegate;

constexpr void __set__delegate(System::Delegate value) ;

constexpr System::Delegate __get__delegate() const;


// Methods

static System::DelegateSerializationHolder New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method .ctor addr 0x248b670 size 0x200 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method GetDelegateData addr 0x248b250 size 0x248 virtual false final false
static void GetDelegateData(System::Delegate instance, System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method GetObjectData addr 0x248bc04 size 0x40 virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x248bc44 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::DelegateSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(System::DelegateSerializationHolder, "System", "DelegateSerializationHolder");
NEED_NO_BOX(System::System__DelegateSerializationHolder__DelegateEntry);
DEFINE_IL2CPP_ARG_TYPE(System::System__DelegateSerializationHolder__DelegateEntry, "System", "DelegateSerializationHolder/DelegateEntry");
