#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ResourceLocationData;
}
// Type: UnityEngine.AddressableAssets.ResourceLocators::ResourceLocationData
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14395))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationData
class CORDL_TYPE ResourceLocationData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ResourceLocationData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: " const&", def_value: None }]
constexpr ResourceLocationData(ResourceLocationData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceLocationData", modifiers: "&&", def_value: None }]
constexpr ResourceLocationData(ResourceLocationData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceLocationData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceLocationData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceLocationData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceLocationData& operator=(ResourceLocationData&& o) noexcept = default;
  constexpr ResourceLocationData& operator=(ResourceLocationData const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_m_Keys, put=__set_m_Keys))  m_Keys;

constexpr void __set_m_Keys(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_Keys() const;

 ::StringW __declspec(property(get=__get_m_InternalId, put=__set_m_InternalId))  m_InternalId;

constexpr void __set_m_InternalId(::StringW value) ;

constexpr ::StringW __get_m_InternalId() const;

 ::StringW __declspec(property(get=__get_m_Provider, put=__set_m_Provider))  m_Provider;

constexpr void __set_m_Provider(::StringW value) ;

constexpr ::StringW __get_m_Provider() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_Dependencies, put=__set_m_Dependencies))  m_Dependencies;

constexpr void __set_m_Dependencies(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_Dependencies() const;

 ::UnityEngine::ResourceManagement::Util::SerializedType __declspec(property(get=__get_m_ResourceType, put=__set_m_ResourceType))  m_ResourceType;

constexpr void __set_m_ResourceType(::UnityEngine::ResourceManagement::Util::SerializedType value) ;

constexpr ::UnityEngine::ResourceManagement::Util::SerializedType __get_m_ResourceType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SerializedData, put=__set_SerializedData))  SerializedData;

constexpr void __set_SerializedData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SerializedData() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Data, put=__set__Data))  _Data;

constexpr void __set__Data(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Data() const;


// Properties

 ::ArrayW<::StringW> __declspec(property(get=get_Keys))  Keys;

 ::StringW __declspec(property(get=get_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_Provider))  Provider;

 ::ArrayW<::StringW> __declspec(property(get=get_Dependencies))  Dependencies;

 ::System::Type __declspec(property(get=get_ResourceType))  ResourceType;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

/// @brief Method get_Keys addr 0x289cfe8 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_Keys() ;

/// @brief Method get_InternalId addr 0x289cff0 size 0x8 virtual false final false
 ::StringW get_InternalId() ;

/// @brief Method get_Provider addr 0x289cff8 size 0x8 virtual false final false
 ::StringW get_Provider() ;

/// @brief Method get_Dependencies addr 0x289d000 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_Dependencies() ;

/// @brief Method get_ResourceType addr 0x289d008 size 0xc virtual false final false
 ::System::Type get_ResourceType() ;

/// @brief Method get_Data addr 0x289d014 size 0x40 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method set_Data addr 0x289d054 size 0xac virtual false final false
 void set_Data(::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "t", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "dependencies", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit ResourceLocationData(::ArrayW<::StringW> keys, ::StringW id, ::System::Type provider, ::System::Type t, ::ArrayW<::StringW> dependencies) ;

/// @brief Method .ctor addr 0x289d100 size 0x138 virtual false final false
 void _ctor(::ArrayW<::StringW> keys, ::StringW id, ::System::Type provider, ::System::Type t, ::ArrayW<::StringW> dependencies) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationData, "UnityEngine.AddressableAssets.ResourceLocators", "ResourceLocationData");
