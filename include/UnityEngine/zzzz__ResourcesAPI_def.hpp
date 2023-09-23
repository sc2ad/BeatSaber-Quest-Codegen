#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPI;
}
// Type: UnityEngine::ResourcesAPI
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10205))
// CS Name: UnityEngine.ResourcesAPI
class CORDL_TYPE ResourcesAPI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ResourcesAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: " const&", def_value: None }]
constexpr ResourcesAPI(ResourcesAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPI", modifiers: "&&", def_value: None }]
constexpr ResourcesAPI(ResourcesAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourcesAPI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourcesAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourcesAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourcesAPI& operator=(ResourcesAPI&& o) noexcept = default;
  constexpr ResourcesAPI& operator=(ResourcesAPI const& o) noexcept = default;
                


// Fields

static UnityEngine::ResourcesAPI __declspec(property(get=__get_s_DefaultAPI, put=__set_s_DefaultAPI))  s_DefaultAPI;

static void __set_s_DefaultAPI(UnityEngine::ResourcesAPI value) ;

static UnityEngine::ResourcesAPI __get_s_DefaultAPI() ;

static UnityEngine::ResourcesAPI __declspec(property(get=__get__overrideAPI_k__BackingField, put=__set__overrideAPI_k__BackingField))  _overrideAPI_k__BackingField;

static void __set__overrideAPI_k__BackingField(UnityEngine::ResourcesAPI value) ;

static UnityEngine::ResourcesAPI __get__overrideAPI_k__BackingField() ;


// Properties

static UnityEngine::ResourcesAPI __declspec(property(get=get_ActiveAPI))  ActiveAPI;

static UnityEngine::ResourcesAPI __declspec(property(get=get_overrideAPI))  overrideAPI;


// Methods

/// @brief Method get_ActiveAPI addr 0x2b67b9c size 0xa8 virtual false final false
static UnityEngine::ResourcesAPI get_ActiveAPI() ;

/// @brief Method get_overrideAPI addr 0x2b67c44 size 0x58 virtual false final false
static UnityEngine::ResourcesAPI get_overrideAPI() ;

// Ctor Parameters []
explicit ResourcesAPI() ;

/// @brief Method .ctor addr 0x2b67c9c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method FindObjectsOfTypeAll addr 0x2b67ca4 size 0x3c virtual true final false
 ::ArrayW<UnityEngine::Object> FindObjectsOfTypeAll(System::Type systemTypeInstance) ;

/// @brief Method FindShaderByName addr 0x2b67ce0 size 0x3c virtual true final false
 UnityEngine::Shader FindShaderByName(::StringW name) ;

/// @brief Method Load addr 0x2b67d1c size 0x44 virtual true final false
 UnityEngine::Object Load(::StringW path, System::Type systemTypeInstance) ;

/// @brief Method LoadAll addr 0x2b67d60 size 0x44 virtual true final false
 ::ArrayW<UnityEngine::Object> LoadAll(::StringW path, System::Type systemTypeInstance) ;

/// @brief Method LoadAsync addr 0x2b67da4 size 0x54 virtual true final false
 UnityEngine::ResourceRequest LoadAsync(::StringW path, System::Type systemTypeInstance) ;

/// @brief Method UnloadAsset addr 0x2b67df8 size 0x3c virtual true final false
 void UnloadAsset(UnityEngine::Object assetToUnload) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ResourcesAPI);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourcesAPI, "UnityEngine", "ResourcesAPI");
