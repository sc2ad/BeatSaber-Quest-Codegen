#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
// Type: UnityEngine.ResourceManagement.Util::IOperationCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14250))
// CS Name: UnityEngine.ResourceManagement.Util.IOperationCacheKey
class CORDL_TYPE IOperationCacheKey : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>() const noexcept;

~IOperationCacheKey() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOperationCacheKey(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IOperationCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IOperationCacheKey, "UnityEngine.ResourceManagement.Util", "IOperationCacheKey");
