#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Resources;
}
// Type: UnityEngine::Resources
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10206))
// CS Name: UnityEngine.Resources
class CORDL_TYPE Resources : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Resources() = default;

// Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: " const&", def_value: None }]
constexpr Resources(Resources const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Resources", modifiers: "&&", def_value: None }]
constexpr Resources(Resources&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Resources(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Resources& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Resources& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Resources& operator=(Resources&& o) noexcept = default;
  constexpr Resources& operator=(Resources const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertObjects addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> ConvertObjects(::ArrayW<UnityEngine::Object> rawObjects) ;

/// @brief Method FindObjectsOfTypeAll addr 0x2b67e98 size 0x68 virtual false final false
static ::ArrayW<UnityEngine::Object> FindObjectsOfTypeAll(System::Type type) ;

/// @brief Method FindObjectsOfTypeAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> FindObjectsOfTypeAll() ;

/// @brief Method Load addr 0x2b67f00 size 0x84 virtual false final false
static UnityEngine::Object Load(::StringW path) ;

/// @brief Method Load addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Load(::StringW path) ;

/// @brief Method Load addr 0x2b67990 size 0x78 virtual false final false
static UnityEngine::Object Load(::StringW path, System::Type systemTypeInstance) ;

/// @brief Method LoadAsync addr 0x2b67f84 size 0x78 virtual false final false
static UnityEngine::ResourceRequest LoadAsync(::StringW path, System::Type type) ;

/// @brief Method LoadAll addr 0x2b67ffc size 0x78 virtual false final false
static ::ArrayW<UnityEngine::Object> LoadAll(::StringW path, System::Type systemTypeInstance) ;

/// @brief Method LoadAll addr 0x2b68074 size 0x84 virtual false final false
static ::ArrayW<UnityEngine::Object> LoadAll(::StringW path) ;

/// @brief Method GetBuiltinResource addr 0x2b680f8 size 0x44 virtual false final false
static UnityEngine::Object GetBuiltinResource(System::Type type, ::StringW path) ;

/// @brief Method GetBuiltinResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetBuiltinResource(::StringW path) ;

/// @brief Method UnloadAsset addr 0x2b6813c size 0x68 virtual false final false
static void UnloadAsset(UnityEngine::Object assetToUnload) ;

/// @brief Method UnloadUnusedAssets addr 0x2b681a4 size 0x28 virtual false final false
static UnityEngine::AsyncOperation UnloadUnusedAssets() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Resources);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Resources, "UnityEngine", "Resources");
