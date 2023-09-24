#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
// Type: System.Runtime.Serialization::SerializationObjectManager
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3206))
// CS Name: System.Runtime.Serialization.SerializationObjectManager
class CORDL_TYPE SerializationObjectManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SerializationObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: " const&", def_value: None }]
constexpr SerializationObjectManager(SerializationObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationObjectManager", modifiers: "&&", def_value: None }]
constexpr SerializationObjectManager(SerializationObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationObjectManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationObjectManager& operator=(SerializationObjectManager&& o) noexcept = default;
  constexpr SerializationObjectManager& operator=(SerializationObjectManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__objectSeenTable, put=__set__objectSeenTable))  _objectSeenTable;

constexpr void __set__objectSeenTable(System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__objectSeenTable() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get__context() const;

 System::Runtime::Serialization::SerializationEventHandler __declspec(property(get=__get__onSerializedHandler, put=__set__onSerializedHandler))  _onSerializedHandler;

constexpr void __set__onSerializedHandler(System::Runtime::Serialization::SerializationEventHandler value) ;

constexpr System::Runtime::Serialization::SerializationEventHandler __get__onSerializedHandler() const;


// Methods

static System::Runtime::Serialization::SerializationObjectManager New_ctor(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2349714 size 0x94 virtual false final false
 void _ctor(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method RegisterObject addr 0x23497a8 size 0x110 virtual false final false
 void RegisterObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method RaiseOnSerializedEvent addr 0x2349948 size 0x20 virtual false final false
 void RaiseOnSerializedEvent() ;

/// @brief Method AddOnSerialized addr 0x23498b8 size 0x90 virtual false final false
 void AddOnSerialized(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationObjectManager);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationObjectManager, "System.Runtime.Serialization", "SerializationObjectManager");
