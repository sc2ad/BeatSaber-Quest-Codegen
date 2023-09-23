#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ResourceManagement::Util {
struct ObjectInitializationData;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IObjectInitializationDataProvider;
}
// Type: UnityEngine.ResourceManagement.Util::IObjectInitializationDataProvider
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14257))
// CS Name: UnityEngine.ResourceManagement.Util.IObjectInitializationDataProvider
class CORDL_TYPE IObjectInitializationDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IObjectInitializationDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IObjectInitializationDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method CreateObjectInitializationData addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::Util::ObjectInitializationData CreateObjectInitializationData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider, "UnityEngine.ResourceManagement.Util", "IObjectInitializationDataProvider");
