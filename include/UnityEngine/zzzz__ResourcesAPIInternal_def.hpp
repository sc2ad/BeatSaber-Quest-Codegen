#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
class Shader;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class ResourcesAPIInternal;
}
// Type: UnityEngine::ResourcesAPIInternal
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10204))
// CS Name: UnityEngine.ResourcesAPIInternal
class CORDL_TYPE ResourcesAPIInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ResourcesAPIInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: " const&", def_value: None }]
constexpr ResourcesAPIInternal(ResourcesAPIInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourcesAPIInternal", modifiers: "&&", def_value: None }]
constexpr ResourcesAPIInternal(ResourcesAPIInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourcesAPIInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourcesAPIInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourcesAPIInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourcesAPIInternal& operator=(ResourcesAPIInternal&& o) noexcept = default;
  constexpr ResourcesAPIInternal& operator=(ResourcesAPIInternal const& o) noexcept = default;
                


// Methods

/// @brief Method FindObjectsOfTypeAll addr 0x2b67a1c size 0x3c virtual false final false
static ::ArrayW<::UnityEngine::Object> FindObjectsOfTypeAll(::System::Type type) ;

/// @brief Method FindShaderByName addr 0x2b67a58 size 0x3c virtual false final false
static ::UnityEngine::Shader FindShaderByName(::StringW name) ;

/// @brief Method Load addr 0x2b67a94 size 0x44 virtual false final false
static ::UnityEngine::Object Load(::StringW path, ::System::Type systemTypeInstance) ;

/// @brief Method LoadAll addr 0x2b67ad8 size 0x44 virtual false final false
static ::ArrayW<::UnityEngine::Object> LoadAll(::StringW path, ::System::Type systemTypeInstance) ;

/// @brief Method LoadAsyncInternal addr 0x2b67b1c size 0x44 virtual false final false
static ::UnityEngine::ResourceRequest LoadAsyncInternal(::StringW path, ::System::Type type) ;

/// @brief Method UnloadAsset addr 0x2b67b60 size 0x3c virtual false final false
static void UnloadAsset(::UnityEngine::Object assetToUnload) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourcesAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourcesAPIInternal, "UnityEngine", "ResourcesAPIInternal");
