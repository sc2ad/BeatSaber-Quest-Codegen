#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LocationCacheKey;
}
// Type: UnityEngine.ResourceManagement.Util::LocationCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14251))
// CS Name: UnityEngine.ResourceManagement.Util.LocationCacheKey
class CORDL_TYPE LocationCacheKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IOperationCacheKey
constexpr operator  UnityEngine::ResourceManagement::Util::IOperationCacheKey() const noexcept;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::Util::IOperationCacheKey>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::Util::IOperationCacheKey>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocationCacheKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: " const&", def_value: None }]
constexpr LocationCacheKey(LocationCacheKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocationCacheKey", modifiers: "&&", def_value: None }]
constexpr LocationCacheKey(LocationCacheKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocationCacheKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocationCacheKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocationCacheKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocationCacheKey& operator=(LocationCacheKey&& o) noexcept = default;
  constexpr LocationCacheKey& operator=(LocationCacheKey const& o) noexcept = default;
                


// Fields

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=__get_m_Location, put=__set_m_Location))  m_Location;

constexpr void __set_m_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value) ;

constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __get_m_Location() const;

 System::Type __declspec(property(get=__get_m_DesiredType, put=__set_m_DesiredType))  m_DesiredType;

constexpr void __set_m_DesiredType(System::Type value) ;

constexpr System::Type __get_m_DesiredType() const;


// Methods

// Ctor Parameters [CppParam { name: "location", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: None }, CppParam { name: "desiredType", ty: "System::Type", modifiers: "", def_value: None }]
explicit LocationCacheKey(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Type desiredType) ;

/// @brief Method .ctor addr 0x2a34284 size 0xf8 virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Type desiredType) ;

/// @brief Method GetHashCode addr 0x2a39c9c size 0xac virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a39d48 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a39e08 size 0x64 virtual true final true
 bool Equals(UnityEngine::ResourceManagement::Util::IOperationCacheKey other) ;

/// @brief Method Equals addr 0x2a39dac size 0x5c virtual false final false
 bool Equals(UnityEngine::ResourceManagement::Util::LocationCacheKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::LocationCacheKey);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::LocationCacheKey, "UnityEngine.ResourceManagement.Util", "LocationCacheKey");
