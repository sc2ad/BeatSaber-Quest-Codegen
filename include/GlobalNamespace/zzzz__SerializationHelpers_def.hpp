#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class SerializationHelpers;
}
// Type: ::SerializationHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13828))
// CS Name: SerializationHelpers
class CORDL_TYPE SerializationHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializationHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: " const&", def_value: None }]
constexpr SerializationHelpers(SerializationHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "&&", def_value: None }]
constexpr SerializationHelpers(SerializationHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializationHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerializationHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializationHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializationHelpers& operator=(SerializationHelpers&& o) noexcept = default;
  constexpr SerializationHelpers& operator=(SerializationHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeData(::ArrayW<uint8_t> data) ;

/// @brief Method SerializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<uint8_t> SerializeObject(T serializableObject) ;

/// @brief Method DeserializeDataFromPlayerPrefs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeDataFromPlayerPrefs(::StringW key) ;

/// @brief Method SerializeObjectIntoPlayerPrefs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SerializeObjectIntoPlayerPrefs(::StringW key, T serializableObject) ;

/// @brief Method DeserializeDataFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeDataFromFile(::StringW filePath) ;

/// @brief Method SerializeObjectToFile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void SerializeObjectToFile(::StringW filePath, T serializableObject) ;

static GlobalNamespace::SerializationHelpers New_ctor() ;

/// @brief Method .ctor addr 0x1f7ac68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SerializationHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SerializationHelpers, "", "SerializationHelpers");
