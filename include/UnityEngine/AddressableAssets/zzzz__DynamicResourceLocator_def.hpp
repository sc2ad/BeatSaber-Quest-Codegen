#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class DynamicResourceLocator;
}
// Type: UnityEngine.AddressableAssets::DynamicResourceLocator
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14378))
// CS Name: UnityEngine.AddressableAssets.DynamicResourceLocator
class CORDL_TYPE DynamicResourceLocator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator
constexpr operator  UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DynamicResourceLocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicResourceLocator", modifiers: " const&", def_value: None }]
constexpr DynamicResourceLocator(DynamicResourceLocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicResourceLocator", modifiers: "&&", def_value: None }]
constexpr DynamicResourceLocator(DynamicResourceLocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicResourceLocator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DynamicResourceLocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicResourceLocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicResourceLocator& operator=(DynamicResourceLocator&& o) noexcept = default;
  constexpr DynamicResourceLocator& operator=(DynamicResourceLocator const& o) noexcept = default;
                


// Fields

 UnityEngine::AddressableAssets::AddressablesImpl __declspec(property(get=__get_m_Addressables, put=__set_m_Addressables))  m_Addressables;

constexpr void __set_m_Addressables(UnityEngine::AddressableAssets::AddressablesImpl value) ;

constexpr UnityEngine::AddressableAssets::AddressablesImpl __get_m_Addressables() const;

 ::StringW __declspec(property(get=__get_m_AtlasSpriteProviderId, put=__set_m_AtlasSpriteProviderId))  m_AtlasSpriteProviderId;

constexpr void __set_m_AtlasSpriteProviderId(::StringW value) ;

constexpr ::StringW __get_m_AtlasSpriteProviderId() const;


// Properties

 ::StringW __declspec(property(get=get_LocatorId))  LocatorId;

 System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Keys))  Keys;

 ::StringW __declspec(property(get=get_AtlasSpriteProviderId))  AtlasSpriteProviderId;


// Methods

/// @brief Method get_LocatorId addr 0x28958fc size 0x40 virtual true final true
 ::StringW get_LocatorId() ;

/// @brief Method get_Keys addr 0x289593c size 0x44 virtual true final false
 System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> get_Keys() ;

/// @brief Method get_AtlasSpriteProviderId addr 0x2895980 size 0x458 virtual false final false
 ::StringW get_AtlasSpriteProviderId() ;

// Ctor Parameters [CppParam { name: "addr", ty: "UnityEngine::AddressableAssets::AddressablesImpl", modifiers: "", def_value: None }]
explicit DynamicResourceLocator(UnityEngine::AddressableAssets::AddressablesImpl addr) ;

/// @brief Method .ctor addr 0x2895dd8 size 0x28 virtual false final false
 void _ctor(UnityEngine::AddressableAssets::AddressablesImpl addr) ;

/// @brief Method Locate addr 0x2895e00 size 0x54c virtual true final true
 bool Locate(::bs_hook::Il2CppWrapperType key, System::Type type, ByRef<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> locations) ;

/// @brief Method CreateDynamicLocations addr 0x289634c size 0x68c virtual false final false
 void CreateDynamicLocations(System::Type type, System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, ::StringW locName, ::StringW subKey, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation mainLoc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::DynamicResourceLocator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::DynamicResourceLocator, "UnityEngine.AddressableAssets", "DynamicResourceLocator");
