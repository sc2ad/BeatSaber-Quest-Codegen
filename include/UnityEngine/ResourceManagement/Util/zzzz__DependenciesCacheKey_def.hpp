#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DependenciesCacheKey;
}
// Type: UnityEngine.ResourceManagement.Util::DependenciesCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14252))
// CS Name: UnityEngine.ResourceManagement.Util.DependenciesCacheKey
class CORDL_TYPE DependenciesCacheKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ResourceManagement::Util::IOperationCacheKey
constexpr operator  ::UnityEngine::ResourceManagement::Util::IOperationCacheKey() const noexcept;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>
constexpr operator  ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::IOperationCacheKey>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DependenciesCacheKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: " const&", def_value: None }]
constexpr DependenciesCacheKey(DependenciesCacheKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DependenciesCacheKey", modifiers: "&&", def_value: None }]
constexpr DependenciesCacheKey(DependenciesCacheKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DependenciesCacheKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DependenciesCacheKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DependenciesCacheKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DependenciesCacheKey& operator=(DependenciesCacheKey&& o) noexcept = default;
  constexpr DependenciesCacheKey& operator=(DependenciesCacheKey const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=__get_m_Dependencies, put=__set_m_Dependencies))  m_Dependencies;

constexpr void __set_m_Dependencies(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> value) ;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __get_m_Dependencies() const;

 int32_t __declspec(property(get=__get_m_DependenciesHash, put=__set_m_DependenciesHash))  m_DependenciesHash;

constexpr void __set_m_DependenciesHash(int32_t value) ;

constexpr int32_t __get_m_DependenciesHash() const;


// Methods

// Ctor Parameters [CppParam { name: "dependencies", ty: "::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>", modifiers: "", def_value: None }, CppParam { name: "dependenciesHash", ty: "int32_t", modifiers: "", def_value: None }]
explicit DependenciesCacheKey(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> dependencies, int32_t dependenciesHash) ;

/// @brief Method .ctor addr 0x2a35894 size 0x30 virtual false final false
 void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> dependencies, int32_t dependenciesHash) ;

/// @brief Method GetHashCode addr 0x2a3a160 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a3a168 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a3a21c size 0x8c virtual true final true
 bool Equals(::UnityEngine::ResourceManagement::Util::IOperationCacheKey other) ;

/// @brief Method Equals addr 0x2a3a1f4 size 0x28 virtual false final false
 bool Equals(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DependenciesCacheKey, "UnityEngine.ResourceManagement.Util", "DependenciesCacheKey");
