#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
class ICachable;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::ICachable
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14309))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.ICachable
class CORDL_TYPE ICachable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICachable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICachable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::ResourceManagement::Util::IOperationCacheKey __declspec(property(get=get_Key, put=set_Key))  Key;


// Methods

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ResourceManagement::Util::IOperationCacheKey get_Key() ;

/// @brief Method set_Key addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::AsyncOperations::ICachable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::ICachable, "UnityEngine.ResourceManagement.AsyncOperations", "ICachable");
