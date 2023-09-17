#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Type: UnityEngine.ResourceManagement.ResourceLocations::IResourceLocation
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14302))
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
class CORDL_TYPE IResourceLocation : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IResourceLocation() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResourceLocation(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=get_Dependencies))  Dependencies;

 int32_t __declspec(property(get=get_DependencyHashCode))  DependencyHashCode;

 bool __declspec(property(get=get_HasDependencies))  HasDependencies;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data))  Data;

 ::StringW __declspec(property(get=get_PrimaryKey))  PrimaryKey;

 ::System::Type __declspec(property(get=get_ResourceType))  ResourceType;


// Methods

/// @brief Method get_InternalId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_InternalId() ;

/// @brief Method get_ProviderId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_ProviderId() ;

/// @brief Method get_Dependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> get_Dependencies() ;

/// @brief Method Hash addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Hash(::System::Type resultType) ;

/// @brief Method get_DependencyHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_DependencyHashCode() ;

/// @brief Method get_HasDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasDependencies() ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method get_PrimaryKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_PrimaryKey() ;

/// @brief Method get_ResourceType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_ResourceType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceLocations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, "UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation");
