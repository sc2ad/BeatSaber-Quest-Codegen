#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
// Type: UnityEngine.ResourceManagement.ResourceLocations::ResourceLocationBase
namespace UnityEngine::ResourceManagement::ResourceLocations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14303))
// CS Name: UnityEngine.ResourceManagement.ResourceLocations.ResourceLocationBase
class CORDL_TYPE ResourceLocationBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
constexpr operator  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ResourceLocationBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationBase", modifiers: " const&", def_value: None }]
constexpr ResourceLocationBase(ResourceLocationBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationBase", modifiers: "&&", def_value: None }]
constexpr ResourceLocationBase(ResourceLocationBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceLocationBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceLocationBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceLocationBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceLocationBase& operator=(ResourceLocationBase&& o) noexcept = default;
  constexpr ResourceLocationBase& operator=(ResourceLocationBase const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 ::StringW __declspec(property(get=__get_m_Id, put=__set_m_Id))  m_Id;

constexpr void __set_m_Id(::StringW value) ;

constexpr ::StringW __get_m_Id() const;

 ::StringW __declspec(property(get=__get_m_ProviderId, put=__set_m_ProviderId))  m_ProviderId;

constexpr void __set_m_ProviderId(::StringW value) ;

constexpr ::StringW __get_m_ProviderId() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_Data, put=__set_m_Data))  m_Data;

constexpr void __set_m_Data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_Data() const;

 int32_t __declspec(property(get=__get_m_DependencyHashCode, put=__set_m_DependencyHashCode))  m_DependencyHashCode;

constexpr void __set_m_DependencyHashCode(int32_t value) ;

constexpr int32_t __get_m_DependencyHashCode() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;

 ::System::Type __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(::System::Type value) ;

constexpr ::System::Type __get_m_Type() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=__get_m_Dependencies, put=__set_m_Dependencies))  m_Dependencies;

constexpr void __set_m_Dependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __get_m_Dependencies() const;

 ::StringW __declspec(property(get=__get_m_PrimaryKey, put=__set_m_PrimaryKey))  m_PrimaryKey;

constexpr void __set_m_PrimaryKey(::StringW value) ;

constexpr ::StringW __get_m_PrimaryKey() const;


// Properties

 ::StringW __declspec(property(get=get_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> __declspec(property(get=get_Dependencies))  Dependencies;

 bool __declspec(property(get=get_HasDependencies))  HasDependencies;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data, put=set_Data))  Data;

 ::StringW __declspec(property(get=get_PrimaryKey, put=set_PrimaryKey))  PrimaryKey;

 int32_t __declspec(property(get=get_DependencyHashCode))  DependencyHashCode;

 ::System::Type __declspec(property(get=get_ResourceType))  ResourceType;


// Methods

/// @brief Method get_InternalId addr 0x2a43150 size 0x8 virtual true final true
 ::StringW get_InternalId() ;

/// @brief Method get_ProviderId addr 0x2a43158 size 0x8 virtual true final true
 ::StringW get_ProviderId() ;

/// @brief Method get_Dependencies addr 0x2a43160 size 0x8 virtual true final true
 ::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> get_Dependencies() ;

/// @brief Method get_HasDependencies addr 0x2a43168 size 0x54 virtual true final true
 bool get_HasDependencies() ;

/// @brief Method get_Data addr 0x2a431bc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method set_Data addr 0x2a431c4 size 0x8 virtual false final false
 void set_Data(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_PrimaryKey addr 0x2a431cc size 0x8 virtual true final true
 ::StringW get_PrimaryKey() ;

/// @brief Method set_PrimaryKey addr 0x2a431d4 size 0x8 virtual false final false
 void set_PrimaryKey(::StringW value) ;

/// @brief Method get_DependencyHashCode addr 0x2a431dc size 0x8 virtual true final true
 int32_t get_DependencyHashCode() ;

/// @brief Method get_ResourceType addr 0x2a431e4 size 0x8 virtual true final true
 ::System::Type get_ResourceType() ;

/// @brief Method Hash addr 0x2a431ec size 0x54 virtual true final true
 int32_t Hash(::System::Type t) ;

/// @brief Method ToString addr 0x2a43240 size 0x8 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "providerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "dependencies", ty: "::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>", modifiers: "", def_value: None }]
explicit ResourceLocationBase(::StringW name, ::StringW id, ::StringW providerId, ::System::Type t, ::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> dependencies) ;

/// @brief Method .ctor addr 0x2a43248 size 0x224 virtual false final false
 void _ctor(::StringW name, ::StringW id, ::StringW providerId, ::System::Type t, ::ArrayW<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> dependencies) ;

/// @brief Method ComputeDependencyHash addr 0x2a4346c size 0x258 virtual false final false
 void ComputeDependencyHash() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceLocations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase, "UnityEngine.ResourceManagement.ResourceLocations", "ResourceLocationBase");
