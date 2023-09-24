#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5SharedPackageSKUsSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5PublisherSKUSettingsSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType  GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType::Application{0};
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType  GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType::RemasterPatch{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion.get_masterVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            "get_masterVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion.get_contentVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            "get_contentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::*)()>(&GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::__set__masterVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__masterVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::__set__contentVersion(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::__get__contentVersion() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::get_masterVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            "get_masterVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::get_contentVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            "get_contentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::New_ctor()  {
GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.get_availableSKUs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_availableSKUs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.get_conceptId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_conceptId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.get_buildType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_buildType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.get_buildVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_buildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.get_latestBuildVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_latestBuildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO.GetPrimarySKU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PS5PublisherSKUSettingsSO (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x221a884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "GetPrimarySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PS5SharedPackageSKUsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS5SharedPackageSKUsSO::*)()>(&GlobalNamespace::PS5SharedPackageSKUsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221a8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__availableSKUs(::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO>>(value));
}
constexpr ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> GlobalNamespace::PS5SharedPackageSKUsSO::__get__availableSKUs() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__conceptId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PS5SharedPackageSKUsSO::__get__conceptId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__buildType(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__buildVersion(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion GlobalNamespace::PS5SharedPackageSKUsSO::__get__buildVersion() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PS5SharedPackageSKUsSO::__set__latestBuildVersion(GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion GlobalNamespace::PS5SharedPackageSKUsSO::__get__latestBuildVersion() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO> GlobalNamespace::PS5SharedPackageSKUsSO::get_availableSKUs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_availableSKUs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::PS5PublisherSKUSettingsSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::PS5SharedPackageSKUsSO::get_conceptId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_conceptId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType GlobalNamespace::PS5SharedPackageSKUsSO::get_buildType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_buildType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__BuildType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion GlobalNamespace::PS5SharedPackageSKUsSO::get_buildVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_buildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion GlobalNamespace::PS5SharedPackageSKUsSO::get_latestBuildVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "get_latestBuildVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__PS5SharedPackageSKUsSO__PS5BuildVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PS5PublisherSKUSettingsSO GlobalNamespace::PS5SharedPackageSKUsSO::GetPrimarySKU()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            "GetPrimarySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PS5PublisherSKUSettingsSO, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PS5SharedPackageSKUsSO GlobalNamespace::PS5SharedPackageSKUsSO::New_ctor()  {
GlobalNamespace::PS5SharedPackageSKUsSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::PS5SharedPackageSKUsSO>())};
return o;
}
 void GlobalNamespace::PS5SharedPackageSKUsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS5SharedPackageSKUsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
