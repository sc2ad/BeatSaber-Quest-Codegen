#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::AddressableAssets::Utility {
struct UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
struct UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType;
}
namespace UnityEngine::AddressableAssets::Utility {
class SerializationUtilities;
}
// Type: ::ObjectType
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14383))
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities::ObjectType
struct CORDL_TYPE UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType(int32_t value__) noexcept;


                    constexpr UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType(UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const&) = default;
                    constexpr UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType(UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType&&) = default;
                    constexpr UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType& operator=(UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType& operator=(UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType_Unwrapped : int32_t {
__AsciiString = 0,
__UnicodeString = 1,
__UInt16 = 2,
__UInt32 = 3,
__Int32 = 4,
__Hash128 = 5,
__Type = 6,
__JsonObject = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AsciiString offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const AsciiString;

/// @brief Field UnicodeString offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const UnicodeString;

/// @brief Field UInt16 offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const UInt16;

/// @brief Field UInt32 offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const UInt32;

/// @brief Field Int32 offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const Int32;

/// @brief Field Hash128 offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const Hash128;

/// @brief Field Type offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const Type;

/// @brief Field JsonObject offset 0
static UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType const JsonObject;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Utility
// Type: UnityEngine.AddressableAssets.Utility::SerializationUtilities
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14384))
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities
class CORDL_TYPE SerializationUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ObjectType = UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializationUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: " const&", def_value: None }]
constexpr SerializationUtilities(SerializationUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "&&", def_value: None }]
constexpr SerializationUtilities(SerializationUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationUtilities& operator=(SerializationUtilities&& o) noexcept = default;
  constexpr SerializationUtilities& operator=(SerializationUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ReadInt32FromByteArray addr 0x2897bec size 0x74 virtual false final false
static int32_t ReadInt32FromByteArray(::ArrayW<uint8_t> data, int32_t offset) ;

/// @brief Method WriteInt32ToByteArray addr 0x2897c60 size 0x84 virtual false final false
static int32_t WriteInt32ToByteArray(::ArrayW<uint8_t> data, int32_t val, int32_t offset) ;

/// @brief Method ReadObjectFromByteArray addr 0x2897ce4 size 0x5a0 virtual false final false
static ::bs_hook::Il2CppWrapperType ReadObjectFromByteArray(::ArrayW<uint8_t> keyData, int32_t dataIndex) ;

/// @brief Method WriteObjectToByteList addr 0x2898284 size 0xb60 virtual false final false
static int32_t WriteObjectToByteList(::bs_hook::Il2CppWrapperType obj, System::Collections::Generic::List_1<uint8_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::Utility
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::UnityEngine__AddressableAssets__Utility__SerializationUtilities__ObjectType, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities/ObjectType");
NEED_NO_BOX(UnityEngine::AddressableAssets::Utility::SerializationUtilities);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::Utility::SerializationUtilities, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
