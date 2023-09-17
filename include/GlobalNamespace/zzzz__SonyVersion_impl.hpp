#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SonyVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::____GlobalNamespace__SonyVersion__VersionFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat  ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::FullLong{0};
constexpr ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat  ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::Long{1};
constexpr ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat  ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::FullShort{2};
constexpr ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat  ::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat::Short{3};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_majorVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_majorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221c488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "get_majorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.get_minorVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyVersion::*)()>(&::GlobalNamespace::SonyVersion::get_minorVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221c490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "get_minorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyVersion::*)(uint32_t, uint32_t)>(&::GlobalNamespace::SonyVersion::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x221c498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.GetFromString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SonyVersion (*)(::StringW)>(&::GlobalNamespace::SonyVersion::GetFromString)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x221c4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "GetFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.IsVersionFormatValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::SonyVersion::IsVersionFormatValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x221ca14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "IsVersionFormatValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyVersion.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyVersion::*)(::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat)>(&::GlobalNamespace::SonyVersion::Get)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x221caa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SonyVersion::__set__majorVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::SonyVersion::__get__majorVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SonyVersion::__set__minorVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::SonyVersion::__get__minorVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t ::GlobalNamespace::SonyVersion::get_majorVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "get_majorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t ::GlobalNamespace::SonyVersion::get_minorVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "get_minorVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "majorVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "minorVersion", ty: "uint32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::SonyVersion::SonyVersion(uint32_t majorVersion, uint32_t minorVersion)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SonyVersion>(majorVersion, minorVersion))) {}
 void ::GlobalNamespace::SonyVersion::_ctor(uint32_t majorVersion, uint32_t minorVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, majorVersion, minorVersion);
}
 ::GlobalNamespace::SonyVersion ::GlobalNamespace::SonyVersion::GetFromString(::StringW versionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "GetFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SonyVersion, false>(nullptr, ___internal_method, versionString);
}
 bool ::GlobalNamespace::SonyVersion::IsVersionFormatValid(::StringW versionString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "IsVersionFormatValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, versionString);
}
 ::StringW ::GlobalNamespace::SonyVersion::Get(::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyVersion>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__SonyVersion__VersionFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, format);
}
} // end anonymous namespace
