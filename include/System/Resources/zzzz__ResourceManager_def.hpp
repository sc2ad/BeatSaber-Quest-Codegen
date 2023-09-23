#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
namespace System::Resources {
class ResourceSet;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Resources {
class ResourceManager;
}
namespace System::Resources {
class System__Resources__ResourceManager__CultureNameResourceSetPair;
}
namespace System::Resources {
class System__Resources__ResourceManager__ResourceManagerMediator;
}
// Type: ::CultureNameResourceSetPair
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3428))
// CS Name: System.Resources.ResourceManager::CultureNameResourceSetPair
class CORDL_TYPE System__Resources__ResourceManager__CultureNameResourceSetPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Resources__ResourceManager__CultureNameResourceSetPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceManager__CultureNameResourceSetPair", modifiers: " const&", def_value: None }]
constexpr System__Resources__ResourceManager__CultureNameResourceSetPair(System__Resources__ResourceManager__CultureNameResourceSetPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceManager__CultureNameResourceSetPair", modifiers: "&&", def_value: None }]
constexpr System__Resources__ResourceManager__CultureNameResourceSetPair(System__Resources__ResourceManager__CultureNameResourceSetPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Resources__ResourceManager__CultureNameResourceSetPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Resources__ResourceManager__CultureNameResourceSetPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Resources__ResourceManager__CultureNameResourceSetPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Resources__ResourceManager__CultureNameResourceSetPair& operator=(System__Resources__ResourceManager__CultureNameResourceSetPair&& o) noexcept = default;
  constexpr System__Resources__ResourceManager__CultureNameResourceSetPair& operator=(System__Resources__ResourceManager__CultureNameResourceSetPair const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit System__Resources__ResourceManager__CultureNameResourceSetPair() ;

/// @brief Method .ctor addr 0x2373910 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
// Type: ::ResourceManagerMediator
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3429))
// CS Name: System.Resources.ResourceManager::ResourceManagerMediator
class CORDL_TYPE System__Resources__ResourceManager__ResourceManagerMediator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Resources__ResourceManager__ResourceManagerMediator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceManager__ResourceManagerMediator", modifiers: " const&", def_value: None }]
constexpr System__Resources__ResourceManager__ResourceManagerMediator(System__Resources__ResourceManager__ResourceManagerMediator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Resources__ResourceManager__ResourceManagerMediator", modifiers: "&&", def_value: None }]
constexpr System__Resources__ResourceManager__ResourceManagerMediator(System__Resources__ResourceManager__ResourceManagerMediator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Resources__ResourceManager__ResourceManagerMediator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Resources__ResourceManager__ResourceManagerMediator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Resources__ResourceManager__ResourceManagerMediator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Resources__ResourceManager__ResourceManagerMediator& operator=(System__Resources__ResourceManager__ResourceManagerMediator&& o) noexcept = default;
  constexpr System__Resources__ResourceManager__ResourceManagerMediator& operator=(System__Resources__ResourceManager__ResourceManagerMediator const& o) noexcept = default;
                


// Fields

 System::Resources::ResourceManager __declspec(property(get=__get__rm, put=__set__rm))  _rm;

constexpr void __set__rm(System::Resources::ResourceManager value) ;

constexpr System::Resources::ResourceManager __get__rm() const;


// Methods

// Ctor Parameters [CppParam { name: "rm", ty: "System::Resources::ResourceManager", modifiers: "", def_value: None }]
explicit System__Resources__ResourceManager__ResourceManagerMediator(System::Resources::ResourceManager rm) ;

/// @brief Method .ctor addr 0x2373918 size 0x78 virtual false final false
 void _ctor(System::Resources::ResourceManager rm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
// Type: System.Resources::ResourceManager
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3430))
// CS Name: System.Resources.ResourceManager
class CORDL_TYPE ResourceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ResourceManagerMediator = System::Resources::System__Resources__ResourceManager__ResourceManagerMediator;

using CultureNameResourceSetPair = System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ResourceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: " const&", def_value: None }]
constexpr ResourceManager(ResourceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceManager", modifiers: "&&", def_value: None }]
constexpr ResourceManager(ResourceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceManager& operator=(ResourceManager&& o) noexcept = default;
  constexpr ResourceManager& operator=(ResourceManager const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_ResourceSets, put=__set_ResourceSets))  ResourceSets;

constexpr void __set_ResourceSets(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_ResourceSets() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet> __declspec(property(get=__get__resourceSets, put=__set__resourceSets))  _resourceSets;

constexpr void __set__resourceSets(System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Resources::ResourceSet> __get__resourceSets() const;

 System::Reflection::Assembly __declspec(property(get=__get_MainAssembly, put=__set_MainAssembly))  MainAssembly;

constexpr void __set_MainAssembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get_MainAssembly() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__neutralResourcesCulture, put=__set__neutralResourcesCulture))  _neutralResourcesCulture;

constexpr void __set__neutralResourcesCulture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__neutralResourcesCulture() const;

 System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair __declspec(property(get=__get__lastUsedResourceCache, put=__set__lastUsedResourceCache))  _lastUsedResourceCache;

constexpr void __set__lastUsedResourceCache(System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair value) ;

constexpr System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair __get__lastUsedResourceCache() const;

 bool __declspec(property(get=__get_UseManifest, put=__set_UseManifest))  UseManifest;

constexpr void __set_UseManifest(bool value) ;

constexpr bool __get_UseManifest() const;

 bool __declspec(property(get=__get_UseSatelliteAssem, put=__set_UseSatelliteAssem))  UseSatelliteAssem;

constexpr void __set_UseSatelliteAssem(bool value) ;

constexpr bool __get_UseSatelliteAssem() const;

 System::Resources::UltimateResourceFallbackLocation __declspec(property(get=__get__fallbackLoc, put=__set__fallbackLoc))  _fallbackLoc;

constexpr void __set__fallbackLoc(System::Resources::UltimateResourceFallbackLocation value) ;

constexpr System::Resources::UltimateResourceFallbackLocation __get__fallbackLoc() const;

 System::Reflection::Assembly __declspec(property(get=__get__callingAssembly, put=__set__callingAssembly))  _callingAssembly;

constexpr void __set__callingAssembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get__callingAssembly() const;

 System::Reflection::RuntimeAssembly __declspec(property(get=__get_m_callingAssembly, put=__set_m_callingAssembly))  m_callingAssembly;

constexpr void __set_m_callingAssembly(System::Reflection::RuntimeAssembly value) ;

constexpr System::Reflection::RuntimeAssembly __get_m_callingAssembly() const;

 System::Resources::IResourceGroveler __declspec(property(get=__get_resourceGroveler, put=__set_resourceGroveler))  resourceGroveler;

constexpr void __set_resourceGroveler(System::Resources::IResourceGroveler value) ;

constexpr System::Resources::IResourceGroveler __get_resourceGroveler() const;

static int32_t __declspec(property(get=__get_MagicNumber, put=__set_MagicNumber))  MagicNumber;

static void __set_MagicNumber(int32_t value) ;

static int32_t __get_MagicNumber() ;

static int32_t __declspec(property(get=__get_HeaderVersionNumber, put=__set_HeaderVersionNumber))  HeaderVersionNumber;

static void __set_HeaderVersionNumber(int32_t value) ;

static int32_t __get_HeaderVersionNumber() ;

static System::Type __declspec(property(get=__get__minResourceSet, put=__set__minResourceSet))  _minResourceSet;

static void __set__minResourceSet(System::Type value) ;

static System::Type __get__minResourceSet() ;

static ::StringW __declspec(property(get=__get_ResReaderTypeName, put=__set_ResReaderTypeName))  ResReaderTypeName;

static void __set_ResReaderTypeName(::StringW value) ;

static ::StringW __get_ResReaderTypeName() ;

static ::StringW __declspec(property(get=__get_ResSetTypeName, put=__set_ResSetTypeName))  ResSetTypeName;

static void __set_ResSetTypeName(::StringW value) ;

static ::StringW __get_ResSetTypeName() ;

static ::StringW __declspec(property(get=__get_MscorlibName, put=__set_MscorlibName))  MscorlibName;

static void __set_MscorlibName(::StringW value) ;

static ::StringW __get_MscorlibName() ;

static int32_t __declspec(property(get=__get_DEBUG, put=__set_DEBUG))  DEBUG;

static void __set_DEBUG(int32_t value) ;

static int32_t __get_DEBUG() ;


// Methods

/// @brief Method Init addr 0x2373720 size 0x118 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit ResourceManager() ;

/// @brief Method .ctor addr 0x237383c size 0xd4 virtual false final false
 void _ctor() ;

/// @brief Method OnDeserializing addr 0x2373990 size 0x10 virtual false final false
 void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserialized addr 0x23739a0 size 0x1cc virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnSerializing addr 0x2373b6c size 0x70 virtual false final false
 void OnSerializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method CompareNames addr 0x2373bdc size 0x254 virtual false final false
static bool CompareNames(::StringW asmTypeName1, ::StringW typeName2, System::Reflection::AssemblyName asmName2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager, "System.Resources", "ResourceManager");
NEED_NO_BOX(System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::System__Resources__ResourceManager__CultureNameResourceSetPair, "System.Resources", "ResourceManager/CultureNameResourceSetPair");
NEED_NO_BOX(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator, "System.Resources", "ResourceManager/ResourceManagerMediator");
