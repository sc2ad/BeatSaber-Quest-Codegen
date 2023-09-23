#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
// Type: UnityEngine.ResourceManagement.Util::IInitializableObject
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14256))
// CS Name: UnityEngine.ResourceManagement.Util.IInitializableObject
class CORDL_TYPE IInitializableObject : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInitializableObject() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInitializableObject(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Initialize(::StringW id, ::StringW data) ;

/// @brief Method InitializeAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(UnityEngine::ResourceManagement::ResourceManager rm, ::StringW id, ::StringW data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::IInitializableObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IInitializableObject, "UnityEngine.ResourceManagement.Util", "IInitializableObject");
