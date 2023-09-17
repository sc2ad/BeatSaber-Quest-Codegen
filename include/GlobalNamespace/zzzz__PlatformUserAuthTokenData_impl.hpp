#pragma once
namespace {
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(&::GlobalNamespace::PlatformUserAuthTokenData::get_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221cd0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "get_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_token
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW)>(&::GlobalNamespace::PlatformUserAuthTokenData::set_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221cd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "set_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_validPlatformEnvironment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformEnvironment (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(&::GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221cd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "get_validPlatformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_validPlatformEnvironment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221cd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "set_validPlatformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::PlatformUserAuthTokenData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x221cd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PlatformUserAuthTokenData::__set__token_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::PlatformUserAuthTokenData::__get__token_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PlatformUserAuthTokenData::__set__validPlatformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformEnvironment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::PlatformEnvironment>(value));
}
constexpr ::GlobalNamespace::PlatformEnvironment ::GlobalNamespace::PlatformUserAuthTokenData::__get__validPlatformEnvironment_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformEnvironment, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::GlobalNamespace::PlatformUserAuthTokenData::get_token()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "get_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PlatformUserAuthTokenData::set_token(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "set_token",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::PlatformEnvironment ::GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "get_validPlatformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformEnvironment, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment(::GlobalNamespace::PlatformEnvironment value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            "set_validPlatformEnvironment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validPlatformEnvironment", ty: "::GlobalNamespace::PlatformEnvironment", modifiers: "", def_value: None }]
 ::GlobalNamespace::PlatformUserAuthTokenData::PlatformUserAuthTokenData(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PlatformUserAuthTokenData>(token, validPlatformEnvironment))) {}
 void ::GlobalNamespace::PlatformUserAuthTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token, validPlatformEnvironment);
}
} // end anonymous namespace
