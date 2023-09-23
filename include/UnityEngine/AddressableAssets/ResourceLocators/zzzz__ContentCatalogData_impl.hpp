#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__SerializedType_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ResourceLocationMap_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "dataOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "entries", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket(int32_t dataOffset, ::ArrayW<int32_t> entries) noexcept : ::bs_hook::ValueTypeWrapper() {this->dataOffset = dataOffset;
this->entries = entries;
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket::__set_dataOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket::__get_dataOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket::__set_entries(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x8>(this->__instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__Bucket::__get_entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_InternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_InternalId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289c360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_InternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289c368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_Dependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_Dependencies)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x289c370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_Dependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_HasDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_HasDependencies)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x289cc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_HasDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_DependencyHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_DependencyHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289cca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_DependencyHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289cca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_PrimaryKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289ccb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.set_PrimaryKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::set_PrimaryKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289ccb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "set_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.get_ResourceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_ResourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289ccc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_ResourceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289ccc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation.Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)(System::Type)>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::Hash)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x289ccd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::*)(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, ::StringW, ::StringW, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, int32_t, ::StringW, System::Type)>(&UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x289c148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation
constexpr  UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::operator UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation() const noexcept {
return UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_Locator(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap value)  {
::cordl_internals::setInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap>(value));
}
constexpr UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_Locator() const {
return ::cordl_internals::getInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_InternalId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_InternalId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_ProviderId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_ProviderId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_Dependency(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_Dependency() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_Data(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_Data() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_HashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_HashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_DependencyHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_DependencyHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_PrimaryKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_PrimaryKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__set_m_Type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::__get_m_Type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_InternalId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_InternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_Dependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_Dependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_HasDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_HasDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_DependencyHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_DependencyHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_PrimaryKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::set_PrimaryKey(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "set_PrimaryKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Type UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::get_ResourceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "get_ResourceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::Hash(System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "locator", ty: "UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap", modifiers: "", def_value: None }, CppParam { name: "internalId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "providerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dependencyKey", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "depHash", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "primaryKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
 UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locator, ::StringW internalId, ::StringW providerId, ::bs_hook::Il2CppWrapperType dependencyKey, ::bs_hook::Il2CppWrapperType data, int32_t depHash, ::StringW primaryKey, System::Type type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>(locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type))) {}
 void UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation::_ctor(UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap locator, ::StringW internalId, ::StringW providerId, ::bs_hook::Il2CppWrapperType dependencyKey, ::bs_hook::Il2CppWrapperType data, int32_t depHash, ::StringW primaryKey, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::UnityEngine__AddressableAssets__ResourceLocators__ContentCatalogData__CompactLocation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, locator, internalId, providerId, dependencyKey, data, depHash, primaryKey, type);
}
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ProviderId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InstanceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x289b7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_InstanceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x289b800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_SceneProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x289b818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_SceneProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x289b830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ResourceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.set_ResourceProviderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_ProviderIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ProviderIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.get_InternalIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289b860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_InternalIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CleanData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x289a09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CleanData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateCustomLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2894cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CreateCustomLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.CreateLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x289b868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CreateLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData.ExpandInternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x289c088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "ExpandInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x289c2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_localHash(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_localHash() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_location() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_LocatorId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_LocatorId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InstanceProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::Util::ObjectInitializationData>(value));
}
constexpr UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InstanceProviderData() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_SceneProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::Util::ObjectInitializationData>(value));
}
constexpr UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_SceneProviderData() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::ObjectInitializationData, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ResourceProviderData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ResourceProviderData() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ProviderIds(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ProviderIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InternalIds(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_KeyDataString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_KeyDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_BucketDataString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_BucketDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_EntryDataString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_EntryDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_ExtraDataString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_ExtraDataString() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_resourceTypes(::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType>>(value));
}
constexpr ::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_resourceTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::ResourceManagement::Util::SerializedType>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__set_m_InternalIdPrefixes(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::__get_m_InternalIdPrefixes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_ProviderId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_InstanceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData(UnityEngine::ResourceManagement::Util::ObjectInitializationData value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_SceneProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::ObjectInitializationData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "set_ResourceProviderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Util::ObjectInitializationData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_ProviderIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "get_InternalIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CleanData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param providerSuffix: ::StringW (default: csnull)
 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CreateCustomLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, false>(const_cast<void*>(instance), ___internal_method, overrideId, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: csnull)
 UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator(::StringW providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "CreateLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap, false>(const_cast<void*>(instance), ___internal_method, providerSuffix);
}
 ::StringW UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId(::ArrayW<::StringW> internalIdPrefixes, ::StringW v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            "ExpandInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, internalIdPrefixes, v);
}
// Ctor Parameters []
 UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ContentCatalogData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ContentCatalogData>())) {}
 void UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
