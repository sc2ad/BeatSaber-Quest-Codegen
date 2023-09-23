#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationInfoEnumerator;
}
// Type: System.Runtime.Serialization::SerializationInfoEnumerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3195))
// CS Name: System.Runtime.Serialization.SerializationInfoEnumerator
class CORDL_TYPE SerializationInfoEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SerializationInfoEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: " const&", def_value: None }]
constexpr SerializationInfoEnumerator(SerializationInfoEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: "&&", def_value: None }]
constexpr SerializationInfoEnumerator(SerializationInfoEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationInfoEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationInfoEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationInfoEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationInfoEnumerator& operator=(SerializationInfoEnumerator&& o) noexcept = default;
  constexpr SerializationInfoEnumerator& operator=(SerializationInfoEnumerator const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get__members, put=__set__members))  _members;

constexpr void __set__members(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__members() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__data() const;

 ::ArrayW<System::Type> __declspec(property(get=__get__types, put=__set__types))  _types;

constexpr void __set__types(::ArrayW<System::Type> value) ;

constexpr ::ArrayW<System::Type> __get__types() const;

 int32_t __declspec(property(get=__get__numItems, put=__set__numItems))  _numItems;

constexpr void __set__numItems(int32_t value) ;

constexpr int32_t __get__numItems() const;

 int32_t __declspec(property(get=__get__currItem, put=__set__currItem))  _currItem;

constexpr void __set__currItem(int32_t value) ;

constexpr int32_t __get__currItem() const;

 bool __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(bool value) ;

constexpr bool __get__current() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;

 System::Runtime::Serialization::SerializationEntry __declspec(property(get=get_Current))  Current;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value))  Value;

 System::Type __declspec(property(get=get_ObjectType))  ObjectType;


// Methods

// Ctor Parameters [CppParam { name: "members", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "info", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "types", ty: "::ArrayW<System::Type>", modifiers: "", def_value: None }, CppParam { name: "numItems", ty: "int32_t", modifiers: "", def_value: None }]
explicit SerializationInfoEnumerator(::ArrayW<::StringW> members, ::ArrayW<::bs_hook::Il2CppWrapperType> info, ::ArrayW<System::Type> types, int32_t numItems) ;

/// @brief Method .ctor addr 0x23482e0 size 0x50 virtual false final false
 void _ctor(::ArrayW<::StringW> members, ::ArrayW<::bs_hook::Il2CppWrapperType> info, ::ArrayW<System::Type> types, int32_t numItems) ;

/// @brief Method MoveNext addr 0x2348330 size 0x2c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x234835c size 0x70 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current addr 0x23483cc size 0xc8 virtual false final false
 System::Runtime::Serialization::SerializationEntry get_Current() ;

/// @brief Method Reset addr 0x2348494 size 0x10 virtual true final true
 void Reset() ;

/// @brief Method get_Name addr 0x23484a4 size 0x88 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x234852c size 0x88 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method get_ObjectType addr 0x23485b4 size 0x88 virtual false final false
 System::Type get_ObjectType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::SerializationInfoEnumerator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationInfoEnumerator, "System.Runtime.Serialization", "SerializationInfoEnumerator");
