#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
// Forward declare root types
namespace System::Reflection {
class StrongNameKeyPair;
}
// Type: System.Reflection::StrongNameKeyPair
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3525))
// CS Name: System.Reflection.StrongNameKeyPair
class CORDL_TYPE StrongNameKeyPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StrongNameKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "StrongNameKeyPair", modifiers: " const&", def_value: None }]
constexpr StrongNameKeyPair(StrongNameKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StrongNameKeyPair", modifiers: "&&", def_value: None }]
constexpr StrongNameKeyPair(StrongNameKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StrongNameKeyPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StrongNameKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StrongNameKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StrongNameKeyPair& operator=(StrongNameKeyPair&& o) noexcept = default;
  constexpr StrongNameKeyPair& operator=(StrongNameKeyPair const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__publicKey, put=__set__publicKey))  _publicKey;

constexpr void __set__publicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__publicKey() const;

 ::StringW __declspec(property(get=__get__keyPairContainer, put=__set__keyPairContainer))  _keyPairContainer;

constexpr void __set__keyPairContainer(::StringW value) ;

constexpr ::StringW __get__keyPairContainer() const;

 bool __declspec(property(get=__get__keyPairExported, put=__set__keyPairExported))  _keyPairExported;

constexpr void __set__keyPairExported(bool value) ;

constexpr bool __get__keyPairExported() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__keyPairArray, put=__set__keyPairArray))  _keyPairArray;

constexpr void __set__keyPairArray(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__keyPairArray() const;


// Methods

static System::Reflection::StrongNameKeyPair New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x238c2c8 size 0x1ec virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x238c4b4 size 0x148 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x238c5fc size 0x4 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::StrongNameKeyPair);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::StrongNameKeyPair, "System.Reflection", "StrongNameKeyPair");
