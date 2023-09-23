#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System::Runtime::Remoting::Contexts {
class System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg;
}
// Type: ::DynamicPropertyReg
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3095))
// CS Name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection::DynamicPropertyReg
class CORDL_TYPE System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg(System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg(System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg& operator=(System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg&& o) noexcept = default;
  constexpr System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg& operator=(System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Contexts::IDynamicProperty __declspec(property(get=__get_Property, put=__set_Property))  Property;

constexpr void __set_Property(System::Runtime::Remoting::Contexts::IDynamicProperty value) ;

constexpr System::Runtime::Remoting::Contexts::IDynamicProperty __get_Property() const;

 System::Runtime::Remoting::Contexts::IDynamicMessageSink __declspec(property(get=__get_Sink, put=__set_Sink))  Sink;

constexpr void __set_Sink(System::Runtime::Remoting::Contexts::IDynamicMessageSink value) ;

constexpr System::Runtime::Remoting::Contexts::IDynamicMessageSink __get_Sink() const;


// Methods

// Ctor Parameters []
explicit System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg() ;

/// @brief Method .ctor addr 0x2332cc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
// Type: System.Runtime.Remoting.Contexts::DynamicPropertyCollection
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3096))
// CS Name: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
class CORDL_TYPE DynamicPropertyCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DynamicPropertyReg = System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DynamicPropertyCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: " const&", def_value: None }]
constexpr DynamicPropertyCollection(DynamicPropertyCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicPropertyCollection", modifiers: "&&", def_value: None }]
constexpr DynamicPropertyCollection(DynamicPropertyCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicPropertyCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DynamicPropertyCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicPropertyCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicPropertyCollection& operator=(DynamicPropertyCollection&& o) noexcept = default;
  constexpr DynamicPropertyCollection& operator=(DynamicPropertyCollection const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get__properties, put=__set__properties))  _properties;

constexpr void __set__properties(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__properties() const;


// Properties

 bool __declspec(property(get=get_HasProperties))  HasProperties;


// Methods

/// @brief Method get_HasProperties addr 0x2330570 size 0x30 virtual false final false
 bool get_HasProperties() ;

/// @brief Method RegisterDynamicProperty addr 0x23307fc size 0x2ec virtual false final false
 bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty prop) ;

/// @brief Method UnregisterDynamicProperty addr 0x2330b60 size 0x178 virtual false final false
 bool UnregisterDynamicProperty(::StringW name) ;

/// @brief Method NotifyMessage addr 0x2330e40 size 0x65c virtual false final false
 void NotifyMessage(bool start, System::Runtime::Remoting::Messaging::IMessage msg, bool client_site, bool async) ;

/// @brief Method FindProperty addr 0x2332b5c size 0x164 virtual false final false
 int32_t FindProperty(::StringW name) ;

// Ctor Parameters []
explicit DynamicPropertyCollection() ;

/// @brief Method .ctor addr 0x2330cd8 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::DynamicPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::DynamicPropertyCollection, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
NEED_NO_BOX(System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__DynamicPropertyCollection__DynamicPropertyReg, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection/DynamicPropertyReg");
