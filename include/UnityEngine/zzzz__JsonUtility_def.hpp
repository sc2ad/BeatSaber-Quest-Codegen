#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class JsonUtility;
}
// Type: UnityEngine::JsonUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15991))
// CS Name: UnityEngine.JsonUtility
class CORDL_TYPE JsonUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: " const&", def_value: None }]
constexpr JsonUtility(JsonUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "&&", def_value: None }]
constexpr JsonUtility(JsonUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonUtility& operator=(JsonUtility&& o) noexcept = default;
  constexpr JsonUtility& operator=(JsonUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ToJsonInternal addr 0x2b98064 size 0x44 virtual false final false
static ::StringW ToJsonInternal(::bs_hook::Il2CppWrapperType obj, bool prettyPrint) ;

/// @brief Method FromJsonInternal addr 0x2b980a8 size 0x54 virtual false final false
static ::bs_hook::Il2CppWrapperType FromJsonInternal(::StringW json, ::bs_hook::Il2CppWrapperType objectToOverwrite, System::Type type) ;

/// @brief Method ToJson addr 0x2b980fc size 0x8 virtual false final false
static ::StringW ToJson(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToJson addr 0x2b98104 size 0x174 virtual false final false
static ::StringW ToJson(::bs_hook::Il2CppWrapperType obj, bool prettyPrint) ;

/// @brief Method FromJson addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T FromJson(::StringW json) ;

/// @brief Method FromJson addr 0x2b98278 size 0x1d0 virtual false final false
static ::bs_hook::Il2CppWrapperType FromJson(::StringW json, System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::JsonUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::JsonUtility, "UnityEngine", "JsonUtility");
