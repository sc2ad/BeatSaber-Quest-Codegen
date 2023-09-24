#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogDataEntry;
}
// Type: UnityEngine.AddressableAssets.ResourceLocators::ContentCatalogDataEntry
namespace UnityEngine::AddressableAssets::ResourceLocators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14389))
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry
class CORDL_TYPE ContentCatalogDataEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ContentCatalogDataEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: " const&", def_value: None }]
constexpr ContentCatalogDataEntry(ContentCatalogDataEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogDataEntry", modifiers: "&&", def_value: None }]
constexpr ContentCatalogDataEntry(ContentCatalogDataEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentCatalogDataEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentCatalogDataEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentCatalogDataEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentCatalogDataEntry& operator=(ContentCatalogDataEntry&& o) noexcept = default;
  constexpr ContentCatalogDataEntry& operator=(ContentCatalogDataEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__InternalId_k__BackingField, put=__set__InternalId_k__BackingField))  _InternalId_k__BackingField;

constexpr void __set__InternalId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__InternalId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Provider_k__BackingField, put=__set__Provider_k__BackingField))  _Provider_k__BackingField;

constexpr void __set__Provider_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Provider_k__BackingField() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__Keys_k__BackingField, put=__set__Keys_k__BackingField))  _Keys_k__BackingField;

constexpr void __set__Keys_k__BackingField(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get__Keys_k__BackingField() const;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__Dependencies_k__BackingField, put=__set__Dependencies_k__BackingField))  _Dependencies_k__BackingField;

constexpr void __set__Dependencies_k__BackingField(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __get__Dependencies_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField))  _Data_k__BackingField;

constexpr void __set__Data_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Data_k__BackingField() const;

 System::Type __declspec(property(get=__get__ResourceType_k__BackingField, put=__set__ResourceType_k__BackingField))  _ResourceType_k__BackingField;

constexpr void __set__ResourceType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ResourceType_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_InternalId, put=set_InternalId))  InternalId;

 ::StringW __declspec(property(get=get_Provider, put=set_Provider))  Provider;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Keys, put=set_Keys))  Keys;

 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Dependencies, put=set_Dependencies))  Dependencies;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Data, put=set_Data))  Data;

 System::Type __declspec(property(get=get_ResourceType, put=set_ResourceType))  ResourceType;


// Methods

/// @brief Method get_InternalId addr 0x289b670 size 0x8 virtual false final false
 ::StringW get_InternalId() ;

/// @brief Method set_InternalId addr 0x289b678 size 0x8 virtual false final false
 void set_InternalId(::StringW value) ;

/// @brief Method get_Provider addr 0x289b680 size 0x8 virtual false final false
 ::StringW get_Provider() ;

/// @brief Method set_Provider addr 0x289b688 size 0x8 virtual false final false
 void set_Provider(::StringW value) ;

/// @brief Method get_Keys addr 0x289b690 size 0x8 virtual false final false
 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> get_Keys() ;

/// @brief Method set_Keys addr 0x289b698 size 0x8 virtual false final false
 void set_Keys(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_Dependencies addr 0x289b6a0 size 0x8 virtual false final false
 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> get_Dependencies() ;

/// @brief Method set_Dependencies addr 0x289b6a8 size 0x8 virtual false final false
 void set_Dependencies(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_Data addr 0x289b6b0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Data() ;

/// @brief Method set_Data addr 0x289b6b8 size 0x8 virtual false final false
 void set_Data(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_ResourceType addr 0x289b6c0 size 0x8 virtual false final false
 System::Type get_ResourceType() ;

/// @brief Method set_ResourceType addr 0x289b6c8 size 0x8 virtual false final false
 void set_ResourceType(System::Type value) ;

static UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry New_ctor(System::Type type, ::StringW internalId, ::StringW provider, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> keys, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> dependencies, ::bs_hook::Il2CppWrapperType extraData) ;

/// @brief Method .ctor addr 0x289b6d0 size 0x108 virtual false final false
 void _ctor(System::Type type, ::StringW internalId, ::StringW provider, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> keys, System::Collections::Generic::IEnumerable_1<::bs_hook::Il2CppWrapperType> dependencies, ::bs_hook::Il2CppWrapperType extraData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceLocators
NEED_NO_BOX(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogDataEntry");
