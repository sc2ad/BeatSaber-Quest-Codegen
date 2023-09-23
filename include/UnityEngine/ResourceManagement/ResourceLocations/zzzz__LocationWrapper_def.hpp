#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class LocationWrapper;
}
// Type: UnityEngine.ResourceManagement.ResourceLocations::LocationWrapper
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14304))
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.LocationWrapper
class CORDL_TYPE LocationWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
constexpr operator  UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LocationWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationWrapper", modifiers: " const&", def_value: None }]
constexpr LocationWrapper(LocationWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationWrapper", modifiers: "&&", def_value: None }]
constexpr LocationWrapper(LocationWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocationWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocationWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocationWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocationWrapper& operator=(LocationWrapper&& o) noexcept = default;
  constexpr LocationWrapper& operator=(LocationWrapper const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_m_InternalLocation, put=__set_m_InternalLocation))  m_InternalLocation;

constexpr void __set_m_InternalLocation(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_m_InternalLocation() const;


// Properties

 ::StringW __declspec(property(get=get_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=get_Dependencies))  Dependencies;

 int32_t __declspec(property(get=get_DependencyHashCode))  DependencyHashCode;

 bool __declspec(property(get=get_HasDependencies))  HasDependencies;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data))  Data;

 ::StringW __declspec(property(get=get_PrimaryKey))  PrimaryKey;

 System::Type __declspec(property(get=get_ResourceType))  ResourceType;


// Methods

// Ctor Parameters [CppParam { name: "location", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }]
explicit LocationWrapper(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method .ctor addr 0x2a3bee4 size 0x28 virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method get_InternalId addr 0x2a436c4 size 0xa0 virtual true final true
 ::StringW get_InternalId() ;

/// @brief Method get_ProviderId addr 0x2a43764 size 0xa4 virtual true final true
 ::StringW get_ProviderId() ;

/// @brief Method get_Dependencies addr 0x2a43808 size 0xa4 virtual true final true
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> get_Dependencies() ;

/// @brief Method get_DependencyHashCode addr 0x2a438ac size 0xa4 virtual true final true
 int32_t get_DependencyHashCode() ;

/// @brief Method get_HasDependencies addr 0x2a43950 size 0xa4 virtual true final true
 bool get_HasDependencies() ;

/// @brief Method get_Data addr 0x2a439f4 size 0xa4 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method get_PrimaryKey addr 0x2a43a98 size 0xa4 virtual true final true
 ::StringW get_PrimaryKey() ;

/// @brief Method get_ResourceType addr 0x2a43b3c size 0xa4 virtual true final true
 System::Type get_ResourceType() ;

/// @brief Method Hash addr 0x2a43be0 size 0xac virtual true final true
 int32_t Hash(System::Type resultType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceLocations
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper, "UnityEngine.ResourceManagement.ResourceLocations", "LocationWrapper");
